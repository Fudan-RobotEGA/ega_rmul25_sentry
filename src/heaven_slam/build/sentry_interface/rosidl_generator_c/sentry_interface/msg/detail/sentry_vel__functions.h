// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from sentry_interface:msg/SentryVel.idl
// generated code does not contain a copyright notice

#ifndef SENTRY_INTERFACE__MSG__DETAIL__SENTRY_VEL__FUNCTIONS_H_
#define SENTRY_INTERFACE__MSG__DETAIL__SENTRY_VEL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "sentry_interface/msg/rosidl_generator_c__visibility_control.h"

#include "sentry_interface/msg/detail/sentry_vel__struct.h"

/// Initialize msg/SentryVel message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sentry_interface__msg__SentryVel
 * )) before or use
 * sentry_interface__msg__SentryVel__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sentry_interface
bool
sentry_interface__msg__SentryVel__init(sentry_interface__msg__SentryVel * msg);

/// Finalize msg/SentryVel message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sentry_interface
void
sentry_interface__msg__SentryVel__fini(sentry_interface__msg__SentryVel * msg);

/// Create msg/SentryVel message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sentry_interface__msg__SentryVel__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sentry_interface
sentry_interface__msg__SentryVel *
sentry_interface__msg__SentryVel__create();

/// Destroy msg/SentryVel message.
/**
 * It calls
 * sentry_interface__msg__SentryVel__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sentry_interface
void
sentry_interface__msg__SentryVel__destroy(sentry_interface__msg__SentryVel * msg);

/// Check for msg/SentryVel message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sentry_interface
bool
sentry_interface__msg__SentryVel__are_equal(const sentry_interface__msg__SentryVel * lhs, const sentry_interface__msg__SentryVel * rhs);

/// Copy a msg/SentryVel message.
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
ROSIDL_GENERATOR_C_PUBLIC_sentry_interface
bool
sentry_interface__msg__SentryVel__copy(
  const sentry_interface__msg__SentryVel * input,
  sentry_interface__msg__SentryVel * output);

/// Initialize array of msg/SentryVel messages.
/**
 * It allocates the memory for the number of elements and calls
 * sentry_interface__msg__SentryVel__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sentry_interface
bool
sentry_interface__msg__SentryVel__Sequence__init(sentry_interface__msg__SentryVel__Sequence * array, size_t size);

/// Finalize array of msg/SentryVel messages.
/**
 * It calls
 * sentry_interface__msg__SentryVel__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sentry_interface
void
sentry_interface__msg__SentryVel__Sequence__fini(sentry_interface__msg__SentryVel__Sequence * array);

/// Create array of msg/SentryVel messages.
/**
 * It allocates the memory for the array and calls
 * sentry_interface__msg__SentryVel__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sentry_interface
sentry_interface__msg__SentryVel__Sequence *
sentry_interface__msg__SentryVel__Sequence__create(size_t size);

/// Destroy array of msg/SentryVel messages.
/**
 * It calls
 * sentry_interface__msg__SentryVel__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sentry_interface
void
sentry_interface__msg__SentryVel__Sequence__destroy(sentry_interface__msg__SentryVel__Sequence * array);

/// Check for msg/SentryVel message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sentry_interface
bool
sentry_interface__msg__SentryVel__Sequence__are_equal(const sentry_interface__msg__SentryVel__Sequence * lhs, const sentry_interface__msg__SentryVel__Sequence * rhs);

/// Copy an array of msg/SentryVel messages.
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
ROSIDL_GENERATOR_C_PUBLIC_sentry_interface
bool
sentry_interface__msg__SentryVel__Sequence__copy(
  const sentry_interface__msg__SentryVel__Sequence * input,
  sentry_interface__msg__SentryVel__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SENTRY_INTERFACE__MSG__DETAIL__SENTRY_VEL__FUNCTIONS_H_
