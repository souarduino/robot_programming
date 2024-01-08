// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from detection_interfaces:msg/PotholeCordinate.idl
// generated code does not contain a copyright notice

#ifndef DETECTION_INTERFACES__MSG__DETAIL__POTHOLE_CORDINATE__STRUCT_HPP_
#define DETECTION_INTERFACES__MSG__DETAIL__POTHOLE_CORDINATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__detection_interfaces__msg__PotholeCordinate __attribute__((deprecated))
#else
# define DEPRECATED__detection_interfaces__msg__PotholeCordinate __declspec(deprecated)
#endif

namespace detection_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PotholeCordinate_
{
  using Type = PotholeCordinate_<ContainerAllocator>;

  explicit PotholeCordinate_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id_pothole = 0ll;
      this->x_cordinate = 0ll;
      this->y_cordinate = 0ll;
    }
  }

  explicit PotholeCordinate_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id_pothole = 0ll;
      this->x_cordinate = 0ll;
      this->y_cordinate = 0ll;
    }
  }

  // field types and members
  using _id_pothole_type =
    int64_t;
  _id_pothole_type id_pothole;
  using _x_cordinate_type =
    int64_t;
  _x_cordinate_type x_cordinate;
  using _y_cordinate_type =
    int64_t;
  _y_cordinate_type y_cordinate;

  // setters for named parameter idiom
  Type & set__id_pothole(
    const int64_t & _arg)
  {
    this->id_pothole = _arg;
    return *this;
  }
  Type & set__x_cordinate(
    const int64_t & _arg)
  {
    this->x_cordinate = _arg;
    return *this;
  }
  Type & set__y_cordinate(
    const int64_t & _arg)
  {
    this->y_cordinate = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    detection_interfaces::msg::PotholeCordinate_<ContainerAllocator> *;
  using ConstRawPtr =
    const detection_interfaces::msg::PotholeCordinate_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<detection_interfaces::msg::PotholeCordinate_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<detection_interfaces::msg::PotholeCordinate_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      detection_interfaces::msg::PotholeCordinate_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<detection_interfaces::msg::PotholeCordinate_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      detection_interfaces::msg::PotholeCordinate_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<detection_interfaces::msg::PotholeCordinate_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<detection_interfaces::msg::PotholeCordinate_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<detection_interfaces::msg::PotholeCordinate_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__detection_interfaces__msg__PotholeCordinate
    std::shared_ptr<detection_interfaces::msg::PotholeCordinate_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__detection_interfaces__msg__PotholeCordinate
    std::shared_ptr<detection_interfaces::msg::PotholeCordinate_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PotholeCordinate_ & other) const
  {
    if (this->id_pothole != other.id_pothole) {
      return false;
    }
    if (this->x_cordinate != other.x_cordinate) {
      return false;
    }
    if (this->y_cordinate != other.y_cordinate) {
      return false;
    }
    return true;
  }
  bool operator!=(const PotholeCordinate_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PotholeCordinate_

// alias to use template instance with default allocator
using PotholeCordinate =
  detection_interfaces::msg::PotholeCordinate_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace detection_interfaces

#endif  // DETECTION_INTERFACES__MSG__DETAIL__POTHOLE_CORDINATE__STRUCT_HPP_
