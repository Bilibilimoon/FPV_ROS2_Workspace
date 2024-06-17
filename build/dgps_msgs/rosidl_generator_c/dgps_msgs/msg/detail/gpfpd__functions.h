// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from dgps_msgs:msg/Gpfpd.idl
// generated code does not contain a copyright notice

#ifndef DGPS_MSGS__MSG__DETAIL__GPFPD__FUNCTIONS_H_
#define DGPS_MSGS__MSG__DETAIL__GPFPD__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "dgps_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "dgps_msgs/msg/detail/gpfpd__struct.h"

/// Initialize msg/Gpfpd message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * dgps_msgs__msg__Gpfpd
 * )) before or use
 * dgps_msgs__msg__Gpfpd__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_dgps_msgs
bool
dgps_msgs__msg__Gpfpd__init(dgps_msgs__msg__Gpfpd * msg);

/// Finalize msg/Gpfpd message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dgps_msgs
void
dgps_msgs__msg__Gpfpd__fini(dgps_msgs__msg__Gpfpd * msg);

/// Create msg/Gpfpd message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * dgps_msgs__msg__Gpfpd__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dgps_msgs
dgps_msgs__msg__Gpfpd *
dgps_msgs__msg__Gpfpd__create();

/// Destroy msg/Gpfpd message.
/**
 * It calls
 * dgps_msgs__msg__Gpfpd__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dgps_msgs
void
dgps_msgs__msg__Gpfpd__destroy(dgps_msgs__msg__Gpfpd * msg);

/// Check for msg/Gpfpd message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dgps_msgs
bool
dgps_msgs__msg__Gpfpd__are_equal(const dgps_msgs__msg__Gpfpd * lhs, const dgps_msgs__msg__Gpfpd * rhs);

/// Copy a msg/Gpfpd message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_dgps_msgs
bool
dgps_msgs__msg__Gpfpd__copy(
  const dgps_msgs__msg__Gpfpd * input,
  dgps_msgs__msg__Gpfpd * output);

/// Initialize array of msg/Gpfpd messages.
/**
 * It allocates the memory for the number of elements and calls
 * dgps_msgs__msg__Gpfpd__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_dgps_msgs
bool
dgps_msgs__msg__Gpfpd__Sequence__init(dgps_msgs__msg__Gpfpd__Sequence * array, size_t size);

/// Finalize array of msg/Gpfpd messages.
/**
 * It calls
 * dgps_msgs__msg__Gpfpd__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dgps_msgs
void
dgps_msgs__msg__Gpfpd__Sequence__fini(dgps_msgs__msg__Gpfpd__Sequence * array);

/// Create array of msg/Gpfpd messages.
/**
 * It allocates the memory for the array and calls
 * dgps_msgs__msg__Gpfpd__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dgps_msgs
dgps_msgs__msg__Gpfpd__Sequence *
dgps_msgs__msg__Gpfpd__Sequence__create(size_t size);

/// Destroy array of msg/Gpfpd messages.
/**
 * It calls
 * dgps_msgs__msg__Gpfpd__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dgps_msgs
void
dgps_msgs__msg__Gpfpd__Sequence__destroy(dgps_msgs__msg__Gpfpd__Sequence * array);

/// Check for msg/Gpfpd message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dgps_msgs
bool
dgps_msgs__msg__Gpfpd__Sequence__are_equal(const dgps_msgs__msg__Gpfpd__Sequence * lhs, const dgps_msgs__msg__Gpfpd__Sequence * rhs);

/// Copy an array of msg/Gpfpd messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_dgps_msgs
bool
dgps_msgs__msg__Gpfpd__Sequence__copy(
  const dgps_msgs__msg__Gpfpd__Sequence * input,
  dgps_msgs__msg__Gpfpd__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DGPS_MSGS__MSG__DETAIL__GPFPD__FUNCTIONS_H_
