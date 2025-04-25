// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sentry_interface:action/ActionControl.idl
// generated code does not contain a copyright notice

#ifndef SENTRY_INTERFACE__ACTION__DETAIL__ACTION_CONTROL__STRUCT_H_
#define SENTRY_INTERFACE__ACTION__DETAIL__ACTION_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STATUS_ATTACKING'.
enum
{
  sentry_interface__action__ActionControl_Goal__STATUS_ATTACKING = 3ul
};

/// Constant 'STATUS_RETREATING'.
enum
{
  sentry_interface__action__ActionControl_Goal__STATUS_RETREATING = 4ul
};

/// Constant 'STATUS_DEFENDING'.
enum
{
  sentry_interface__action__ActionControl_Goal__STATUS_DEFENDING = 5ul
};

/// Constant 'STATUS_HEALING'.
enum
{
  sentry_interface__action__ActionControl_Goal__STATUS_HEALING = 6ul
};

/// Struct defined in action/ActionControl in the package sentry_interface.
typedef struct sentry_interface__action__ActionControl_Goal
{
  /// 导航目标点，参数：x,y
  float chassic_target[2];
  /// yaw的角度，参数：角度
  float yaw_angel;
  /// 机器人当前状态：进攻、撤退、防守、补给
  uint32_t status;
} sentry_interface__action__ActionControl_Goal;

// Struct for a sequence of sentry_interface__action__ActionControl_Goal.
typedef struct sentry_interface__action__ActionControl_Goal__Sequence
{
  sentry_interface__action__ActionControl_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sentry_interface__action__ActionControl_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/ActionControl in the package sentry_interface.
typedef struct sentry_interface__action__ActionControl_Result
{
  /// 获取是否执行完成的信号
  bool success;
} sentry_interface__action__ActionControl_Result;

// Struct for a sequence of sentry_interface__action__ActionControl_Result.
typedef struct sentry_interface__action__ActionControl_Result__Sequence
{
  sentry_interface__action__ActionControl_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sentry_interface__action__ActionControl_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/ActionControl in the package sentry_interface.
typedef struct sentry_interface__action__ActionControl_Feedback
{
  /// 当前位置
  float current_pose[2];
  /// 当前状态
  uint32_t current_status;
} sentry_interface__action__ActionControl_Feedback;

// Struct for a sequence of sentry_interface__action__ActionControl_Feedback.
typedef struct sentry_interface__action__ActionControl_Feedback__Sequence
{
  sentry_interface__action__ActionControl_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sentry_interface__action__ActionControl_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "sentry_interface/action/detail/action_control__struct.h"

/// Struct defined in action/ActionControl in the package sentry_interface.
typedef struct sentry_interface__action__ActionControl_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  sentry_interface__action__ActionControl_Goal goal;
} sentry_interface__action__ActionControl_SendGoal_Request;

// Struct for a sequence of sentry_interface__action__ActionControl_SendGoal_Request.
typedef struct sentry_interface__action__ActionControl_SendGoal_Request__Sequence
{
  sentry_interface__action__ActionControl_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sentry_interface__action__ActionControl_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/ActionControl in the package sentry_interface.
typedef struct sentry_interface__action__ActionControl_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} sentry_interface__action__ActionControl_SendGoal_Response;

// Struct for a sequence of sentry_interface__action__ActionControl_SendGoal_Response.
typedef struct sentry_interface__action__ActionControl_SendGoal_Response__Sequence
{
  sentry_interface__action__ActionControl_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sentry_interface__action__ActionControl_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/ActionControl in the package sentry_interface.
typedef struct sentry_interface__action__ActionControl_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} sentry_interface__action__ActionControl_GetResult_Request;

// Struct for a sequence of sentry_interface__action__ActionControl_GetResult_Request.
typedef struct sentry_interface__action__ActionControl_GetResult_Request__Sequence
{
  sentry_interface__action__ActionControl_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sentry_interface__action__ActionControl_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "sentry_interface/action/detail/action_control__struct.h"

/// Struct defined in action/ActionControl in the package sentry_interface.
typedef struct sentry_interface__action__ActionControl_GetResult_Response
{
  int8_t status;
  sentry_interface__action__ActionControl_Result result;
} sentry_interface__action__ActionControl_GetResult_Response;

// Struct for a sequence of sentry_interface__action__ActionControl_GetResult_Response.
typedef struct sentry_interface__action__ActionControl_GetResult_Response__Sequence
{
  sentry_interface__action__ActionControl_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sentry_interface__action__ActionControl_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "sentry_interface/action/detail/action_control__struct.h"

/// Struct defined in action/ActionControl in the package sentry_interface.
typedef struct sentry_interface__action__ActionControl_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  sentry_interface__action__ActionControl_Feedback feedback;
} sentry_interface__action__ActionControl_FeedbackMessage;

// Struct for a sequence of sentry_interface__action__ActionControl_FeedbackMessage.
typedef struct sentry_interface__action__ActionControl_FeedbackMessage__Sequence
{
  sentry_interface__action__ActionControl_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sentry_interface__action__ActionControl_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENTRY_INTERFACE__ACTION__DETAIL__ACTION_CONTROL__STRUCT_H_
