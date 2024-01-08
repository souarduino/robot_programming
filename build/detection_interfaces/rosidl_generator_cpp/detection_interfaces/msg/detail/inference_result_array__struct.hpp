// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from detection_interfaces:msg/InferenceResultArray.idl
// generated code does not contain a copyright notice

#ifndef DETECTION_INTERFACES__MSG__DETAIL__INFERENCE_RESULT_ARRAY__STRUCT_HPP_
#define DETECTION_INTERFACES__MSG__DETAIL__INFERENCE_RESULT_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'results'
#include "detection_interfaces/msg/detail/inference_result__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__detection_interfaces__msg__InferenceResultArray __attribute__((deprecated))
#else
# define DEPRECATED__detection_interfaces__msg__InferenceResultArray __declspec(deprecated)
#endif

namespace detection_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct InferenceResultArray_
{
  using Type = InferenceResultArray_<ContainerAllocator>;

  explicit InferenceResultArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit InferenceResultArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _results_type =
    std::vector<detection_interfaces::msg::InferenceResult_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<detection_interfaces::msg::InferenceResult_<ContainerAllocator>>>;
  _results_type results;

  // setters for named parameter idiom
  Type & set__results(
    const std::vector<detection_interfaces::msg::InferenceResult_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<detection_interfaces::msg::InferenceResult_<ContainerAllocator>>> & _arg)
  {
    this->results = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    detection_interfaces::msg::InferenceResultArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const detection_interfaces::msg::InferenceResultArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<detection_interfaces::msg::InferenceResultArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<detection_interfaces::msg::InferenceResultArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      detection_interfaces::msg::InferenceResultArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<detection_interfaces::msg::InferenceResultArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      detection_interfaces::msg::InferenceResultArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<detection_interfaces::msg::InferenceResultArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<detection_interfaces::msg::InferenceResultArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<detection_interfaces::msg::InferenceResultArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__detection_interfaces__msg__InferenceResultArray
    std::shared_ptr<detection_interfaces::msg::InferenceResultArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__detection_interfaces__msg__InferenceResultArray
    std::shared_ptr<detection_interfaces::msg::InferenceResultArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InferenceResultArray_ & other) const
  {
    if (this->results != other.results) {
      return false;
    }
    return true;
  }
  bool operator!=(const InferenceResultArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InferenceResultArray_

// alias to use template instance with default allocator
using InferenceResultArray =
  detection_interfaces::msg::InferenceResultArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace detection_interfaces

#endif  // DETECTION_INTERFACES__MSG__DETAIL__INFERENCE_RESULT_ARRAY__STRUCT_HPP_
