import rclpy
from rclpy.node import Node 
from geometry_msgs.msg import PoseArray
from rclpy import qos
import numpy as np


def findDistance(a,p):
   return np.sqrt((a[0]-p[0])*(a[0]-p[0])+(a[1]-p[1])*(a[1]-p[1]))
class clusterPothole(Node):
    pothole_list=[]
    def __init__(self):
        super().__init__('pothole_clustering')
        self.image_sub = self.create_subscription(PoseArray, '/limo/pothole_location_array', 
                                                  self.pothole_clustering_callback, qos_profile=qos.qos_profile_sensor_data)
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
                    if a<0.3:
                        s = 0
                        break
                if s == 1:
                    self.pothole_list.append([pose.position.x,pose.position.y])
        print(self.pothole_list)
        print(len(self.pothole_list))
                # otherwise set the closest location to new value (update pothole)
def main(args=None):
    rclpy.init(args=args)
    cluster = clusterPothole()
    rclpy.spin(cluster)
    cluster.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()