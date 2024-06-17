// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fpv_msgs:msg/MoonlyFpv.idl
// generated code does not contain a copyright notice
#include "fpv_msgs/msg/detail/moonly_fpv__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
fpv_msgs__msg__MoonlyFpv__init(fpv_msgs__msg__MoonlyFpv * msg)
{
  if (!msg) {
    return false;
  }
  // boat_linear_speed
  // boat_angular_speed
  // pwm_left
  // pwm_right
  // aim_gps_lng
  // aim_gps_lat
  // fpv_gps_lng
  // fpv_gps_lat
  // fpv_gps_hight
  // fpv_gps_face
  // manual_fpv_rol
  // manual_fpv_pit
  // manual_fpv_yaw
  // manual_fpv_thr
  // auto_fpv_rol
  // auto_fpv_pit
  // auto_fpv_yaw
  // auto_fpv_thr
  // control_model
  // fpv_model
  return true;
}

void
fpv_msgs__msg__MoonlyFpv__fini(fpv_msgs__msg__MoonlyFpv * msg)
{
  if (!msg) {
    return;
  }
  // boat_linear_speed
  // boat_angular_speed
  // pwm_left
  // pwm_right
  // aim_gps_lng
  // aim_gps_lat
  // fpv_gps_lng
  // fpv_gps_lat
  // fpv_gps_hight
  // fpv_gps_face
  // manual_fpv_rol
  // manual_fpv_pit
  // manual_fpv_yaw
  // manual_fpv_thr
  // auto_fpv_rol
  // auto_fpv_pit
  // auto_fpv_yaw
  // auto_fpv_thr
  // control_model
  // fpv_model
}

bool
fpv_msgs__msg__MoonlyFpv__are_equal(const fpv_msgs__msg__MoonlyFpv * lhs, const fpv_msgs__msg__MoonlyFpv * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // boat_linear_speed
  if (lhs->boat_linear_speed != rhs->boat_linear_speed) {
    return false;
  }
  // boat_angular_speed
  if (lhs->boat_angular_speed != rhs->boat_angular_speed) {
    return false;
  }
  // pwm_left
  if (lhs->pwm_left != rhs->pwm_left) {
    return false;
  }
  // pwm_right
  if (lhs->pwm_right != rhs->pwm_right) {
    return false;
  }
  // aim_gps_lng
  if (lhs->aim_gps_lng != rhs->aim_gps_lng) {
    return false;
  }
  // aim_gps_lat
  if (lhs->aim_gps_lat != rhs->aim_gps_lat) {
    return false;
  }
  // fpv_gps_lng
  if (lhs->fpv_gps_lng != rhs->fpv_gps_lng) {
    return false;
  }
  // fpv_gps_lat
  if (lhs->fpv_gps_lat != rhs->fpv_gps_lat) {
    return false;
  }
  // fpv_gps_hight
  if (lhs->fpv_gps_hight != rhs->fpv_gps_hight) {
    return false;
  }
  // fpv_gps_face
  if (lhs->fpv_gps_face != rhs->fpv_gps_face) {
    return false;
  }
  // manual_fpv_rol
  if (lhs->manual_fpv_rol != rhs->manual_fpv_rol) {
    return false;
  }
  // manual_fpv_pit
  if (lhs->manual_fpv_pit != rhs->manual_fpv_pit) {
    return false;
  }
  // manual_fpv_yaw
  if (lhs->manual_fpv_yaw != rhs->manual_fpv_yaw) {
    return false;
  }
  // manual_fpv_thr
  if (lhs->manual_fpv_thr != rhs->manual_fpv_thr) {
    return false;
  }
  // auto_fpv_rol
  if (lhs->auto_fpv_rol != rhs->auto_fpv_rol) {
    return false;
  }
  // auto_fpv_pit
  if (lhs->auto_fpv_pit != rhs->auto_fpv_pit) {
    return false;
  }
  // auto_fpv_yaw
  if (lhs->auto_fpv_yaw != rhs->auto_fpv_yaw) {
    return false;
  }
  // auto_fpv_thr
  if (lhs->auto_fpv_thr != rhs->auto_fpv_thr) {
    return false;
  }
  // control_model
  if (lhs->control_model != rhs->control_model) {
    return false;
  }
  // fpv_model
  if (lhs->fpv_model != rhs->fpv_model) {
    return false;
  }
  return true;
}

