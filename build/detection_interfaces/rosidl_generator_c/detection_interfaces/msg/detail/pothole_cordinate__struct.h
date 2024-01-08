// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from detection_interfaces:msg/PotholeCordinate.idl
// generated code does not contain a copyright notice

#ifndef DETECTION_INTERFACES__MSG__DETAIL__POTHOLE_CORDINATE__STRUCT_H_
#define DETECTION_INTERFACES__MSG__DETAIL__POTHOLE_CORDINATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/PotholeCordinate in the package detection_interfaces.
typedef struct detection_interfaces__msg__PotholeCordinate
{
  int64_t id_pothole;
  int64_t x_cordinate;
  int64_t y_cordinate;
} detection_interfaces__msg__PotholeCordinate;

// Struct for a sequence of detection_interfaces__msg__PotholeCordinate.
typedef struct detection_interfaces__msg__PotholeCordinate__Sequence
{
  detection_interfaces__msg__PotholeCordinate * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} detection_interfaces__msg__PotholeCordinate__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DETECTION_INTERFACES__MSG__DETAIL__POTHOLE_CORDINATE__STRUCT_H_
