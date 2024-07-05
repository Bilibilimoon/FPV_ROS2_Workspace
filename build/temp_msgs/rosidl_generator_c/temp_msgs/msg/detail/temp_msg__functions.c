// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from temp_msgs:msg/TempMsg.idl
// generated code does not contain a copyright notice
#include "temp_msgs/msg/detail/temp_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
temp_msgs__msg__TempMsg__init(temp_msgs__msg__TempMsg * msg)
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
temp_msgs__msg__TempMsg__fini(temp_msgs__msg__TempMsg * msg)
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
temp_msgs__msg__TempMsg__are_equal(const temp_msgs__msg__TempMsg * lhs, const temp_msgs__msg__TempMsg * rhs)
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
temp_msgs__msg__TempMsg__copy(
  const temp_msgs__msg__TempMsg * input,
  temp_msgs__msg__TempMsg * output)
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

temp_msgs__msg__TempMsg *
temp_msgs__msg__TempMsg__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  temp_msgs__msg__TempMsg * msg = (temp_msgs__msg__TempMsg *)allocator.allocate(sizeof(temp_msgs__msg__TempMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(temp_msgs__msg__TempMsg));
  bool success = temp_msgs__msg__TempMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
temp_msgs__msg__TempMsg__destroy(temp_msgs__msg__TempMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    temp_msgs__msg__TempMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
temp_msgs__msg__TempMsg__Sequence__init(temp_msgs__msg__TempMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  temp_msgs__msg__TempMsg * data = NULL;

  if (size) {
    data = (temp_msgs__msg__TempMsg *)allocator.zero_allocate(size, sizeof(temp_msgs__msg__TempMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = temp_msgs__msg__TempMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        temp_msgs__msg__TempMsg__fini(&data[i - 1]);
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
temp_msgs__msg__TempMsg__Sequence__fini(temp_msgs__msg__TempMsg__Sequence * array)
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
      temp_msgs__msg__TempMsg__fini(&array->data[i]);
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

temp_msgs__msg__TempMsg__Sequence *
temp_msgs__msg__TempMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  temp_msgs__msg__TempMsg__Sequence * array = (temp_msgs__msg__TempMsg__Sequence *)allocator.allocate(sizeof(temp_msgs__msg__TempMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = temp_msgs__msg__TempMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
temp_msgs__msg__TempMsg__Sequence__destroy(temp_msgs__msg__TempMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    temp_msgs__msg__TempMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
temp_msgs__msg__TempMsg__Sequence__are_equal(const temp_msgs__msg__TempMsg__Sequence * lhs, const temp_msgs__msg__TempMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!temp_msgs__msg__TempMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
temp_msgs__msg__TempMsg__Sequence__copy(
  const temp_msgs__msg__TempMsg__Sequence * input,
  temp_msgs__msg__TempMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(temp_msgs__msg__TempMsg);
    temp_msgs__msg__TempMsg * data =
      (temp_msgs__msg__TempMsg *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!temp_msgs__msg__TempMsg__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          temp_msgs__msg__TempMsg__fini(&data[i]);
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
    if (!temp_msgs__msg__TempMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
