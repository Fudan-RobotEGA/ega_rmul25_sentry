// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from sentry_interface:msg/SentryStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "sentry_interface/msg/detail/sentry_status__rosidl_typesupport_introspection_c.h"
#include "sentry_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "sentry_interface/msg/detail/sentry_status__functions.h"
#include "sentry_interface/msg/detail/sentry_status__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void sentry_interface__msg__SentryStatus__rosidl_typesupport_introspection_c__SentryStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sentry_interface__msg__SentryStatus__init(message_memory);
}

void sentry_interface__msg__SentryStatus__rosidl_typesupport_introspection_c__SentryStatus_fini_function(void * message_memory)
{
  sentry_interface__msg__SentryStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember sentry_interface__msg__SentryStatus__rosidl_typesupport_introspection_c__SentryStatus_message_member_array[7] = {
  {
    "game_stage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sentry_interface__msg__SentryStatus, game_stage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gain_area_detected",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sentry_interface__msg__SentryStatus, gain_area_detected),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gain_area_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sentry_interface__msg__SentryStatus, gain_area_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "supply_area_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sentry_interface__msg__SentryStatus, supply_area_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stage_time_remain",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sentry_interface__msg__SentryStatus, stage_time_remain),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_hp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sentry_interface__msg__SentryStatus, current_hp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rotate_flag",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sentry_interface__msg__SentryStatus, rotate_flag),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sentry_interface__msg__SentryStatus__rosidl_typesupport_introspection_c__SentryStatus_message_members = {
  "sentry_interface__msg",  // message namespace
  "SentryStatus",  // message name
  7,  // number of fields
  sizeof(sentry_interface__msg__SentryStatus),
  sentry_interface__msg__SentryStatus__rosidl_typesupport_introspection_c__SentryStatus_message_member_array,  // message members
  sentry_interface__msg__SentryStatus__rosidl_typesupport_introspection_c__SentryStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  sentry_interface__msg__SentryStatus__rosidl_typesupport_introspection_c__SentryStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sentry_interface__msg__SentryStatus__rosidl_typesupport_introspection_c__SentryStatus_message_type_support_handle = {
  0,
  &sentry_interface__msg__SentryStatus__rosidl_typesupport_introspection_c__SentryStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sentry_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sentry_interface, msg, SentryStatus)() {
  if (!sentry_interface__msg__SentryStatus__rosidl_typesupport_introspection_c__SentryStatus_message_type_support_handle.typesupport_identifier) {
    sentry_interface__msg__SentryStatus__rosidl_typesupport_introspection_c__SentryStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sentry_interface__msg__SentryStatus__rosidl_typesupport_introspection_c__SentryStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
