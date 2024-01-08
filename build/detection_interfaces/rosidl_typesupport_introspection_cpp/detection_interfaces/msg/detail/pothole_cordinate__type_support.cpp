// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from detection_interfaces:msg/PotholeCordinate.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "detection_interfaces/msg/detail/pothole_cordinate__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace detection_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void PotholeCordinate_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) detection_interfaces::msg::PotholeCordinate(_init);
}

void PotholeCordinate_fini_function(void * message_memory)
{
  auto typed_message = static_cast<detection_interfaces::msg::PotholeCordinate *>(message_memory);
  typed_message->~PotholeCordinate();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PotholeCordinate_message_member_array[3] = {
  {
    "id_pothole",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(detection_interfaces::msg::PotholeCordinate, id_pothole),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "x_cordinate",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(detection_interfaces::msg::PotholeCordinate, x_cordinate),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "y_cordinate",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(detection_interfaces::msg::PotholeCordinate, y_cordinate),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PotholeCordinate_message_members = {
  "detection_interfaces::msg",  // message namespace
  "PotholeCordinate",  // message name
  3,  // number of fields
  sizeof(detection_interfaces::msg::PotholeCordinate),
  PotholeCordinate_message_member_array,  // message members
  PotholeCordinate_init_function,  // function to initialize message memory (memory has to be allocated)
  PotholeCordinate_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PotholeCordinate_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PotholeCordinate_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace detection_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<detection_interfaces::msg::PotholeCordinate>()
{
  return &::detection_interfaces::msg::rosidl_typesupport_introspection_cpp::PotholeCordinate_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, detection_interfaces, msg, PotholeCordinate)() {
  return &::detection_interfaces::msg::rosidl_typesupport_introspection_cpp::PotholeCordinate_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
