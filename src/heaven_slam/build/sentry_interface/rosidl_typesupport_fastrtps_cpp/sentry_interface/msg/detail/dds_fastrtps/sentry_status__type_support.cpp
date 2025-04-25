// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from sentry_interface:msg/SentryStatus.idl
// generated code does not contain a copyright notice
#include "sentry_interface/msg/detail/sentry_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "sentry_interface/msg/detail/sentry_status__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace sentry_interface
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sentry_interface
cdr_serialize(
  const sentry_interface::msg::SentryStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: game_stage
  cdr << ros_message.game_stage;
  // Member: gain_area_detected
  cdr << ros_message.gain_area_detected;
  // Member: gain_area_status
  cdr << ros_message.gain_area_status;
  // Member: supply_area_status
  cdr << ros_message.supply_area_status;
  // Member: stage_time_remain
  cdr << ros_message.stage_time_remain;
  // Member: current_hp
  cdr << ros_message.current_hp;
  // Member: rotate_flag
  cdr << ros_message.rotate_flag;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sentry_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sentry_interface::msg::SentryStatus & ros_message)
{
  // Member: game_stage
  cdr >> ros_message.game_stage;

  // Member: gain_area_detected
  cdr >> ros_message.gain_area_detected;

  // Member: gain_area_status
  cdr >> ros_message.gain_area_status;

  // Member: supply_area_status
  cdr >> ros_message.supply_area_status;

  // Member: stage_time_remain
  cdr >> ros_message.stage_time_remain;

  // Member: current_hp
  cdr >> ros_message.current_hp;

  // Member: rotate_flag
  cdr >> ros_message.rotate_flag;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sentry_interface
get_serialized_size(
  const sentry_interface::msg::SentryStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: game_stage
  {
    size_t item_size = sizeof(ros_message.game_stage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gain_area_detected
  {
    size_t item_size = sizeof(ros_message.gain_area_detected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gain_area_status
  {
    size_t item_size = sizeof(ros_message.gain_area_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: supply_area_status
  {
    size_t item_size = sizeof(ros_message.supply_area_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stage_time_remain
  {
    size_t item_size = sizeof(ros_message.stage_time_remain);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: current_hp
  {
    size_t item_size = sizeof(ros_message.current_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rotate_flag
  {
    size_t item_size = sizeof(ros_message.rotate_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sentry_interface
max_serialized_size_SentryStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: game_stage
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gain_area_detected
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gain_area_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: supply_area_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: stage_time_remain
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: current_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: rotate_flag
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = sentry_interface::msg::SentryStatus;
    is_plain =
      (
      offsetof(DataType, rotate_flag) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SentryStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const sentry_interface::msg::SentryStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SentryStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<sentry_interface::msg::SentryStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SentryStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const sentry_interface::msg::SentryStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SentryStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SentryStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SentryStatus__callbacks = {
  "sentry_interface::msg",
  "SentryStatus",
  _SentryStatus__cdr_serialize,
  _SentryStatus__cdr_deserialize,
  _SentryStatus__get_serialized_size,
  _SentryStatus__max_serialized_size
};

static rosidl_message_type_support_t _SentryStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SentryStatus__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace sentry_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_sentry_interface
const rosidl_message_type_support_t *
get_message_type_support_handle<sentry_interface::msg::SentryStatus>()
{
  return &sentry_interface::msg::typesupport_fastrtps_cpp::_SentryStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sentry_interface, msg, SentryStatus)() {
  return &sentry_interface::msg::typesupport_fastrtps_cpp::_SentryStatus__handle;
}

#ifdef __cplusplus
}
#endif
