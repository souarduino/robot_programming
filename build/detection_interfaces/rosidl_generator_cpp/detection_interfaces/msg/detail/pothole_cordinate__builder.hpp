// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from detection_interfaces:msg/PotholeCordinate.idl
// generated code does not contain a copyright notice

#ifndef DETECTION_INTERFACES__MSG__DETAIL__POTHOLE_CORDINATE__BUILDER_HPP_
#define DETECTION_INTERFACES__MSG__DETAIL__POTHOLE_CORDINATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "detection_interfaces/msg/detail/pothole_cordinate__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace detection_interfaces
{

namespace msg
{

namespace builder
{

class Init_PotholeCordinate_y_cordinate
{
public:
  explicit Init_PotholeCordinate_y_cordinate(::detection_interfaces::msg::PotholeCordinate & msg)
  : msg_(msg)
  {}
  ::detection_interfaces::msg::PotholeCordinate y_cordinate(::detection_interfaces::msg::PotholeCordinate::_y_cordinate_type arg)
  {
    msg_.y_cordinate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::detection_interfaces::msg::PotholeCordinate msg_;
};

class Init_PotholeCordinate_x_cordinate
{
public:
  explicit Init_PotholeCordinate_x_cordinate(::detection_interfaces::msg::PotholeCordinate & msg)
  : msg_(msg)
  {}
  Init_PotholeCordinate_y_cordinate x_cordinate(::detection_interfaces::msg::PotholeCordinate::_x_cordinate_type arg)
  {
    msg_.x_cordinate = std::move(arg);
    return Init_PotholeCordinate_y_cordinate(msg_);
  }

private:
  ::detection_interfaces::msg::PotholeCordinate msg_;
};

class Init_PotholeCordinate_id_pothole
{
public:
  Init_PotholeCordinate_id_pothole()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PotholeCordinate_x_cordinate id_pothole(::detection_interfaces::msg::PotholeCordinate::_id_pothole_type arg)
  {
    msg_.id_pothole = std::move(arg);
    return Init_PotholeCordinate_x_cordinate(msg_);
  }

private:
  ::detection_interfaces::msg::PotholeCordinate msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::detection_interfaces::msg::PotholeCordinate>()
{
  return detection_interfaces::msg::builder::Init_PotholeCordinate_id_pothole();
}

}  // namespace detection_interfaces

#endif  // DETECTION_INTERFACES__MSG__DETAIL__POTHOLE_CORDINATE__BUILDER_HPP_
