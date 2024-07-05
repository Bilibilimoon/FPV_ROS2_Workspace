// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from fpv_msgs:msg/TempMsg.idl
// generated code does not contain a copyright notice

#ifndef FPV_MSGS__MSG__DETAIL__TEMP_MSG__FUNCTIONS_H_
#define FPV_MSGS__MSG__DETAIL__TEMP_MSG__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "fpv_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "fpv_msgs/msg/detail/temp_msg__struct.h"

/// Initialize msg/TempMsg message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * fpv_msgs__msg__TempMsg
 * )) before or use
 * fpv_msgs__msg__TempMsg__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_fpv_msgs
bool
fpv_msgs__msg__TempMsg__init(fpv_msgs__msg__TempMsg * msg);

/// Finalize msg/TempMsg message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fpv_msgs
void
fpv_msgs__msg__TempMsg__fini(fpv_msgs__msg__TempMsg * msg);

/// Create msg/TempMsg message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * fpv_msgs__msg__TempMsg__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fpv_msgs
fpv_msgs__msg__TempMsg *
fpv_msgs__msg__TempMsg__create();

/// Destroy msg/TempMsg message.
/**
 * It calls
 * fpv_msgs__msg__TempMsg__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fpv_msgs
void
fpv_msgs__msg__TempMsg__destroy(fpv_msgs__msg__TempMsg * msg);

/// Check for msg/TempMsg message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_fpv_msgs
bool
fpv_msgs__msg__TempMsg__are_equal(const fpv_msgs__msg__TempMsg * lhs, const fpv_msgs__msg__TempMsg * rhs);

/// Copy a msg/TempMsg message.
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
fpv_msgs__msg__TempMsg__copy(
  const fpv_msgs__msg__TempMsg * input,
  fpv_msgs__msg__TempMsg * output);

/// Initialize array of msg/TempMsg messages.
/**
 * It allocates the memory for the number of elements and calls
 * fpv_msgs__msg__TempMsg__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_fpv_msgs
bool
fpv_msgs__msg__TempMsg__Sequence__init(fpv_msgs__msg__TempMsg__Sequence * array, size_t size);

/// Finalize array of msg/TempMsg messages.
/**
 * It calls
 * fpv_msgs__msg__TempMsg__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fpv_msgs
void
fpv_msgs__msg__TempMsg__Sequence__fini(fpv_msgs__msg__TempMsg__Sequence * array);

/// Create array of msg/TempMsg messages.
/**
 * It allocates the memory for the array and calls
 * fpv_msgs__msg__TempMsg__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fpv_msgs
fpv_msgs__msg__TempMsg__Sequence *
fpv_msgs__msg__TempMsg__Sequence__create(size_t size);

/// Destroy array of msg/TempMsg messages.
/**
 * It calls
 * fpv_msgs__msg__TempMsg__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fpv_msgs
void
fpv_msgs__msg__TempMsg__Sequence__destroy(fpv_msgs__msg__TempMsg__Sequence * array);

/// Check for msg/TempMsg message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_fpv_msgs
bool
fpv_msgs__msg__TempMsg__Sequence__are_equal(const fpv_msgs__msg__TempMsg__Sequence * lhs, const fpv_msgs__msg__TempMsg__Sequence * rhs);

/// Copy an array of msg/TempMsg messages.
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
fpv_msgs__msg__TempMsg__Sequence__copy(
  const fpv_msgs__msg__TempMsg__Sequence * input,
  fpv_msgs__msg__TempMsg__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // FPV_MSGS__MSG__DETAIL__TEMP_MSG__FUNCTIONS_H_
