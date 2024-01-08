import rclpy
from cv_bridge import CvBridge
from ultralytics import YOLO
from rclpy.node import Node
from sensor_msgs.msg import Image
from detection_interfaces.msg import InferenceResult, InferenceResultArray
bridge =CvBridge()

class potholeDectection(Node):
    def __init__(self):
        super().__init__('subscribe_to_camera')
        self.model=YOLO("/home/soumo/ros_ws/src/pothole_detetion/pothole_detetion/yolov8s_50_epoch.pt")
        self.subscription = self.create_subscription(Image,
            '/limo/depth_camera_link/image_raw',
            self.image_callback, 10)
        self.subscription
        self.img_pub = self.create_publisher(Image, "/image_result", 1)
        self.inference_pub=self.create_publisher(InferenceResultArray,"/inference_result",1)
    def image_callback(self, msg):
            try:
                img=bridge.imgmsg_to_cv2(msg,"bgr8")
                inference=self.model(img)
                self.inference_result_array = InferenceResultArray()
                for result in inference:
                    boxes=result.boxes
                    for box in boxes:
                        self.inference_result=InferenceResult()
                        b=box.xyxy[0].to('cpu').detach().numpy().copy()# get the box coordinate in (top)
                        c=box.cls
                        self.inference_result.class_name=self.model.names[int(c)]
                        self.inference_result.top=int(b[0])
                        self.inference_result.left=int(b[1])
                        self.inference_result.bottom=int(b[2])
                        self.inference_result.right=int(b[3])
                        self.inference_result_array.results.append(self.inference_result)
                annotated_frame=inference[0].plot()
                img_msg = bridge.cv2_to_imgmsg(annotated_frame) 
                self.img_pub.publish(img_msg)
                self.inference_pub.publish(self.inference_result_array)
            except Exception as e:
                self.get_logger().error('Error processing image: %s' % str(e))
def main(args=None):
    # the first thing to do here is to initialise ros2 communication
    rclpy.init()
    #here we can create the node ( the node is not the program itsel and it not the file neither it is create inside the program)
    pothole_detection=potholeDectection()
    rclpy.spin(pothole_detection)
    rclpy.shutdown()

if __name__=='__main__':
    main()