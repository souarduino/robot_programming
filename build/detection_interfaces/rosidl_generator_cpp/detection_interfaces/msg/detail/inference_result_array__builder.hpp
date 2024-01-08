// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from detection_interfaces:msg/InferenceResultArray.idl
// generated code does not contain a copyright notice

#ifndef DETECTION_INTERFACES__MSG__DETAIL__INFERENCE_RESULT_ARRAY__BUILDER_HPP_
#define DETECTION_INTERFACES__MSG__DETAIL__INFERENCE_RESULT_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "detection_interfaces/msg/detail/inference_result_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace detection_interfaces
{

namespace msg
{

namespace builder
{

class Init_InferenceResultArray_results
{
public:
  Init_InferenceResultArray_results()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::detection_interfaces::msg::InferenceResultArray results(::detection_interfaces::msg::InferenceResultArray::_results_type arg)
  {
    msg_.results = std::move(arg);
    return std::move(msg_);
  }

private:
  ::detection_interfaces::msg::InferenceResultArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::detection_interfaces::msg::InferenceResultArray>()
{
  return detection_interfaces::msg::builder::Init_InferenceResultArray_results();
}

}  // namespace detection_interfaces

#endif  // DETECTION_INTERFACES__MSG__DETAIL__INFERENCE_RESULT_ARRAY__BUILDER_HPP_
