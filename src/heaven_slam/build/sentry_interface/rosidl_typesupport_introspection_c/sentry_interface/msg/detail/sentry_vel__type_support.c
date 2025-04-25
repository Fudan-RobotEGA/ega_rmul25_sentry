// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from sentry_interface:msg/SentryVel.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "sentry_interface/msg/detail/sentry_vel__rosidl_typesupport_introspection_c.h"
#include "sentry_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "sentry_interface/msg/detail/sentry_vel__functions.h"
#include "sentry_interface/msg/detail/sentry_vel__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void sentry_interface__msg__SentryVel__rosidl_typesupport_introspection_c__SentryVel_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sentry_interface__msg__SentryVel__init(message_memory);
}

void sentry_interface__msg__SentryVel__rosidl_typesupport_introspection_c__SentryVel_fini_function(void * message_memory)
{
  sentry_interface__msg__SentryVel__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember sentry_interface__msg__SentryVel__rosidl_typesupport_introspection_c__SentryVel_message_member_array[4] = {
  {
    "vel_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sentry_interface__msg__SentryVel, vel_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vel_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sentry_interface__msg__SentryVel, vel_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vel_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sentry_interface__msg__SentryVel, vel_z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angle_yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sentry_interface__msg__SentryVel, angle_yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sentry_interface__msg__SentryVel__rosidl_typesupport_introspection_c__SentryVel_message_members = {
  "sentry_interface__msg",  // message namespace
  "SentryVel",  // message name
  4,  // number of fields
  sizeof(sentry_interface__msg__SentryVel),
  sentry_interface__msg__SentryVel__rosidl_typesupport_introspection_c__SentryVel_message_member_array,  // message members
  sentry_interface__msg__SentryVel__rosidl_typesupport_introspection_c__SentryVel_init_function,  // function to initialize message memory (memory has to be allocated)
  sentry_interface__msg__SentryVel__rosidl_typesupport_introspection_c__SentryVel_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sentry_interface__msg__SentryVel__rosidl_typesupport_introspection_c__SentryVel_message_type_support_handle = {
  0,
  &sentry_interface__msg__SentryVel__rosidl_typesupport_introspection_c__SentryVel_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sentry_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sentry_interface, msg, SentryVel)() {
  if (!sentry_interface__msg__SentryVel__rosidl_typesupport_introspection_c__SentryVel_message_type_support_handle.typesupport_identifier) {
    sentry_interface__msg__SentryVel__rosidl_typesupport_introspection_c__SentryVel_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sentry_interface__msg__SentryVel__rosidl_typesupport_introspection_c__SentryVel_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
