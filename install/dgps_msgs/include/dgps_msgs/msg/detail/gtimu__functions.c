// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dgps_msgs:msg/Gtimu.idl
// generated code does not contain a copyright notice
#include "dgps_msgs/msg/detail/gtimu__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `gtimu`
#include "rosidl_runtime_c/string_functions.h"

bool
dgps_msgs__msg__Gtimu__init(dgps_msgs__msg__Gtimu * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    dgps_msgs__msg__Gtimu__fini(msg);
    return false;
  }
  // gtimu
  if (!rosidl_runtime_c__String__init(&msg->gtimu)) {
    dgps_msgs__msg__Gtimu__fini(msg);
    return false;
  }
  // gyro_x
  // gyro_y
  // gyro_z
  // acc_x
  // acc_y
  // acc_z
  // tpr
  return true;
}

void
dgps_msgs__msg__Gtimu__fini(dgps_msgs__msg__Gtimu * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // gtimu
  rosidl_runtime_c__String__fini(&msg->gtimu);
  // gyro_x
  // gyro_y
  // gyro_z
  // acc_x
  // acc_y
  // acc_z
  // tpr
}

bool
dgps_msgs__msg__Gtimu__are_equal(const dgps_msgs__msg__Gtimu * lhs, const dgps_msgs__msg__Gtimu * rhs)
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
  // gtimu
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->gtimu), &(rhs->gtimu)))
  {
    return false;
  }
  // gyro_x
  if (lhs->gyro_x != rhs->gyro_x) {
    return false;
  }
  // gyro_y
  if (lhs->gyro_y != rhs->gyro_y) {
    return false;
  }
  // gyro_z
  if (lhs->gyro_z != rhs->gyro_z) {
    return false;
  }
  // acc_x
  if (lhs->acc_x != rhs->acc_x) {
    return false;
  }
  // acc_y
  if (lhs->acc_y != rhs->acc_y) {
    return false;
  }
  // acc_z
  if (lhs->acc_z != rhs->acc_z) {
    return false;
  }
  // tpr
  if (lhs->tpr != rhs->tpr) {
    return false;
  }
  return true;
}

bool
dgps_msgs__msg__Gtimu__copy(
  const dgps_msgs__msg__Gtimu * input,
  dgps_msgs__msg__Gtimu * output)
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
  // gtimu
  if (!rosidl_runtime_c__String__copy(
      &(input->gtimu), &(output->gtimu)))
  {
    return false;
  }
  // gyro_x
  output->gyro_x = input->gyro_x;
  // gyro_y
  output->gyro_y = input->gyro_y;
  // gyro_z
  output->gyro_z = input->gyro_z;
  // acc_x
  output->acc_x = input->acc_x;
  // acc_y
  output->acc_y = input->acc_y;
  // acc_z
  output->acc_z = input->acc_z;
  // tpr
  output->tpr = input->tpr;
  return true;
}

dgps_msgs__msg__Gtimu *
dgps_msgs__msg__Gtimu__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dgps_msgs__msg__Gtimu * msg = (dgps_msgs__msg__Gtimu *)allocator.allocate(sizeof(dgps_msgs__msg__Gtimu), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dgps_msgs__msg__Gtimu));
  bool success = dgps_msgs__msg__Gtimu__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dgps_msgs__msg__Gtimu__destroy(dgps_msgs__msg__Gtimu * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dgps_msgs__msg__Gtimu__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dgps_msgs__msg__Gtimu__Sequence__init(dgps_msgs__msg__Gtimu__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dgps_msgs__msg__Gtimu * data = NULL;

  if (size) {
    data = (dgps_msgs__msg__Gtimu *)allocator.zero_allocate(size, sizeof(dgps_msgs__msg__Gtimu), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dgps_msgs__msg__Gtimu__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dgps_msgs__msg__Gtimu__fini(&data[i - 1]);
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
dgps_msgs__msg__Gtimu__Sequence__fini(dgps_msgs__msg__Gtimu__Sequence * array)
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
      dgps_msgs__msg__Gtimu__fini(&array->data[i]);
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

dgps_msgs__msg__Gtimu__Sequence *
dgps_msgs__msg__Gtimu__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dgps_msgs__msg__Gtimu__Sequence * array = (dgps_msgs__msg__Gtimu__Sequence *)allocator.allocate(sizeof(dgps_msgs__msg__Gtimu__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dgps_msgs__msg__Gtimu__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dgps_msgs__msg__Gtimu__Sequence__destroy(dgps_msgs__msg__Gtimu__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dgps_msgs__msg__Gtimu__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dgps_msgs__msg__Gtimu__Sequence__are_equal(const dgps_msgs__msg__Gtimu__Sequence * lhs, const dgps_msgs__msg__Gtimu__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dgps_msgs__msg__Gtimu__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dgps_msgs__msg__Gtimu__Sequence__copy(
  const dgps_msgs__msg__Gtimu__Sequence * input,
  dgps_msgs__msg__Gtimu__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dgps_msgs__msg__Gtimu);
    dgps_msgs__msg__Gtimu * data =
      (dgps_msgs__msg__Gtimu *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dgps_msgs__msg__Gtimu__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          dgps_msgs__msg__Gtimu__fini(&data[i]);
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
    if (!dgps_msgs__msg__Gtimu__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
