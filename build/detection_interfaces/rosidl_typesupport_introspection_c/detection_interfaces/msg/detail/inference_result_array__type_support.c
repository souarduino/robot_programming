// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from detection_interfaces:msg/InferenceResultArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "detection_interfaces/msg/detail/inference_result_array__rosidl_typesupport_introspection_c.h"
#include "detection_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "detection_interfaces/msg/detail/inference_result_array__functions.h"
#include "detection_interfaces/msg/detail/inference_result_array__struct.h"


// Include directives for member types
// Member `results`
#include "detection_interfaces/msg/inference_result.h"
// Member `results`
#include "detection_interfaces/msg/detail/inference_result__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void detection_interfaces__msg__InferenceResultArray__rosidl_typesupport_introspection_c__InferenceResultArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  detection_interfaces__msg__InferenceResultArray__init(message_memory);
}

void detection_interfaces__msg__InferenceResultArray__rosidl_typesupport_introspection_c__InferenceResultArray_fini_function(void * message_memory)
{
  detection_interfaces__msg__InferenceResultArray__fini(message_memory);
}

size_t detection_interfaces__msg__InferenceResultArray__rosidl_typesupport_introspection_c__size_function__InferenceResultArray__results(
  const void * untyped_member)
{
  const detection_interfaces__msg__InferenceResult__Sequence * member =
    (const detection_interfaces__msg__InferenceResult__Sequence *)(untyped_member);
  return member->size;
}

const void * detection_interfaces__msg__InferenceResultArray__rosidl_typesupport_introspection_c__get_const_function__InferenceResultArray__results(
  const void * untyped_member, size_t index)
{
  const detection_interfaces__msg__InferenceResult__Sequence * member =
    (const detection_interfaces__msg__InferenceResult__Sequence *)(untyped_member);
  return &member->data[index];
}

void * detection_interfaces__msg__InferenceResultArray__rosidl_typesupport_introspection_c__get_function__InferenceResultArray__results(
  void * untyped_member, size_t index)
{
  detection_interfaces__msg__InferenceResult__Sequence * member =
    (detection_interfaces__msg__InferenceResult__Sequence *)(untyped_member);
  return &member->data[index];
}

void detection_interfaces__msg__InferenceResultArray__rosidl_typesupport_introspection_c__fetch_function__InferenceResultArray__results(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const detection_interfaces__msg__InferenceResult * item =
    ((const detection_interfaces__msg__InferenceResult *)
    detection_interfaces__msg__InferenceResultArray__rosidl_typesupport_introspection_c__get_const_function__InferenceResultArray__results(untyped_member, index));
  detection_interfaces__msg__InferenceResult * value =
    (detection_interfaces__msg__InferenceResult *)(untyped_value);
  *value = *item;
}

void detection_interfaces__msg__InferenceResultArray__rosidl_typesupport_introspection_c__assign_function__InferenceResultArray__results(
  void * untyped_member, size_t index, const void * untyped_value)
{
  detection_interfaces__msg__InferenceResult * item =
    ((detection_interfaces__msg__InferenceResult *)
    detection_interfaces__msg__InferenceResultArray__rosidl_typesupport_introspection_c__get_function__InferenceResultArray__results(untyped_member, index));
  const detection_interfaces__msg__InferenceResult * value =
    (const detection_interfaces__msg__InferenceResult *)(untyped_value);
  *item = *value;
}

bool detection_interfaces__msg__InferenceResultArray__rosidl_typesupport_introspection_c__resize_function__InferenceResultArray__results(
  void * untyped_member, size_t size)
{
  detection_interfaces__msg__InferenceResult__Sequence * member =
    (detection_interfaces__msg__InferenceResult__Sequence *)(untyped_member);
  detection_interfaces__msg__InferenceResult__Sequence__fini(member);
  return detection_interfaces__msg__InferenceResult__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember detection_interfaces__msg__InferenceResultArray__rosidl_typesupport_introspection_c__InferenceResultArray_message_member_array[1] = {
  {
    "results",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(detection_interfaces__msg__InferenceResultArray, results),  // bytes offset in struct
    NULL,  // default value
    detection_interfaces__msg__InferenceResultArray__rosidl_typesupport_introspection_c__size_function__InferenceResultArray__results,  // size() function pointer
    detection_interfaces__msg__InferenceResultArray__rosidl_typesupport_introspection_c__get_const_function__InferenceResultArray__results,  // get_const(index) function pointer
    detection_interfaces__msg__InferenceResultArray__rosidl_typesupport_introspection_c__get_function__InferenceResultArray__results,  // get(index) function pointer
    detection_interfaces__msg__InferenceResultArray__rosidl_typesupport_introspection_c__fetch_function__InferenceResultArray__results,  // fetch(index, &value) function pointer
    detection_interfaces__msg__InferenceResultArray__rosidl_typesupport_introspection_c__assign_function__InferenceResultArray__results,  // assign(index, value) function pointer
    detection_interfaces__msg__InferenceResultArray__rosidl_typesupport_introspection_c__resize_function__InferenceResultArray__results  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers detection_interfaces__msg__InferenceResultArray__rosidl_typesupport_introspection_c__InferenceResultArray_message_members = {
  "detection_interfaces__msg",  // message namespace
  "InferenceResultArray",  // message name
  1,  // number of fields
  sizeof(detection_interfaces__msg__InferenceResultArray),
  detection_interfaces__msg__InferenceResultArray__rosidl_typesupport_introspection_c__InferenceResultArray_message_member_array,  // message members
  detection_interfaces__msg__InferenceResultArray__rosidl_typesupport_introspection_c__InferenceResultArray_init_function,  // function to initialize message memory (memory has to be allocated)
  detection_interfaces__msg__InferenceResultArray__rosidl_typesupport_introspection_c__InferenceResultArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t detection_interfaces__msg__InferenceResultArray__rosidl_typesupport_introspection_c__InferenceResultArray_message_type_support_handle = {
  0,
  &detection_interfaces__msg__InferenceResultArray__rosidl_typesupport_introspection_c__InferenceResultArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_detection_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, detection_interfaces, msg, InferenceResultArray)() {
  detection_interfaces__msg__InferenceResultArray__rosidl_typesupport_introspection_c__InferenceResultArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, detection_interfaces, msg, InferenceResult)();
  if (!detection_interfaces__msg__InferenceResultArray__rosidl_typesupport_introspection_c__InferenceResultArray_message_type_support_handle.typesupport_identifier) {
    detection_interfaces__msg__InferenceResultArray__rosidl_typesupport_introspection_c__InferenceResultArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &detection_interfaces__msg__InferenceResultArray__rosidl_typesupport_introspection_c__InferenceResultArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
