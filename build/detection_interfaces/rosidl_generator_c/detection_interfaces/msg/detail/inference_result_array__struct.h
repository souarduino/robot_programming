// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from detection_interfaces:msg/InferenceResultArray.idl
// generated code does not contain a copyright notice

#ifndef DETECTION_INTERFACES__MSG__DETAIL__INFERENCE_RESULT_ARRAY__STRUCT_H_
#define DETECTION_INTERFACES__MSG__DETAIL__INFERENCE_RESULT_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'results'
#include "detection_interfaces/msg/detail/inference_result__struct.h"

/// Struct defined in msg/InferenceResultArray in the package detection_interfaces.
typedef struct detection_interfaces__msg__InferenceResultArray
{
  detection_interfaces__msg__InferenceResult__Sequence results;
} detection_interfaces__msg__InferenceResultArray;

// Struct for a sequence of detection_interfaces__msg__InferenceResultArray.
typedef struct detection_interfaces__msg__InferenceResultArray__Sequence
{
  detection_interfaces__msg__InferenceResultArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} detection_interfaces__msg__InferenceResultArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DETECTION_INTERFACES__MSG__DETAIL__INFERENCE_RESULT_ARRAY__STRUCT_H_
