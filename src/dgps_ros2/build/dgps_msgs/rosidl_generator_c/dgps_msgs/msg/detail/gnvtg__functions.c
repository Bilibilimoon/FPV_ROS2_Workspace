// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dgps_msgs:msg/Gnvtg.idl
// generated code does not contain a copyright notice
#include "dgps_msgs/msg/detail/gnvtg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `gnvtg`
// Member `status`
#include "rosidl_runtime_c/string_functions.h"

bool
dgps_msgs__msg__Gnvtg__init(dgps_msgs__msg__Gnvtg * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    dgps_msgs__msg__Gnvtg__fini(msg);
    return false;
  }
  // gnvtg
  if (!rosidl_runtime_c__String__init(&msg->gnvtg)) {
    dgps_msgs__msg__Gnvtg__fini(msg);
    return false;
  }
  // heading1
  // heading2
  // speed1
  // speed2
  // status
  if (!rosidl_runtime_c__String__init(&msg->status)) {
    dgps_msgs__msg__Gnvtg__fini(msg);
    return false;
  }
  return true;
}

void
dgps_msgs__msg__Gnvtg__fini(dgps_msgs__msg__Gnvtg * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // gnvtg
  rosidl_runtime_c__String__fini(&msg->gnvtg);
  // heading1
  // heading2
  // speed1
  // speed2
  // status
  rosidl_runtime_c__String__fini(&msg->status);
}

bool
dgps_msgs__msg__Gnvtg__are_equal(const dgps_msgs__msg__Gnvtg * lhs, const dgps_msgs__msg__Gnvtg * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // gnvtg
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->gnvtg), &(rhs->gnvtg)))
  {
    return false;
  }
  // heading1
  if (lhs->heading1 != rhs->heading1) {
    return false;
  }
  // heading2
  if (lhs->heading2 != rhs->heading2) {
    return false;
  }
  // speed1
  if (lhs->speed1 != rhs->speed1) {
    return false;
  }
  // speed2
  if (lhs->speed2 != rhs->speed2) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  return true;
}

bool
dgps_msgs__msg__Gnvtg__copy(
  const dgps_msgs__msg__Gnvtg * input,
  dgps_msgs__msg__Gnvtg * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // gnvtg
  if (!rosidl_runtime_c__String__copy(
      &(input->gnvtg), &(output->gnvtg)))
  {
    return false;
  }
  // heading1
  output->heading1 = input->heading1;
  // heading2
  output->heading2 = input->heading2;
  // speed1
  output->speed1 = input->speed1;
  // speed2
  output->speed2 = input->speed2;
  // status
  if (!rosidl_runtime_c__String__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  return true;
}

dgps_msgs__msg__Gnvtg *
dgps_msgs__msg__Gnvtg__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dgps_msgs__msg__Gnvtg * msg = (dgps_msgs__msg__Gnvtg *)allocator.allocate(sizeof(dgps_msgs__msg__Gnvtg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dgps_msgs__msg__Gnvtg));
  bool success = dgps_msgs__msg__Gnvtg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dgps_msgs__msg__Gnvtg__destroy(dgps_msgs__msg__Gnvtg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dgps_msgs__msg__Gnvtg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dgps_msgs__msg__Gnvtg__Sequence__init(dgps_msgs__msg__Gnvtg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dgps_msgs__msg__Gnvtg * data = NULL;

  if (size) {
    data = (dgps_msgs__msg__Gnvtg *)allocator.zero_allocate(size, sizeof(dgps_msgs__msg__Gnvtg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dgps_msgs__msg__Gnvtg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dgps_msgs__msg__Gnvtg__fini(&data[i - 1]);
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
dgps_msgs__msg__Gnvtg__Sequence__fini(dgps_msgs__msg__Gnvtg__Sequence * array)
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
      dgps_msgs__msg__Gnvtg__fini(&array->data[i]);
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

dgps_msgs__msg__Gnvtg__Sequence *
dgps_msgs__msg__Gnvtg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dgps_msgs__msg__Gnvtg__Sequence * array = (dgps_msgs__msg__Gnvtg__Sequence *)allocator.allocate(sizeof(dgps_msgs__msg__Gnvtg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dgps_msgs__msg__Gnvtg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dgps_msgs__msg__Gnvtg__Sequence__destroy(dgps_msgs__msg__Gnvtg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dgps_msgs__msg__Gnvtg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dgps_msgs__msg__Gnvtg__Sequence__are_equal(const dgps_msgs__msg__Gnvtg__Sequence * lhs, const dgps_msgs__msg__Gnvtg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dgps_msgs__msg__Gnvtg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dgps_msgs__msg__Gnvtg__Sequence__copy(
  const dgps_msgs__msg__Gnvtg__Sequence * input,
  dgps_msgs__msg__Gnvtg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dgps_msgs__msg__Gnvtg);
    dgps_msgs__msg__Gnvtg * data =
      (dgps_msgs__msg__Gnvtg *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dgps_msgs__msg__Gnvtg__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          dgps_msgs__msg__Gnvtg__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dgps_msgs__msg__Gnvtg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
