// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from detection_interfaces:msg/PotholeCordinate.idl
// generated code does not contain a copyright notice
#include "detection_interfaces/msg/detail/pothole_cordinate__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
detection_interfaces__msg__PotholeCordinate__init(detection_interfaces__msg__PotholeCordinate * msg)
{
  if (!msg) {
    return false;
  }
  // id_pothole
  // x_cordinate
  // y_cordinate
  return true;
}

void
detection_interfaces__msg__PotholeCordinate__fini(detection_interfaces__msg__PotholeCordinate * msg)
{
  if (!msg) {
    return;
  }
  // id_pothole
  // x_cordinate
  // y_cordinate
}

bool
detection_interfaces__msg__PotholeCordinate__are_equal(const detection_interfaces__msg__PotholeCordinate * lhs, const detection_interfaces__msg__PotholeCordinate * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id_pothole
  if (lhs->id_pothole != rhs->id_pothole) {
    return false;
  }
  // x_cordinate
  if (lhs->x_cordinate != rhs->x_cordinate) {
    return false;
  }
  // y_cordinate
  if (lhs->y_cordinate != rhs->y_cordinate) {
    return false;
  }
  return true;
}

bool
detection_interfaces__msg__PotholeCordinate__copy(
  const detection_interfaces__msg__PotholeCordinate * input,
  detection_interfaces__msg__PotholeCordinate * output)
{
  if (!input || !output) {
    return false;
  }
  // id_pothole
  output->id_pothole = input->id_pothole;
  // x_cordinate
  output->x_cordinate = input->x_cordinate;
  // y_cordinate
  output->y_cordinate = input->y_cordinate;
  return true;
}

detection_interfaces__msg__PotholeCordinate *
detection_interfaces__msg__PotholeCordinate__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  detection_interfaces__msg__PotholeCordinate * msg = (detection_interfaces__msg__PotholeCordinate *)allocator.allocate(sizeof(detection_interfaces__msg__PotholeCordinate), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(detection_interfaces__msg__PotholeCordinate));
  bool success = detection_interfaces__msg__PotholeCordinate__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
detection_interfaces__msg__PotholeCordinate__destroy(detection_interfaces__msg__PotholeCordinate * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    detection_interfaces__msg__PotholeCordinate__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
detection_interfaces__msg__PotholeCordinate__Sequence__init(detection_interfaces__msg__PotholeCordinate__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  detection_interfaces__msg__PotholeCordinate * data = NULL;

  if (size) {
    data = (detection_interfaces__msg__PotholeCordinate *)allocator.zero_allocate(size, sizeof(detection_interfaces__msg__PotholeCordinate), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = detection_interfaces__msg__PotholeCordinate__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        detection_interfaces__msg__PotholeCordinate__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
detection_interfaces__msg__PotholeCordinate__Sequence__fini(detection_interfaces__msg__PotholeCordinate__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      detection_interfaces__msg__PotholeCordinate__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

detection_interfaces__msg__PotholeCordinate__Sequence *
detection_interfaces__msg__PotholeCordinate__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  detection_interfaces__msg__PotholeCordinate__Sequence * array = (detection_interfaces__msg__PotholeCordinate__Sequence *)allocator.allocate(sizeof(detection_interfaces__msg__PotholeCordinate__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = detection_interfaces__msg__PotholeCordinate__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
detection_interfaces__msg__PotholeCordinate__Sequence__destroy(detection_interfaces__msg__PotholeCordinate__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    detection_interfaces__msg__PotholeCordinate__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
detection_interfaces__msg__PotholeCordinate__Sequence__are_equal(const detection_interfaces__msg__PotholeCordinate__Sequence * lhs, const detection_interfaces__msg__PotholeCordinate__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!detection_interfaces__msg__PotholeCordinate__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
detection_interfaces__msg__PotholeCordinate__Sequence__copy(
  const detection_interfaces__msg__PotholeCordinate__Sequence * input,
  detection_interfaces__msg__PotholeCordinate__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(detection_interfaces__msg__PotholeCordinate);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    detection_interfaces__msg__PotholeCordinate * data =
      (detection_interfaces__msg__PotholeCordinate *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!detection_interfaces__msg__PotholeCordinate__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          detection_interfaces__msg__PotholeCordinate__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!detection_interfaces__msg__PotholeCordinate__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
