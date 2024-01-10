from setuptools import find_packages, setup

package_name = 'pothole_detection'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='soumo',
    maintainer_email='soumo@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "dataset_extraction=pothole_detection.dataset_extraction:main",
            "pothole_detection_yolo=pothole_detection.pothole_detection_yolov8:main",
            "pothole_cluster=pothole_detection.clusterpothole:main",
            "pothole_location1=pothole_detection.pothole_coordinate:main",
            "pothole_detection_opencv=pothole_detection.potholeDetectorOpencv:main"
            
        ],
    },
)
