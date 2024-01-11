import rclpy
from rclpy.node import Node 
from geometry_msgs.msg import PoseArray
from rclpy import qos
import numpy as np
from visualization_msgs.msg import MarkerArray, Marker


def findDistance(a,p):
   return np.sqrt((a[0]-p[0])*(a[0]-p[0])+(a[1]-p[1])*(a[1]-p[1]))
class clusterPothole(Node):
    pothole_list=[]
    def __init__(self):
        super().__init__('pothole_clustering')
        self.image_sub = self.create_subscription(PoseArray, '/limo/pothole_location_array', 
                                                  self.pothole_clustering_callback, qos_profile=qos.qos_profile_sensor_data)
        self.pothole_marker = self.create_publisher( MarkerArray, "/visualization_marker", 10)
        self.markers = MarkerArray()
    def pothole_clustering_callback(self, data):
        
        for pose in data.poses:
            if len(self.pothole_list)==0:
                self.pothole_list.append([pose.position.x,pose.position.y])
            else:
                s = 1
                # compare pose with every position in self.pothole_list
                for pose1 in self.pothole_list:
                    a=findDistance((pose.position.x,pose.position.y),pose1)
                    # if distance is > a value add pose to self.pothole_list (new pothole)
                    # find the closest pothole by sorting
                    if a<0.35:
                        s = 0
                        break
                if s == 1:
                    self.pothole_list.append([pose.position.x,pose.position.y])
                    marker = Marker()
                    marker.id = len(self.markers.markers)
                    marker.header.frame_id = "/odom"
                    marker.action = Marker.ADD
                    marker.color.a = 1.0
                    marker.color.r = 0.0
                    marker.color.g = 1.0
                    marker.color.b = 0.0
                    marker.scale.x = 0.05
                    marker.scale.y = 0.05
                    marker.scale.z = 0.05
                    marker.pose = pose
                    marker.type = 2
                    marker.ns = "marked"
                    marker.lifetime.sec = 0
                    self.markers.markers.append(marker)
        print(self.pothole_list)
        print(len(self.pothole_list))
        self.get_logger().info(f"the number of pothole detected is {str(len(self.pothole_list))}")
        self.pothole_marker.publish(self.markers)
                # otherwise set the closest location to new value (update pothole)
def main(args=None):
    rclpy.init(args=args)
    cluster = clusterPothole()
    rclpy.spin(cluster)
    cluster.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()