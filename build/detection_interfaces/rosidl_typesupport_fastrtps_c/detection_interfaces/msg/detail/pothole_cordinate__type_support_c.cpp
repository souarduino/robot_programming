// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from detection_interfaces:msg/PotholeCordinate.idl
// generated code does not contain a copyright notice
#include "detection_interfaces/msg/detail/pothole_cordinate__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "detection_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "detection_interfaces/msg/detail/pothole_cordinate__struct.h"
#include "detection_interfaces/msg/detail/pothole_cordinate__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _PotholeCordinate__ros_msg_type = detection_interfaces__msg__PotholeCordinate;

static bool _PotholeCordinate__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PotholeCordinate__ros_msg_type * ros_message = static_cast<const _PotholeCordinate__ros_msg_type *>(untyped_ros_message);
  // Field name: id_pothole
  {
    cdr << ros_message->id_pothole;
  }

  // Field name: x_cordinate
  {
    cdr << ros_message->x_cordinate;
  }

  // Field name: y_cordinate
  {
    cdr << ros_message->y_cordinate;
  }

  return true;
}

static bool _PotholeCordinate__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PotholeCordinate__ros_msg_type * ros_message = static_cast<_PotholeCordinate__ros_msg_type *>(untyped_ros_message);
  // Field name: id_pothole
  {
    cdr >> ros_message->id_pothole;
  }

  // Field name: x_cordinate
  {
    cdr >> ros_message->x_cordinate;
  }

  // Field name: y_cordinate
  {
    cdr >> ros_message->y_cordinate;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_detection_interfaces
size_t get_serialized_size_detection_interfaces__msg__PotholeCordinate(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PotholeCordinate__ros_msg_type * ros_message = static_cast<const _PotholeCordinate__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name id_pothole
  {
    size_t item_size = sizeof(ros_message->id_pothole);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name x_cordinate
  {
    size_t item_size = sizeof(ros_message->x_cordinate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y_cordinate
  {
    size_t item_size = sizeof(ros_message->y_cordinate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PotholeCordinate__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_detection_interfaces__msg__PotholeCordinate(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_detection_interfaces
size_t max_serialized_size_detection_interfaces__msg__PotholeCordinate(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: id_pothole
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: x_cordinate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: y_cordinate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = detection_interfaces__msg__PotholeCordinate;
    is_plain =
      (
      offsetof(DataType, y_cordinate) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _PotholeCordinate__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_detection_interfaces__msg__PotholeCordinate(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PotholeCordinate = {
  "detection_interfaces::msg",
  "PotholeCordinate",
  _PotholeCordinate__cdr_serialize,
  _PotholeCordinate__cdr_deserialize,
  _PotholeCordinate__get_serialized_size,
  _PotholeCordinate__max_serialized_size
};

static rosidl_message_type_support_t _PotholeCordinate__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PotholeCordinate,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, detection_interfaces, msg, PotholeCordinate)() {
  return &_PotholeCordinate__type_support;
}

#if defined(__cplusplus)
}
#endif
