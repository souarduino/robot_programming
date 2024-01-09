# Python libs
import rclpy
from rclpy.node import Node
from rclpy import qos

# OpenCV
import cv2

# ROS libraries
import image_geometry
from tf2_ros import Buffer, TransformListener

# ROS Messages
from sensor_msgs.msg import Image, CameraInfo
from geometry_msgs.msg import PoseStamped, PoseArray
from cv_bridge import CvBridge, CvBridgeError
from tf2_geometry_msgs import do_transform_pose
from detection_interfaces.msg import InferenceResultArray
import threading

class potholePose(Node):
    camera_model = None
    visualisation = True
    image_depth_ros = None
    # aspect ration between color and depth cameras
    # calculated as (color_horizontal_FOV/color_width) / (depth_horizontal_FOV/depth_width) from the dabai camera parameters
    color2depth_aspect = 1.0 # for a simulated camera

    def __init__(self):    
        super().__init__('image_projection_3')
        print("Init")
        self.bridge = CvBridge()
        self.image_coords=None
        self.image_sub=None
        self.camera_info_sub = self.create_subscription(CameraInfo, '/limo/depth_camera_link/camera_info',
                                                self.camera_info_callback, 
                                                qos_profile=qos.qos_profile_sensor_data)
        self.image_sub = self.create_subscription(InferenceResultArray, '/inference_result', 
                                                  self.pothole_callback, qos_profile=qos.qos_profile_sensor_data)
        self.object_location_pub = self.create_publisher(PoseArray, '/limo/object_location_array', 10)
        self.pothole_location_pub = self.create_publisher(PoseArray, '/limo/pothole_location_array', 10)
         
        self.image_sub = self.create_subscription(Image, '/limo/depth_camera_link/depth/image_raw', 
                                                  self.image_depth_callback, qos_profile=qos.qos_profile_sensor_data)
        
        self.tf_buffer = Buffer()
        self.tf_listener = TransformListener(self.tf_buffer, self)

    def pothole_callback(self, data_array):
        print("Enter Callback")
        array_pose=PoseArray()
        pothole_array_pose=PoseArray()
        array_pose.header.frame_id = "depth_link"
        pothole_array_pose.header.frame_id="odom"
         # calculate the y,x centroid
        if self.camera_model is None:
            return

        if self.image_depth_ros is None:
            return
        print("Exit Callback Checks")
        # covert images to open_cv
        try:
            image_depth = self.bridge.imgmsg_to_cv2(self.image_depth_ros, "32FC1")
        except CvBridgeError as e:
            print(e)
            return
        for data in data_array.results:
            print(data)

            self.image_coords = (data.left + (data.right-data.left)/2,data.top + (data.bottom-data.top)/2)
            depth_coords = (image_depth.shape[0]/2 + (self.image_coords[0] - image_depth.shape[0]/2)*self.color2depth_aspect, 
            image_depth.shape[1]/2 + (self.image_coords[1] - image_depth.shape[1]/2)*self.color2depth_aspect)
            # get the depth reading at the centroid location
            depth_value = image_depth[int(depth_coords[0]), int(depth_coords[1])] # you might need to do some boundary checking first!

            # calculate object's 3d location in camera coords
            camera_coords = self.camera_model.projectPixelTo3dRay((self.image_coords[1], self.image_coords[0])) #project the image coords (x,y) into 3D ray in camera coords 
            camera_coords = [x/camera_coords[2] for x in camera_coords] # adjust the resulting vector so that z = 1
            camera_coords = [x*depth_value for x in camera_coords] # multiply the vector by depth

            print('camera coords: ', camera_coords)

            #define a point in camera coordinates
            object_location = PoseStamped()
            object_location.header.frame_id = "depth_link"
            object_location.pose.orientation.w = 1.0
            object_location.pose.position.x = camera_coords[0]
            object_location.pose.position.y = camera_coords[1]
            object_location.pose.position.z = camera_coords[2]
            array_pose.poses.append(object_location.pose)
            # publish so we can see that in rviz
            #self.object_location_pub.publish(object_location)        

            # print out the coordinates in the odom frame
            transform = self.get_tf_transform('odom','depth_link')
            p_camera = do_transform_pose(object_location.pose, transform)
            # TODO use p_camera to build new Pose object and append to array_poses for pothole location in world frame
            pothole_array_pose.poses.append(p_camera)
            print('odom coords: ', p_camera.position)
        self.object_location_pub.publish(array_pose)
        self.pothole_location_pub.publish(pothole_array_pose)
    
    def get_tf_transform(self, target_frame, source_frame):
        try:
            transform = self.tf_buffer.lookup_transform(target_frame, source_frame, rclpy.time.Time())
            
            return transform
        except Exception as e:
            self.get_logger().warning(f"Failed to lookup transform: {str(e)}")
            return None

    def camera_info_callback(self, data):
        print("Got camera info")
        if not self.camera_model:
            self.camera_model = image_geometry.PinholeCameraModel()
        self.camera_model.fromCameraInfo(data)

    def image_depth_callback(self, data):
        print("Got depth")
        self.image_depth_ros = data

def main(args=None):
    rclpy.init(args=args)
    image_projection = potholePose()
    rclpy.spin(image_projection)
    image_projection.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()