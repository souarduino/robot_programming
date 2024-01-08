// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from detection_interfaces:msg/PotholeCordinate.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "detection_interfaces/msg/detail/pothole_cordinate__rosidl_typesupport_introspection_c.h"
#include "detection_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "detection_interfaces/msg/detail/pothole_cordinate__functions.h"
#include "detection_interfaces/msg/detail/pothole_cordinate__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void detection_interfaces__msg__PotholeCordinate__rosidl_typesupport_introspection_c__PotholeCordinate_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  detection_interfaces__msg__PotholeCordinate__init(message_memory);
}

void detection_interfaces__msg__PotholeCordinate__rosidl_typesupport_introspection_c__PotholeCordinate_fini_function(void * message_memory)
{
  detection_interfaces__msg__PotholeCordinate__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember detection_interfaces__msg__PotholeCordinate__rosidl_typesupport_introspection_c__PotholeCordinate_message_member_array[3] = {
  {
    "id_pothole",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(detection_interfaces__msg__PotholeCordinate, id_pothole),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x_cordinate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(detection_interfaces__msg__PotholeCordinate, x_cordinate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y_cordinate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(detection_interfaces__msg__PotholeCordinate, y_cordinate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers detection_interfaces__msg__PotholeCordinate__rosidl_typesupport_introspection_c__PotholeCordinate_message_members = {
  "detection_interfaces__msg",  // message namespace
  "PotholeCordinate",  // message name
  3,  // number of fields
  sizeof(detection_interfaces__msg__PotholeCordinate),
  detection_interfaces__msg__PotholeCordinate__rosidl_typesupport_introspection_c__PotholeCordinate_message_member_array,  // message members
  detection_interfaces__msg__PotholeCordinate__rosidl_typesupport_introspection_c__PotholeCordinate_init_function,  // function to initialize message memory (memory has to be allocated)
  detection_interfaces__msg__PotholeCordinate__rosidl_typesupport_introspection_c__PotholeCordinate_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t detection_interfaces__msg__PotholeCordinate__rosidl_typesupport_introspection_c__PotholeCordinate_message_type_support_handle = {
  0,
  &detection_interfaces__msg__PotholeCordinate__rosidl_typesupport_introspection_c__PotholeCordinate_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_detection_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, detection_interfaces, msg, PotholeCordinate)() {
  if (!detection_interfaces__msg__PotholeCordinate__rosidl_typesupport_introspection_c__PotholeCordinate_message_type_support_handle.typesupport_identifier) {
    detection_interfaces__msg__PotholeCordinate__rosidl_typesupport_introspection_c__PotholeCordinate_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &detection_interfaces__msg__PotholeCordinate__rosidl_typesupport_introspection_c__PotholeCordinate_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
