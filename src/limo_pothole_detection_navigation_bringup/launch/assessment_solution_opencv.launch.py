from launch import LaunchDescription
from launch_ros.actions import Node
def generate_launch_description():

    ld=LaunchDescription()
    pothole_detection_yolo=Node(
        package="pothole_detection",
        executable="pothole_detection_opencv"
    )
    pothole_location=Node(
        package="pothole_detection",
        executable="pothole_cluster_opencv"
    )

    navigation=Node(
        package="navigation",
        executable="Nav_through_waypoint"
    )
    
    ld.add_action(pothole_detection_yolo)
    ld.add_action(pothole_location)
    ld.add_action(navigation)
    return ld