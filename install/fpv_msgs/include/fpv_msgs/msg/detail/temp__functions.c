// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fpv_msgs:msg/Temp.idl
// generated code does not contain a copyright notice
#include "fpv_msgs/msg/detail/temp__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
fpv_msgs__msg__Temp__init(fpv_msgs__msg__Temp * msg)
{
  if (!msg) {
    return false;
  }
  // left_up_w
  // left_up_j
  // right_up_w
  // right_up_j
  // left_down_w
  // left_down_j
  // right_down_w
  // right_down_j
  // x_min
  // y_min
  // x_max
  // y_max
  // output_w
  // output_j
  return true;
}

void
fpv_msgs__msg__Temp__fini(fpv_msgs__msg__Temp * msg)
{
  if (!msg) {
    return;
  }
  // left_up_w
  // left_up_j
  // right_up_w
  // right_up_j
  // left_down_w
  // left_down_j
  // right_down_w
  // right_down_j
  // x_min
  // y_min
  // x_max
  // y_max
  // output_w
  // output_j
}

bool
fpv_msgs__msg__Temp__are_equal(const fpv_msgs__msg__Temp * lhs, const fpv_msgs__msg__Temp * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // left_up_w
  if (lhs->left_up_w != rhs->left_up_w) {
    return false;
  }
  // left_up_j
  if (lhs->left_up_j != rhs->left_up_j) {
    return false;
  }
  // right_up_w
  if (lhs->right_up_w != rhs->right_up_w) {
    return false;
  }
  // right_up_j
  if (lhs->right_up_j != rhs->right_up_j) {
    return false;
  }
  // left_down_w
  if (lhs->left_down_w != rhs->left_down_w) {
    return false;
  }
  // left_down_j
  if (lhs->left_down_j != rhs->left_down_j) {
    return false;
  }
  // right_down_w
  if (lhs->right_down_w != rhs->right_down_w) {
    return false;
  }
  // right_down_j
  if (lhs->right_down_j != rhs->right_down_j) {
    return false;
  }
  // x_min
  if (lhs->x_min != rhs->x_min) {
    return false;
  }
  // y_min
  if (lhs->y_min != rhs->y_min) {
    return false;
  }
  // x_max
  if (lhs->x_max != rhs->x_max) {
    return false;
  }
  // y_max
  if (lhs->y_max != rhs->y_max) {
    return false;
  }
  // output_w
  if (lhs->output_w != rhs->output_w) {
    return false;
  }
  // output_j
  if (lhs->output_j != rhs->output_j) {
    return false;
  }
  return true;
}

bool
fpv_msgs__msg__Temp__copy(
  const fpv_msgs__msg__Temp * input,
  fpv_msgs__msg__Temp * output)
{
  if (!input || !output) {
    return false;
  }
  // left_up_w
  output->left_up_w = input->left_up_w;
  // left_up_j
  output->left_up_j = input->left_up_j;
  // right_up_w
  output->right_up_w = input->right_up_w;
  // right_up_j
  output->right_up_j = input->right_up_j;
  // left_down_w
  output->left_down_w = input->left_down_w;
  // left_down_j
  output->left_down_j = input->left_down_j;
  // right_down_w
  output->right_down_w = input->right_down_w;
  // right_down_j
  output->right_down_j = input->right_down_j;
  // x_min
  output->x_min = input->x_min;
  // y_min
  output->y_min = input->y_min;
  // x_max
  output->x_max = input->x_max;
  // y_max
  output->y_max = input->y_max;
  // output_w
  output->output_w = input->output_w;
  // output_j
  output->output_j = input->output_j;
  return true;
}

fpv_msgs__msg__Temp *
fpv_msgs__msg__Temp__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fpv_msgs__msg__Temp * msg = (fpv_msgs__msg__Temp *)allocator.allocate(sizeof(fpv_msgs__msg__Temp), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fpv_msgs__msg__Temp));
  bool success = fpv_msgs__msg__Temp__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fpv_msgs__msg__Temp__destroy(fpv_msgs__msg__Temp * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fpv_msgs__msg__Temp__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fpv_msgs__msg__Temp__Sequence__init(fpv_msgs__msg__Temp__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fpv_msgs__msg__Temp * data = NULL;

  if (size) {
    data = (fpv_msgs__msg__Temp *)allocator.zero_allocate(size, sizeof(fpv_msgs__msg__Temp), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fpv_msgs__msg__Temp__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fpv_msgs__msg__Temp__fini(&data[i - 1]);
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
fpv_msgs__msg__Temp__Sequence__fini(fpv_msgs__msg__Temp__Sequence * array)
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
      fpv_msgs__msg__Temp__fini(&array->data[i]);
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

fpv_msgs__msg__Temp__Sequence *
fpv_msgs__msg__Temp__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fpv_msgs__msg__Temp__Sequence * array = (fpv_msgs__msg__Temp__Sequence *)allocator.allocate(sizeof(fpv_msgs__msg__Temp__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fpv_msgs__msg__Temp__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fpv_msgs__msg__Temp__Sequence__destroy(fpv_msgs__msg__Temp__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fpv_msgs__msg__Temp__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fpv_msgs__msg__Temp__Sequence__are_equal(const fpv_msgs__msg__Temp__Sequence * lhs, const fpv_msgs__msg__Temp__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fpv_msgs__msg__Temp__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fpv_msgs__msg__Temp__Sequence__copy(
  const fpv_msgs__msg__Temp__Sequence * input,
  fpv_msgs__msg__Temp__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fpv_msgs__msg__Temp);
    fpv_msgs__msg__Temp * data =
      (fpv_msgs__msg__Temp *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fpv_msgs__msg__Temp__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          fpv_msgs__msg__Temp__fini(&data[i]);
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
    if (!fpv_msgs__msg__Temp__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
