from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():

    ld=LaunchDescription()
    pothole_detection_yolo=Node(
        package="pothole_detection",
        executable="pothole_detection_yolo"
    )
    pothole_location=Node(
        package="pothole_detection",
        executable="pothole_location"
    )
    pothole_cluster=Node(
        package="pothole_detection",
        executable="pothole_cluster_yolo"
    )
    ld.add_action(pothole_detection_yolo)
    ld.add_action(pothole_location)
    ld.add_action(pothole_cluster)
    return ld