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
from geometry_msgs.msg import PoseStamped,PoseArray
from cv_bridge import CvBridge, CvBridgeError
from tf2_geometry_msgs import do_transform_pose
import numpy as np


font = cv2.FONT_HERSHEY_SIMPLEX
fontScale = 0.5
color = (255,0,255)
thickness = 1
def get_limits(color):
    c=np.uint8([[color]])# here insert the bgr values which you want to convert to hev
    hsvC=cv2.cvtColor(c, cv2.COLOR_BGR2HSV)

    lowerLimit=hsvC[0][0][0]-10,100,100
    upperLimit=hsvC[0][0][0]+10,255,255

    lowerLimit=np.array(lowerLimit,dtype=np.uint8)
    upperLimit=np.array(upperLimit,dtype=np.uint8)

    return lowerLimit, upperLimit

class ObjectDetector(Node):
    camera_model = None
    image_depth_ros = None
    image_coords=None

    visualisation = True
    # aspect ration between color and depth cameras
    # calculated as (color_horizontal_FOV/color_width) / (depth_horizontal_FOV/depth_width) from the dabai camera parameters
    color2depth_aspect = 1.0 # for a simulated camera

    def __init__(self):    
        super().__init__('image_projection_3')
        self.bridge = CvBridge()

        self.camera_info_sub = self.create_subscription(CameraInfo, '/limo/depth_camera_link/camera_info',
                                                self.camera_info_callback, 
                                                qos_profile=qos.qos_profile_sensor_data)
        self.img_pub = self.create_publisher(Image, "/opencv_image_result", 1)
        self.object_location_pub = self.create_publisher(PoseArray, '/limo/object_location', 10)
        self.pothole_location_pub = self.create_publisher(PoseArray, '/limo/pothole_location_array', 10)

        

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
            raise ValueError (e)

    def camera_info_callback(self, data):
        if not self.camera_model:
            self.camera_model = image_geometry.PinholeCameraModel()
        self.camera_model.fromCameraInfo(data)

    def image_depth_callback(self, data):
        self.image_depth_ros = data

    def image_color_callback(self, data):
        array_pose=PoseArray()
        pothole_array_pose=PoseArray()
        array_pose.header.frame_id = "depth_link"
        pothole_array_pose.header.frame_id="odom"
        # wait for camera_model and depth image to arrive
        if self.camera_model is None:
            return

        if self.image_depth_ros is None:
            return

        # covert images to open_cv
        try:
            image_color = self.bridge.imgmsg_to_cv2(data, "bgr8")
            lowerLimit, upperLimit=get_limits([93,5,85])
            HsvImage=cv2.cvtColor(image_color,cv2.COLOR_BGR2HSV)
            mask=cv2.inRange(HsvImage,lowerLimit,upperLimit)
            contours, hierarchy=cv2.findContours(mask, cv2.RETR_EXTERNAL,cv2.CHAIN_APPROX_SIMPLE)
            image_depth = self.bridge.imgmsg_to_cv2(self.image_depth_ros, "32FC1")
        except CvBridgeError as e:
            print(e)
        if len(contours)!=0:
            print(len(contours))
            nu_bbox=0
            for contour in contours:
                nu_bbox+=1
                if cv2.contourArea(contour)>500:
                     M=cv2.moments(contour)
                     xb,yb,w,h=cv2.boundingRect(contour)
                     coordinates = (xb,yb-10)
                     text="pothole"+str(nu_bbox)
                     image = cv2.putText(image_color, text, coordinates, font, fontScale, color, thickness, cv2.LINE_AA)
                     image=cv2.rectangle(image_color,(xb,yb),(xb+w,yb+h),(0,0,255),5)
                     self.img_pub.publish(self.bridge.cv2_to_imgmsg(image,"bgr8"))
                     # calculate the y,x centroid
                     image_coords = (M["m01"] / M["m00"], M["m10"] / M["m00"])
                     depth_coords = (image_depth.shape[0]/2 + (image_coords[0] - image_color.shape[0]/2)*self.color2depth_aspect, image_depth.shape[1]/2 + (image_coords[1] - image_color.shape[1]/2)*self.color2depth_aspect)
                     # get the depth reading at the centroid location
                     depth_value = image_depth[int(depth_coords[0]), int(depth_coords[1])] # you might need to do some boundary checking first!
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
                     array_pose.poses.append(object_location.pose)
                     # publish so we can see that in rviz
                     #self.object_location_pub.publish(object_location)        

                     # print out the coordinates in the odom frame
                     try:
                         transform = self.get_tf_transform('odom','depth_link')
                     except Exception as e:
                         return e
                     p_camera = do_transform_pose(object_location.pose, transform)
                     # TODO use p_camera to build new Pose object and append to array_poses for pothole location in world frame
                     pothole_array_pose.poses.append(p_camera)
                     print('odom coords: ', p_camera.position)
            self.object_location_pub.publish(array_pose)
            self.pothole_location_pub.publish(pothole_array_pose)
            
                     # "map" from color to depth image
                     
        else:
            print("no pothole detected in the frame")
            self.img_pub.publish(self.bridge.cv2_to_imgmsg(image_color,"bgr8"))
            return
def main(args=None):
    rclpy.init(args=args)
    image_projection = ObjectDetector()
    rclpy.spin(image_projection)
    image_projection.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()