bool
fpv_msgs__msg__MoonlyFpv__copy(
  const fpv_msgs__msg__MoonlyFpv * input,
  fpv_msgs__msg__MoonlyFpv * output)
{
  if (!input || !output) {
    return false;
  }
  // boat_linear_speed
  output->boat_linear_speed = input->boat_linear_speed;
  // boat_angular_speed
  output->boat_angular_speed = input->boat_angular_speed;
  // pwm_left
  output->pwm_left = input->pwm_left;
  // pwm_right
  output->pwm_right = input->pwm_right;
  // aim_gps_lng
  output->aim_gps_lng = input->aim_gps_lng;
  // aim_gps_lat
  output->aim_gps_lat = input->aim_gps_lat;
  // fpv_gps_lng
  output->fpv_gps_lng = input->fpv_gps_lng;
  // fpv_gps_lat
  output->fpv_gps_lat = input->fpv_gps_lat;
  // fpv_gps_hight
  output->fpv_gps_hight = input->fpv_gps_hight;
  // fpv_gps_face
  output->fpv_gps_face = input->fpv_gps_face;
  // manual_fpv_rol
  output->manual_fpv_rol = input->manual_fpv_rol;
  // manual_fpv_pit
  output->manual_fpv_pit = input->manual_fpv_pit;
  // manual_fpv_yaw
  output->manual_fpv_yaw = input->manual_fpv_yaw;
  // manual_fpv_thr
  output->manual_fpv_thr = input->manual_fpv_thr;
  // auto_fpv_rol
  output->auto_fpv_rol = input->auto_fpv_rol;
  // auto_fpv_pit
  output->auto_fpv_pit = input->auto_fpv_pit;
  // auto_fpv_yaw
  output->auto_fpv_yaw = input->auto_fpv_yaw;
  // auto_fpv_thr
  output->auto_fpv_thr = input->auto_fpv_thr;
  // control_model
  output->control_model = input->control_model;
  // fpv_model
  output->fpv_model = input->fpv_model;
  return true;
}

fpv_msgs__msg__MoonlyFpv *
fpv_msgs__msg__MoonlyFpv__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fpv_msgs__msg__MoonlyFpv * msg = (fpv_msgs__msg__MoonlyFpv *)allocator.allocate(sizeof(fpv_msgs__msg__MoonlyFpv), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fpv_msgs__msg__MoonlyFpv));
  bool success = fpv_msgs__msg__MoonlyFpv__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fpv_msgs__msg__MoonlyFpv__destroy(fpv_msgs__msg__MoonlyFpv * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fpv_msgs__msg__MoonlyFpv__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fpv_msgs__msg__MoonlyFpv__Sequence__init(fpv_msgs__msg__MoonlyFpv__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fpv_msgs__msg__MoonlyFpv * data = NULL;

  if (size) {
    data = (fpv_msgs__msg__MoonlyFpv *)allocator.zero_allocate(size, sizeof(fpv_msgs__msg__MoonlyFpv), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fpv_msgs__msg__MoonlyFpv__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fpv_msgs__msg__MoonlyFpv__fini(&data[i - 1]);
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
fpv_msgs__msg__MoonlyFpv__Sequence__fini(fpv_msgs__msg__MoonlyFpv__Sequence * array)
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
      fpv_msgs__msg__MoonlyFpv__fini(&array->data[i]);
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

fpv_msgs__msg__MoonlyFpv__Sequence *
fpv_msgs__msg__MoonlyFpv__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fpv_msgs__msg__MoonlyFpv__Sequence * array = (fpv_msgs__msg__MoonlyFpv__Sequence *)allocator.allocate(sizeof(fpv_msgs__msg__MoonlyFpv__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fpv_msgs__msg__MoonlyFpv__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fpv_msgs__msg__MoonlyFpv__Sequence__destroy(fpv_msgs__msg__MoonlyFpv__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fpv_msgs__msg__MoonlyFpv__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fpv_msgs__msg__MoonlyFpv__Sequence__are_equal(const fpv_msgs__msg__MoonlyFpv__Sequence * lhs, const fpv_msgs__msg__MoonlyFpv__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fpv_msgs__msg__MoonlyFpv__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fpv_msgs__msg__MoonlyFpv__Sequence__copy(
  const fpv_msgs__msg__MoonlyFpv__Sequence * input,
  fpv_msgs__msg__MoonlyFpv__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fpv_msgs__msg__MoonlyFpv);
    fpv_msgs__msg__MoonlyFpv * data =
      (fpv_msgs__msg__MoonlyFpv *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fpv_msgs__msg__MoonlyFpv__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          fpv_msgs__msg__MoonlyFpv__fini(&data[i]);
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
    if (!fpv_msgs__msg__MoonlyFpv__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
