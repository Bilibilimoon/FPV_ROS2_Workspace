// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dgps_msgs:msg/Gpfpd.idl
// generated code does not contain a copyright notice
#include "dgps_msgs/msg/detail/gpfpd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `gpfpd`
#include "rosidl_runtime_c/string_functions.h"

bool
dgps_msgs__msg__Gpfpd__init(dgps_msgs__msg__Gpfpd * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    dgps_msgs__msg__Gpfpd__fini(msg);
    return false;
  }
  // gpfpd
  if (!rosidl_runtime_c__String__init(&msg->gpfpd)) {
    dgps_msgs__msg__Gpfpd__fini(msg);
    return false;
  }
  // heading
  // pitch
  // roll
  // lattitude
  // longitude
  // altitude
  // velocity_east
  // velocity_north
  // velocity_up
  // baseline
  // nsv1
  // nsv2
  // status
  return true;
}

void
dgps_msgs__msg__Gpfpd__fini(dgps_msgs__msg__Gpfpd * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // gpfpd
  rosidl_runtime_c__String__fini(&msg->gpfpd);
  // heading
  // pitch
  // roll
  // lattitude
  // longitude
  // altitude
  // velocity_east
  // velocity_north
  // velocity_up
  // baseline
  // nsv1
  // nsv2
  // status
}

bool
dgps_msgs__msg__Gpfpd__are_equal(const dgps_msgs__msg__Gpfpd * lhs, const dgps_msgs__msg__Gpfpd * rhs)
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
  // gpfpd
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->gpfpd), &(rhs->gpfpd)))
  {
    return false;
  }
  // heading
  if (lhs->heading != rhs->heading) {
    return false;
  }
  // pitch
  if (lhs->pitch != rhs->pitch) {
    return false;
  }
  // roll
  if (lhs->roll != rhs->roll) {
    return false;
  }
  // lattitude
  if (lhs->lattitude != rhs->lattitude) {
    return false;
  }
  // longitude
  if (lhs->longitude != rhs->longitude) {
    return false;
  }
  // altitude
  if (lhs->altitude != rhs->altitude) {
    return false;
  }
  // velocity_east
  if (lhs->velocity_east != rhs->velocity_east) {
    return false;
  }
  // velocity_north
  if (lhs->velocity_north != rhs->velocity_north) {
    return false;
  }
  // velocity_up
  if (lhs->velocity_up != rhs->velocity_up) {
    return false;
  }
  // baseline
  if (lhs->baseline != rhs->baseline) {
    return false;
  }
  // nsv1
  if (lhs->nsv1 != rhs->nsv1) {
    return false;
  }
  // nsv2
  if (lhs->nsv2 != rhs->nsv2) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  return true;
}

bool
dgps_msgs__msg__Gpfpd__copy(
  const dgps_msgs__msg__Gpfpd * input,
  dgps_msgs__msg__Gpfpd * output)
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
  // gpfpd
  if (!rosidl_runtime_c__String__copy(
      &(input->gpfpd), &(output->gpfpd)))
  {
    return false;
  }
  // heading
  output->heading = input->heading;
  // pitch
  output->pitch = input->pitch;
  // roll
  output->roll = input->roll;
  // lattitude
  output->lattitude = input->lattitude;
  // longitude
  output->longitude = input->longitude;
  // altitude
  output->altitude = input->altitude;
  // velocity_east
  output->velocity_east = input->velocity_east;
  // velocity_north
  output->velocity_north = input->velocity_north;
  // velocity_up
  output->velocity_up = input->velocity_up;
  // baseline
  output->baseline = input->baseline;
  // nsv1
  output->nsv1 = input->nsv1;
  // nsv2
  output->nsv2 = input->nsv2;
  // status
  output->status = input->status;
  return true;
}

dgps_msgs__msg__Gpfpd *
dgps_msgs__msg__Gpfpd__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dgps_msgs__msg__Gpfpd * msg = (dgps_msgs__msg__Gpfpd *)allocator.allocate(sizeof(dgps_msgs__msg__Gpfpd), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dgps_msgs__msg__Gpfpd));
  bool success = dgps_msgs__msg__Gpfpd__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dgps_msgs__msg__Gpfpd__destroy(dgps_msgs__msg__Gpfpd * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dgps_msgs__msg__Gpfpd__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dgps_msgs__msg__Gpfpd__Sequence__init(dgps_msgs__msg__Gpfpd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dgps_msgs__msg__Gpfpd * data = NULL;

  if (size) {
    data = (dgps_msgs__msg__Gpfpd *)allocator.zero_allocate(size, sizeof(dgps_msgs__msg__Gpfpd), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dgps_msgs__msg__Gpfpd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dgps_msgs__msg__Gpfpd__fini(&data[i - 1]);
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
dgps_msgs__msg__Gpfpd__Sequence__fini(dgps_msgs__msg__Gpfpd__Sequence * array)
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
      dgps_msgs__msg__Gpfpd__fini(&array->data[i]);
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

dgps_msgs__msg__Gpfpd__Sequence *
dgps_msgs__msg__Gpfpd__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dgps_msgs__msg__Gpfpd__Sequence * array = (dgps_msgs__msg__Gpfpd__Sequence *)allocator.allocate(sizeof(dgps_msgs__msg__Gpfpd__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dgps_msgs__msg__Gpfpd__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dgps_msgs__msg__Gpfpd__Sequence__destroy(dgps_msgs__msg__Gpfpd__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dgps_msgs__msg__Gpfpd__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dgps_msgs__msg__Gpfpd__Sequence__are_equal(const dgps_msgs__msg__Gpfpd__Sequence * lhs, const dgps_msgs__msg__Gpfpd__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dgps_msgs__msg__Gpfpd__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dgps_msgs__msg__Gpfpd__Sequence__copy(
  const dgps_msgs__msg__Gpfpd__Sequence * input,
  dgps_msgs__msg__Gpfpd__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dgps_msgs__msg__Gpfpd);
    dgps_msgs__msg__Gpfpd * data =
      (dgps_msgs__msg__Gpfpd *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dgps_msgs__msg__Gpfpd__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          dgps_msgs__msg__Gpfpd__fini(&data[i]);
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
    if (!dgps_msgs__msg__Gpfpd__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
