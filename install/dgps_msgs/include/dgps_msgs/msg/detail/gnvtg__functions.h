// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from dgps_msgs:msg/Gnvtg.idl
// generated code does not contain a copyright notice

#ifndef DGPS_MSGS__MSG__DETAIL__GNVTG__FUNCTIONS_H_
#define DGPS_MSGS__MSG__DETAIL__GNVTG__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "dgps_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "dgps_msgs/msg/detail/gnvtg__struct.h"

/// Initialize msg/Gnvtg message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * dgps_msgs__msg__Gnvtg
 * )) before or use
 * dgps_msgs__msg__Gnvtg__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_dgps_msgs
bool
dgps_msgs__msg__Gnvtg__init(dgps_msgs__msg__Gnvtg * msg);

/// Finalize msg/Gnvtg message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dgps_msgs
void
dgps_msgs__msg__Gnvtg__fini(dgps_msgs__msg__Gnvtg * msg);

/// Create msg/Gnvtg message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * dgps_msgs__msg__Gnvtg__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dgps_msgs
dgps_msgs__msg__Gnvtg *
dgps_msgs__msg__Gnvtg__create();

/// Destroy msg/Gnvtg message.
/**
 * It calls
 * dgps_msgs__msg__Gnvtg__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dgps_msgs
void
dgps_msgs__msg__Gnvtg__destroy(dgps_msgs__msg__Gnvtg * msg);

/// Check for msg/Gnvtg message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dgps_msgs
bool
dgps_msgs__msg__Gnvtg__are_equal(const dgps_msgs__msg__Gnvtg * lhs, const dgps_msgs__msg__Gnvtg * rhs);

/// Copy a msg/Gnvtg message.
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
dgps_msgs__msg__Gnvtg__copy(
  const dgps_msgs__msg__Gnvtg * input,
  dgps_msgs__msg__Gnvtg * output);

/// Initialize array of msg/Gnvtg messages.
/**
 * It allocates the memory for the number of elements and calls
 * dgps_msgs__msg__Gnvtg__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_dgps_msgs
bool
dgps_msgs__msg__Gnvtg__Sequence__init(dgps_msgs__msg__Gnvtg__Sequence * array, size_t size);

/// Finalize array of msg/Gnvtg messages.
/**
 * It calls
 * dgps_msgs__msg__Gnvtg__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dgps_msgs
void
dgps_msgs__msg__Gnvtg__Sequence__fini(dgps_msgs__msg__Gnvtg__Sequence * array);

/// Create array of msg/Gnvtg messages.
/**
 * It allocates the memory for the array and calls
 * dgps_msgs__msg__Gnvtg__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dgps_msgs
dgps_msgs__msg__Gnvtg__Sequence *
dgps_msgs__msg__Gnvtg__Sequence__create(size_t size);

/// Destroy array of msg/Gnvtg messages.
/**
 * It calls
 * dgps_msgs__msg__Gnvtg__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dgps_msgs
void
dgps_msgs__msg__Gnvtg__Sequence__destroy(dgps_msgs__msg__Gnvtg__Sequence * array);

/// Check for msg/Gnvtg message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dgps_msgs
bool
dgps_msgs__msg__Gnvtg__Sequence__are_equal(const dgps_msgs__msg__Gnvtg__Sequence * lhs, const dgps_msgs__msg__Gnvtg__Sequence * rhs);

/// Copy an array of msg/Gnvtg messages.
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
dgps_msgs__msg__Gnvtg__Sequence__copy(
  const dgps_msgs__msg__Gnvtg__Sequence * input,
  dgps_msgs__msg__Gnvtg__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DGPS_MSGS__MSG__DETAIL__GNVTG__FUNCTIONS_H_
