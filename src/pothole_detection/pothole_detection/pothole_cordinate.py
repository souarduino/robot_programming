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
from geometry_msgs.msg import PoseStamped
from cv_bridge import CvBridge, CvBridgeError
from tf2_geometry_msgs import do_transform_pose
from detection_interfaces.msg import InferenceResult

class potholeCordinate(Node):
    def __init__(self):
        super().__init__("pothole_cordinate")
        self.bridge = CvBridge()
        self.camera_model=None
        self.image_depth_ros=None
        self.image_color = None
        self.image_depth = None
        self.color2depth_aspect=1.0

        self.camera_info_sub = self.create_subscription(CameraInfo, '/limo/depth_camera_link/camera_info',
                                                self.camera_info_callback, 
                                                qos_profile=qos.qos_profile_sensor_data)
        
        self.object_location_pub = self.create_publisher(PoseStamped, '/limo/pothole_location', 10)

        self.image_sub = self.create_subscription(InferenceResult, '/inference_result', 
                                                  self.pothole_callback, qos_profile=qos.qos_profile_sensor_data)
        self.image_sub = self.create_subscription(Image, '/limo/depth_camera_link/image_raw', 
                                                  self.image_color_callback, qos_profile=qos.qos_profile_sensor_data)
        
        self.image_sub = self.create_subscription(Image, '/limo/depth_camera_link/depth/image_raw', 
                                                  self.image_depth_callback, qos_profile=qos.qos_profile_sensor_data)
        
        self.tf_buffer = Buffer()
        self.tf_listener = TransformListener(self.tf_buffer, self)
    def get_tf_transform(self, target_frame, source_frame):
        try:
            transform = self.tf_buffer.lookup_transform(target_frame, source_frame, rclpy.time.Time())
            return transform
        except Exception as e:
            self.get_logger().warning(f"Failed to lookup transform: {str(e)}")
            return None
    def camera_info_callback(self, data):
        if not self.camera_model:
            self.camera_model = image_geometry.PinholeCameraModel()
        self.camera_model.fromCameraInfo(data)
    def image_color_callback(self, data):
        # wait for camera_model and depth image to arrive
        if self.camera_model is None:
            return

        if self.image_depth_ros is None:
            return

        # covert images to open_cv
        try:
            self.image_color = self.bridge.imgmsg_to_cv2(data, "bgr8")
            self.image_depth = self.bridge.imgmsg_to_cv2(self.image_depth_ros, "32FC1")
        except CvBridgeError as e:
            print(e)

        # self.pothole_callback(data, image_color, image_depth)

    def image_depth_callback(self, data):
        self.image_depth_ros = data

    def pothole_callback(self, data):
        # wait for camera_model and depth image to arrive
        if self.camera_model is None:
            return

        if self.image_depth_ros is None:
            return
        # else: 
        #     try:
        #         image_depth =self.bridge.imgmsg_to_cv2(self.image_depth_ros, "32FC1")
        #     except CvBridgeError as e:
        #         print(e)
        #         return
        # calculate the y,x centroid
        image_coords = ((data.left + (data.right-data.left))/2,(data.top + (data.bottom-data.top))/2)
        # "map" from color to depth image
        depth_coords = (self.image_depth.shape[0]/2 + (image_coords[0] - self.image_color.shape[0]/2)*self.color2depth_aspect, 
            self.image_depth.shape[1]/2 + (image_coords[1] - self.image_color.shape[1]/2)*self.color2depth_aspect)
        # get the depth reading at the centroid location
        depth_value = self.image_depth[int(depth_coords[0]), int(depth_coords[1])] # you might need to do some boundary checking first!

        print('image coords: ', image_coords)
        print('depth coords: ', depth_coords)
        print('depth value: ', depth_value)

        # calculate object's 3d location in camera coords
        camera_coords = self.camera_model.projectPixelTo3dRay((image_coords[1], image_coords[0])) #project the image coords (x,y) into 3D ray in camera coords 
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

        # publish so we can see that in rviz
        self.object_location_pub.publish(object_location)        

        # print out the coordinates in the odom frame
        transform = self.get_tf_transform('depth_link', 'odom')
        p_camera = do_transform_pose(object_location.pose, transform)

        print('odom coords: ', p_camera.position)

        # if self.visualisation:
        #     # draw circles
        #     cv2.circle(image_color, (int(image_coords[1]), int(image_coords[0])), 10, 255, -1)
        #     cv2.circle(image_depth, (int(depth_coords[1]), int(depth_coords[0])), 5, 255, -1)

        #     #resize and adjust for visualisation
        #     image_color = cv2.resize(image_color, (0,0), fx=0.5, fy=0.5)
        #     image_depth *= 1.0/10.0 # scale for visualisation (max range 10.0 m)

        #     cv2.imshow("image depth", image_depth)
        #     cv2.imshow("image color", image_color)
        #     cv2.waitKey(1)

def main(args=None):
    rclpy.init(args=args)
    pothole_projection = potholeCordinate()
    rclpy.spin(pothole_projection)
    pothole_projection.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()