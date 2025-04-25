// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sentry_interface:action/ActionControl.idl
// generated code does not contain a copyright notice

#ifndef SENTRY_INTERFACE__ACTION__DETAIL__ACTION_CONTROL__BUILDER_HPP_
#define SENTRY_INTERFACE__ACTION__DETAIL__ACTION_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sentry_interface/action/detail/action_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sentry_interface
{

namespace action
{

namespace builder
{

class Init_ActionControl_Goal_status
{
public:
  explicit Init_ActionControl_Goal_status(::sentry_interface::action::ActionControl_Goal & msg)
  : msg_(msg)
  {}
  ::sentry_interface::action::ActionControl_Goal status(::sentry_interface::action::ActionControl_Goal::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sentry_interface::action::ActionControl_Goal msg_;
};

class Init_ActionControl_Goal_yaw_angel
{
public:
  explicit Init_ActionControl_Goal_yaw_angel(::sentry_interface::action::ActionControl_Goal & msg)
  : msg_(msg)
  {}
  Init_ActionControl_Goal_status yaw_angel(::sentry_interface::action::ActionControl_Goal::_yaw_angel_type arg)
  {
    msg_.yaw_angel = std::move(arg);
    return Init_ActionControl_Goal_status(msg_);
  }

private:
  ::sentry_interface::action::ActionControl_Goal msg_;
};

class Init_ActionControl_Goal_chassic_target
{
public:
  Init_ActionControl_Goal_chassic_target()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActionControl_Goal_yaw_angel chassic_target(::sentry_interface::action::ActionControl_Goal::_chassic_target_type arg)
  {
    msg_.chassic_target = std::move(arg);
    return Init_ActionControl_Goal_yaw_angel(msg_);
  }

private:
  ::sentry_interface::action::ActionControl_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sentry_interface::action::ActionControl_Goal>()
{
  return sentry_interface::action::builder::Init_ActionControl_Goal_chassic_target();
}

}  // namespace sentry_interface


namespace sentry_interface
{

namespace action
{

namespace builder
{

class Init_ActionControl_Result_success
{
public:
  Init_ActionControl_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::sentry_interface::action::ActionControl_Result success(::sentry_interface::action::ActionControl_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sentry_interface::action::ActionControl_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sentry_interface::action::ActionControl_Result>()
{
  return sentry_interface::action::builder::Init_ActionControl_Result_success();
}

}  // namespace sentry_interface


namespace sentry_interface
{

namespace action
{

namespace builder
{

class Init_ActionControl_Feedback_current_status
{
public:
  explicit Init_ActionControl_Feedback_current_status(::sentry_interface::action::ActionControl_Feedback & msg)
  : msg_(msg)
  {}
  ::sentry_interface::action::ActionControl_Feedback current_status(::sentry_interface::action::ActionControl_Feedback::_current_status_type arg)
  {
    msg_.current_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sentry_interface::action::ActionControl_Feedback msg_;
};

class Init_ActionControl_Feedback_current_pose
{
public:
  Init_ActionControl_Feedback_current_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActionControl_Feedback_current_status current_pose(::sentry_interface::action::ActionControl_Feedback::_current_pose_type arg)
  {
    msg_.current_pose = std::move(arg);
    return Init_ActionControl_Feedback_current_status(msg_);
  }

private:
  ::sentry_interface::action::ActionControl_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sentry_interface::action::ActionControl_Feedback>()
{
  return sentry_interface::action::builder::Init_ActionControl_Feedback_current_pose();
}

}  // namespace sentry_interface


namespace sentry_interface
{

namespace action
{

namespace builder
{

class Init_ActionControl_SendGoal_Request_goal
{
public:
  explicit Init_ActionControl_SendGoal_Request_goal(::sentry_interface::action::ActionControl_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::sentry_interface::action::ActionControl_SendGoal_Request goal(::sentry_interface::action::ActionControl_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sentry_interface::action::ActionControl_SendGoal_Request msg_;
};

class Init_ActionControl_SendGoal_Request_goal_id
{
public:
  Init_ActionControl_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActionControl_SendGoal_Request_goal goal_id(::sentry_interface::action::ActionControl_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ActionControl_SendGoal_Request_goal(msg_);
  }

private:
  ::sentry_interface::action::ActionControl_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sentry_interface::action::ActionControl_SendGoal_Request>()
{
  return sentry_interface::action::builder::Init_ActionControl_SendGoal_Request_goal_id();
}

}  // namespace sentry_interface


namespace sentry_interface
{

namespace action
{

namespace builder
{

class Init_ActionControl_SendGoal_Response_stamp
{
public:
  explicit Init_ActionControl_SendGoal_Response_stamp(::sentry_interface::action::ActionControl_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::sentry_interface::action::ActionControl_SendGoal_Response stamp(::sentry_interface::action::ActionControl_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sentry_interface::action::ActionControl_SendGoal_Response msg_;
};

class Init_ActionControl_SendGoal_Response_accepted
{
public:
  Init_ActionControl_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActionControl_SendGoal_Response_stamp accepted(::sentry_interface::action::ActionControl_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_ActionControl_SendGoal_Response_stamp(msg_);
  }

private:
  ::sentry_interface::action::ActionControl_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sentry_interface::action::ActionControl_SendGoal_Response>()
{
  return sentry_interface::action::builder::Init_ActionControl_SendGoal_Response_accepted();
}

}  // namespace sentry_interface


namespace sentry_interface
{

namespace action
{

namespace builder
{

class Init_ActionControl_GetResult_Request_goal_id
{
public:
  Init_ActionControl_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::sentry_interface::action::ActionControl_GetResult_Request goal_id(::sentry_interface::action::ActionControl_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sentry_interface::action::ActionControl_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sentry_interface::action::ActionControl_GetResult_Request>()
{
  return sentry_interface::action::builder::Init_ActionControl_GetResult_Request_goal_id();
}

}  // namespace sentry_interface


namespace sentry_interface
{

namespace action
{

namespace builder
{

class Init_ActionControl_GetResult_Response_result
{
public:
  explicit Init_ActionControl_GetResult_Response_result(::sentry_interface::action::ActionControl_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::sentry_interface::action::ActionControl_GetResult_Response result(::sentry_interface::action::ActionControl_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sentry_interface::action::ActionControl_GetResult_Response msg_;
};

class Init_ActionControl_GetResult_Response_status
{
public:
  Init_ActionControl_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActionControl_GetResult_Response_result status(::sentry_interface::action::ActionControl_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ActionControl_GetResult_Response_result(msg_);
  }

private:
  ::sentry_interface::action::ActionControl_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sentry_interface::action::ActionControl_GetResult_Response>()
{
  return sentry_interface::action::builder::Init_ActionControl_GetResult_Response_status();
}

}  // namespace sentry_interface


namespace sentry_interface
{

namespace action
{

namespace builder
{

class Init_ActionControl_FeedbackMessage_feedback
{
public:
  explicit Init_ActionControl_FeedbackMessage_feedback(::sentry_interface::action::ActionControl_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::sentry_interface::action::ActionControl_FeedbackMessage feedback(::sentry_interface::action::ActionControl_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sentry_interface::action::ActionControl_FeedbackMessage msg_;
};

class Init_ActionControl_FeedbackMessage_goal_id
{
public:
  Init_ActionControl_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActionControl_FeedbackMessage_feedback goal_id(::sentry_interface::action::ActionControl_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ActionControl_FeedbackMessage_feedback(msg_);
  }

private:
  ::sentry_interface::action::ActionControl_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::sentry_interface::action::ActionControl_FeedbackMessage>()
{
  return sentry_interface::action::builder::Init_ActionControl_FeedbackMessage_goal_id();
}

}  // namespace sentry_interface

#endif  // SENTRY_INTERFACE__ACTION__DETAIL__ACTION_CONTROL__BUILDER_HPP_
