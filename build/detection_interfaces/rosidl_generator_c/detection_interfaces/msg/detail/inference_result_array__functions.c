// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from detection_interfaces:msg/InferenceResultArray.idl
// generated code does not contain a copyright notice
#include "detection_interfaces/msg/detail/inference_result_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `results`
#include "detection_interfaces/msg/detail/inference_result__functions.h"

bool
detection_interfaces__msg__InferenceResultArray__init(detection_interfaces__msg__InferenceResultArray * msg)
{
  if (!msg) {
    return false;
  }
  // results
  if (!detection_interfaces__msg__InferenceResult__Sequence__init(&msg->results, 0)) {
    detection_interfaces__msg__InferenceResultArray__fini(msg);
    return false;
  }
  return true;
}

void
detection_interfaces__msg__InferenceResultArray__fini(detection_interfaces__msg__InferenceResultArray * msg)
{
  if (!msg) {
    return;
  }
  // results
  detection_interfaces__msg__InferenceResult__Sequence__fini(&msg->results);
}

bool
detection_interfaces__msg__InferenceResultArray__are_equal(const detection_interfaces__msg__InferenceResultArray * lhs, const detection_interfaces__msg__InferenceResultArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // results
  if (!detection_interfaces__msg__InferenceResult__Sequence__are_equal(
      &(lhs->results), &(rhs->results)))
  {
    return false;
  }
  return true;
}

bool
detection_interfaces__msg__InferenceResultArray__copy(
  const detection_interfaces__msg__InferenceResultArray * input,
  detection_interfaces__msg__InferenceResultArray * output)
{
  if (!input || !output) {
    return false;
  }
  // results
  if (!detection_interfaces__msg__InferenceResult__Sequence__copy(
      &(input->results), &(output->results)))
  {
    return false;
  }
  return true;
}

detection_interfaces__msg__InferenceResultArray *
detection_interfaces__msg__InferenceResultArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  detection_interfaces__msg__InferenceResultArray * msg = (detection_interfaces__msg__InferenceResultArray *)allocator.allocate(sizeof(detection_interfaces__msg__InferenceResultArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(detection_interfaces__msg__InferenceResultArray));
  bool success = detection_interfaces__msg__InferenceResultArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
detection_interfaces__msg__InferenceResultArray__destroy(detection_interfaces__msg__InferenceResultArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    detection_interfaces__msg__InferenceResultArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
detection_interfaces__msg__InferenceResultArray__Sequence__init(detection_interfaces__msg__InferenceResultArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  detection_interfaces__msg__InferenceResultArray * data = NULL;

  if (size) {
    data = (detection_interfaces__msg__InferenceResultArray *)allocator.zero_allocate(size, sizeof(detection_interfaces__msg__InferenceResultArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = detection_interfaces__msg__InferenceResultArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        detection_interfaces__msg__InferenceResultArray__fini(&data[i - 1]);
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
detection_interfaces__msg__InferenceResultArray__Sequence__fini(detection_interfaces__msg__InferenceResultArray__Sequence * array)
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
      detection_interfaces__msg__InferenceResultArray__fini(&array->data[i]);
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

detection_interfaces__msg__InferenceResultArray__Sequence *
detection_interfaces__msg__InferenceResultArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  detection_interfaces__msg__InferenceResultArray__Sequence * array = (detection_interfaces__msg__InferenceResultArray__Sequence *)allocator.allocate(sizeof(detection_interfaces__msg__InferenceResultArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = detection_interfaces__msg__InferenceResultArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
detection_interfaces__msg__InferenceResultArray__Sequence__destroy(detection_interfaces__msg__InferenceResultArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    detection_interfaces__msg__InferenceResultArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
detection_interfaces__msg__InferenceResultArray__Sequence__are_equal(const detection_interfaces__msg__InferenceResultArray__Sequence * lhs, const detection_interfaces__msg__InferenceResultArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!detection_interfaces__msg__InferenceResultArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
detection_interfaces__msg__InferenceResultArray__Sequence__copy(
  const detection_interfaces__msg__InferenceResultArray__Sequence * input,
  detection_interfaces__msg__InferenceResultArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(detection_interfaces__msg__InferenceResultArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    detection_interfaces__msg__InferenceResultArray * data =
      (detection_interfaces__msg__InferenceResultArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!detection_interfaces__msg__InferenceResultArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          detection_interfaces__msg__InferenceResultArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!detection_interfaces__msg__InferenceResultArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
