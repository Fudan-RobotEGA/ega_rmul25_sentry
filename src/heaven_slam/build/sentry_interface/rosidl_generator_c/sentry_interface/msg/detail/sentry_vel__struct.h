// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sentry_interface:msg/SentryVel.idl
// generated code does not contain a copyright notice

#ifndef SENTRY_INTERFACE__MSG__DETAIL__SENTRY_VEL__STRUCT_H_
#define SENTRY_INTERFACE__MSG__DETAIL__SENTRY_VEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SentryVel in the package sentry_interface.
typedef struct sentry_interface__msg__SentryVel
{
  float vel_x;
  float vel_y;
  float vel_z;
  float angle_yaw;
} sentry_interface__msg__SentryVel;

// Struct for a sequence of sentry_interface__msg__SentryVel.
typedef struct sentry_interface__msg__SentryVel__Sequence
{
  sentry_interface__msg__SentryVel * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sentry_interface__msg__SentryVel__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENTRY_INTERFACE__MSG__DETAIL__SENTRY_VEL__STRUCT_H_
