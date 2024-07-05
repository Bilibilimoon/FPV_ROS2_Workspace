// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from fpv_msgs:msg/Temp.idl
// generated code does not contain a copyright notice

#ifndef FPV_MSGS__MSG__DETAIL__TEMP__FUNCTIONS_H_
#define FPV_MSGS__MSG__DETAIL__TEMP__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "fpv_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "fpv_msgs/msg/detail/temp__struct.h"

/// Initialize msg/Temp message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * fpv_msgs__msg__Temp
 * )) before or use
 * fpv_msgs__msg__Temp__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_fpv_msgs
bool
fpv_msgs__msg__Temp__init(fpv_msgs__msg__Temp * msg);

/// Finalize msg/Temp message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fpv_msgs
void
fpv_msgs__msg__Temp__fini(fpv_msgs__msg__Temp * msg);

/// Create msg/Temp message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * fpv_msgs__msg__Temp__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fpv_msgs
fpv_msgs__msg__Temp *
fpv_msgs__msg__Temp__create();

/// Destroy msg/Temp message.
/**
 * It calls
 * fpv_msgs__msg__Temp__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fpv_msgs
void
fpv_msgs__msg__Temp__destroy(fpv_msgs__msg__Temp * msg);

/// Check for msg/Temp message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_fpv_msgs
bool
fpv_msgs__msg__Temp__are_equal(const fpv_msgs__msg__Temp * lhs, const fpv_msgs__msg__Temp * rhs);

/// Copy a msg/Temp message.
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
ROSIDL_GENERATOR_C_PUBLIC_fpv_msgs
bool
fpv_msgs__msg__Temp__copy(
  const fpv_msgs__msg__Temp * input,
  fpv_msgs__msg__Temp * output);

/// Initialize array of msg/Temp messages.
/**
 * It allocates the memory for the number of elements and calls
 * fpv_msgs__msg__Temp__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_fpv_msgs
bool
fpv_msgs__msg__Temp__Sequence__init(fpv_msgs__msg__Temp__Sequence * array, size_t size);

/// Finalize array of msg/Temp messages.
/**
 * It calls
 * fpv_msgs__msg__Temp__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fpv_msgs
void
fpv_msgs__msg__Temp__Sequence__fini(fpv_msgs__msg__Temp__Sequence * array);

/// Create array of msg/Temp messages.
/**
 * It allocates the memory for the array and calls
 * fpv_msgs__msg__Temp__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fpv_msgs
fpv_msgs__msg__Temp__Sequence *
fpv_msgs__msg__Temp__Sequence__create(size_t size);

/// Destroy array of msg/Temp messages.
/**
 * It calls
 * fpv_msgs__msg__Temp__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fpv_msgs
void
fpv_msgs__msg__Temp__Sequence__destroy(fpv_msgs__msg__Temp__Sequence * array);

/// Check for msg/Temp message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_fpv_msgs
bool
fpv_msgs__msg__Temp__Sequence__are_equal(const fpv_msgs__msg__Temp__Sequence * lhs, const fpv_msgs__msg__Temp__Sequence * rhs);

/// Copy an array of msg/Temp messages.
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
ROSIDL_GENERATOR_C_PUBLIC_fpv_msgs
bool
fpv_msgs__msg__Temp__Sequence__copy(
  const fpv_msgs__msg__Temp__Sequence * input,
  fpv_msgs__msg__Temp__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // FPV_MSGS__MSG__DETAIL__TEMP__FUNCTIONS_H_
