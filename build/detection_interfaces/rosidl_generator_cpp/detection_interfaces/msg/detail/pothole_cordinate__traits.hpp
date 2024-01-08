// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from detection_interfaces:msg/PotholeCordinate.idl
// generated code does not contain a copyright notice

#ifndef DETECTION_INTERFACES__MSG__DETAIL__POTHOLE_CORDINATE__TRAITS_HPP_
#define DETECTION_INTERFACES__MSG__DETAIL__POTHOLE_CORDINATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "detection_interfaces/msg/detail/pothole_cordinate__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace detection_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const PotholeCordinate & msg,
  std::ostream & out)
{
  out << "{";
  // member: id_pothole
  {
    out << "id_pothole: ";
    rosidl_generator_traits::value_to_yaml(msg.id_pothole, out);
    out << ", ";
  }

  // member: x_cordinate
  {
    out << "x_cordinate: ";
    rosidl_generator_traits::value_to_yaml(msg.x_cordinate, out);
    out << ", ";
  }

  // member: y_cordinate
  {
    out << "y_cordinate: ";
    rosidl_generator_traits::value_to_yaml(msg.y_cordinate, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PotholeCordinate & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id_pothole
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id_pothole: ";
    rosidl_generator_traits::value_to_yaml(msg.id_pothole, out);
    out << "\n";
  }

  // member: x_cordinate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_cordinate: ";
    rosidl_generator_traits::value_to_yaml(msg.x_cordinate, out);
    out << "\n";
  }

  // member: y_cordinate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_cordinate: ";
    rosidl_generator_traits::value_to_yaml(msg.y_cordinate, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PotholeCordinate & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace detection_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use detection_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const detection_interfaces::msg::PotholeCordinate & msg,
  std::ostream & out, size_t indentation = 0)
{
  detection_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use detection_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const detection_interfaces::msg::PotholeCordinate & msg)
{
  return detection_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<detection_interfaces::msg::PotholeCordinate>()
{
  return "detection_interfaces::msg::PotholeCordinate";
}

template<>
inline const char * name<detection_interfaces::msg::PotholeCordinate>()
{
  return "detection_interfaces/msg/PotholeCordinate";
}

template<>
struct has_fixed_size<detection_interfaces::msg::PotholeCordinate>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<detection_interfaces::msg::PotholeCordinate>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<detection_interfaces::msg::PotholeCordinate>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DETECTION_INTERFACES__MSG__DETAIL__POTHOLE_CORDINATE__TRAITS_HPP_
