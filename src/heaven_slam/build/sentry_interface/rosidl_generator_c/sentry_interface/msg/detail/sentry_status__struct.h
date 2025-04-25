// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sentry_interface:msg/SentryStatus.idl
// generated code does not contain a copyright notice

#ifndef SENTRY_INTERFACE__MSG__DETAIL__SENTRY_STATUS__STRUCT_H_
#define SENTRY_INTERFACE__MSG__DETAIL__SENTRY_STATUS__STRUCT_H_

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
  sentry_interface__msg__SentryStatus__STATUS_ATTACKING = 3ul
};

/// Constant 'STATUS_RETREATING'.
enum
{
  sentry_interface__msg__SentryStatus__STATUS_RETREATING = 4ul
};

/// Constant 'STATUS_DEFENDING'.
enum
{
  sentry_interface__msg__SentryStatus__STATUS_DEFENDING = 5ul
};

/// Constant 'STATUS_HEALING'.
enum
{
  sentry_interface__msg__SentryStatus__STATUS_HEALING = 6ul
};

/// Struct defined in msg/SentryStatus in the package sentry_interface.
typedef struct sentry_interface__msg__SentryStatus
{
  /// 比赛阶段，0：未开始比赛，1：准备阶段，2：15秒裁判自检阶段，3：5秒倒计时阶段，4：比赛中，5：比赛结算中
  int8_t game_stage;
  /// 检测到达增益区
  int8_t gain_area_detected;
  /// 增益区内状态
  int8_t gain_area_status;
  /// 是否在补给区内
  int8_t supply_area_status;
  /// 比赛阶段时间
  int16_t stage_time_remain;
  /// 当前血量
  int16_t current_hp;
  /// 是否开始小陀螺
  int16_t rotate_flag;
} sentry_interface__msg__SentryStatus;

// Struct for a sequence of sentry_interface__msg__SentryStatus.
typedef struct sentry_interface__msg__SentryStatus__Sequence
{
  sentry_interface__msg__SentryStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sentry_interface__msg__SentryStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENTRY_INTERFACE__MSG__DETAIL__SENTRY_STATUS__STRUCT_H_
