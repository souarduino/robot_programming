// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from detection_interfaces:msg/InferenceResult.idl
// generated code does not contain a copyright notice

#ifndef DETECTION_INTERFACES__MSG__DETAIL__INFERENCE_RESULT__STRUCT_H_
#define DETECTION_INTERFACES__MSG__DETAIL__INFERENCE_RESULT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'class_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/InferenceResult in the package detection_interfaces.
typedef struct detection_interfaces__msg__InferenceResult
{
  rosidl_runtime_c__String class_name;
  int64_t top;
  int64_t left;
  int64_t bottom;
  int64_t right;
} detection_interfaces__msg__InferenceResult;

// Struct for a sequence of detection_interfaces__msg__InferenceResult.
typedef struct detection_interfaces__msg__InferenceResult__Sequence
{
  detection_interfaces__msg__InferenceResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} detection_interfaces__msg__InferenceResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DETECTION_INTERFACES__MSG__DETAIL__INFERENCE_RESULT__STRUCT_H_
