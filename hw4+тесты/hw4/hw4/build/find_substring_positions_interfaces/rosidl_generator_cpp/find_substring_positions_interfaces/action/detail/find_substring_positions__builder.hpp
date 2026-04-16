// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from find_substring_positions_interfaces:action/FindSubstringPositions.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "find_substring_positions_interfaces/action/find_substring_positions.hpp"


#ifndef FIND_SUBSTRING_POSITIONS_INTERFACES__ACTION__DETAIL__FIND_SUBSTRING_POSITIONS__BUILDER_HPP_
#define FIND_SUBSTRING_POSITIONS_INTERFACES__ACTION__DETAIL__FIND_SUBSTRING_POSITIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "find_substring_positions_interfaces/action/detail/find_substring_positions__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace find_substring_positions_interfaces
{

namespace action
{

namespace builder
{

class Init_FindSubstringPositions_Goal_substring
{
public:
  explicit Init_FindSubstringPositions_Goal_substring(::find_substring_positions_interfaces::action::FindSubstringPositions_Goal & msg)
  : msg_(msg)
  {}
  ::find_substring_positions_interfaces::action::FindSubstringPositions_Goal substring(::find_substring_positions_interfaces::action::FindSubstringPositions_Goal::_substring_type arg)
  {
    msg_.substring = std::move(arg);
    return std::move(msg_);
  }

private:
  ::find_substring_positions_interfaces::action::FindSubstringPositions_Goal msg_;
};

class Init_FindSubstringPositions_Goal_text
{
public:
  Init_FindSubstringPositions_Goal_text()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FindSubstringPositions_Goal_substring text(::find_substring_positions_interfaces::action::FindSubstringPositions_Goal::_text_type arg)
  {
    msg_.text = std::move(arg);
    return Init_FindSubstringPositions_Goal_substring(msg_);
  }

private:
  ::find_substring_positions_interfaces::action::FindSubstringPositions_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::find_substring_positions_interfaces::action::FindSubstringPositions_Goal>()
{
  return find_substring_positions_interfaces::action::builder::Init_FindSubstringPositions_Goal_text();
}

}  // namespace find_substring_positions_interfaces


namespace find_substring_positions_interfaces
{

namespace action
{

namespace builder
{

class Init_FindSubstringPositions_Result_positions
{
public:
  Init_FindSubstringPositions_Result_positions()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::find_substring_positions_interfaces::action::FindSubstringPositions_Result positions(::find_substring_positions_interfaces::action::FindSubstringPositions_Result::_positions_type arg)
  {
    msg_.positions = std::move(arg);
    return std::move(msg_);
  }

private:
  ::find_substring_positions_interfaces::action::FindSubstringPositions_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::find_substring_positions_interfaces::action::FindSubstringPositions_Result>()
{
  return find_substring_positions_interfaces::action::builder::Init_FindSubstringPositions_Result_positions();
}

}  // namespace find_substring_positions_interfaces


namespace find_substring_positions_interfaces
{

namespace action
{

namespace builder
{

class Init_FindSubstringPositions_Feedback_position
{
public:
  Init_FindSubstringPositions_Feedback_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::find_substring_positions_interfaces::action::FindSubstringPositions_Feedback position(::find_substring_positions_interfaces::action::FindSubstringPositions_Feedback::_position_type arg)
  {
    msg_.position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::find_substring_positions_interfaces::action::FindSubstringPositions_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::find_substring_positions_interfaces::action::FindSubstringPositions_Feedback>()
{
  return find_substring_positions_interfaces::action::builder::Init_FindSubstringPositions_Feedback_position();
}

}  // namespace find_substring_positions_interfaces


namespace find_substring_positions_interfaces
{

namespace action
{

namespace builder
{

class Init_FindSubstringPositions_SendGoal_Request_goal
{
public:
  explicit Init_FindSubstringPositions_SendGoal_Request_goal(::find_substring_positions_interfaces::action::FindSubstringPositions_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::find_substring_positions_interfaces::action::FindSubstringPositions_SendGoal_Request goal(::find_substring_positions_interfaces::action::FindSubstringPositions_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::find_substring_positions_interfaces::action::FindSubstringPositions_SendGoal_Request msg_;
};

class Init_FindSubstringPositions_SendGoal_Request_goal_id
{
public:
  Init_FindSubstringPositions_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FindSubstringPositions_SendGoal_Request_goal goal_id(::find_substring_positions_interfaces::action::FindSubstringPositions_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_FindSubstringPositions_SendGoal_Request_goal(msg_);
  }

private:
  ::find_substring_positions_interfaces::action::FindSubstringPositions_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::find_substring_positions_interfaces::action::FindSubstringPositions_SendGoal_Request>()
{
  return find_substring_positions_interfaces::action::builder::Init_FindSubstringPositions_SendGoal_Request_goal_id();
}

}  // namespace find_substring_positions_interfaces


namespace find_substring_positions_interfaces
{

namespace action
{

namespace builder
{

class Init_FindSubstringPositions_SendGoal_Response_stamp
{
public:
  explicit Init_FindSubstringPositions_SendGoal_Response_stamp(::find_substring_positions_interfaces::action::FindSubstringPositions_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::find_substring_positions_interfaces::action::FindSubstringPositions_SendGoal_Response stamp(::find_substring_positions_interfaces::action::FindSubstringPositions_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::find_substring_positions_interfaces::action::FindSubstringPositions_SendGoal_Response msg_;
};

class Init_FindSubstringPositions_SendGoal_Response_accepted
{
public:
  Init_FindSubstringPositions_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FindSubstringPositions_SendGoal_Response_stamp accepted(::find_substring_positions_interfaces::action::FindSubstringPositions_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_FindSubstringPositions_SendGoal_Response_stamp(msg_);
  }

private:
  ::find_substring_positions_interfaces::action::FindSubstringPositions_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::find_substring_positions_interfaces::action::FindSubstringPositions_SendGoal_Response>()
{
  return find_substring_positions_interfaces::action::builder::Init_FindSubstringPositions_SendGoal_Response_accepted();
}

}  // namespace find_substring_positions_interfaces


namespace find_substring_positions_interfaces
{

namespace action
{

namespace builder
{

class Init_FindSubstringPositions_SendGoal_Event_response
{
public:
  explicit Init_FindSubstringPositions_SendGoal_Event_response(::find_substring_positions_interfaces::action::FindSubstringPositions_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::find_substring_positions_interfaces::action::FindSubstringPositions_SendGoal_Event response(::find_substring_positions_interfaces::action::FindSubstringPositions_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::find_substring_positions_interfaces::action::FindSubstringPositions_SendGoal_Event msg_;
};

class Init_FindSubstringPositions_SendGoal_Event_request
{
public:
  explicit Init_FindSubstringPositions_SendGoal_Event_request(::find_substring_positions_interfaces::action::FindSubstringPositions_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_FindSubstringPositions_SendGoal_Event_response request(::find_substring_positions_interfaces::action::FindSubstringPositions_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_FindSubstringPositions_SendGoal_Event_response(msg_);
  }

private:
  ::find_substring_positions_interfaces::action::FindSubstringPositions_SendGoal_Event msg_;
};

class Init_FindSubstringPositions_SendGoal_Event_info
{
public:
  Init_FindSubstringPositions_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FindSubstringPositions_SendGoal_Event_request info(::find_substring_positions_interfaces::action::FindSubstringPositions_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_FindSubstringPositions_SendGoal_Event_request(msg_);
  }

private:
  ::find_substring_positions_interfaces::action::FindSubstringPositions_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::find_substring_positions_interfaces::action::FindSubstringPositions_SendGoal_Event>()
{
  return find_substring_positions_interfaces::action::builder::Init_FindSubstringPositions_SendGoal_Event_info();
}

}  // namespace find_substring_positions_interfaces


namespace find_substring_positions_interfaces
{

namespace action
{

namespace builder
{

class Init_FindSubstringPositions_GetResult_Request_goal_id
{
public:
  Init_FindSubstringPositions_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::find_substring_positions_interfaces::action::FindSubstringPositions_GetResult_Request goal_id(::find_substring_positions_interfaces::action::FindSubstringPositions_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::find_substring_positions_interfaces::action::FindSubstringPositions_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::find_substring_positions_interfaces::action::FindSubstringPositions_GetResult_Request>()
{
  return find_substring_positions_interfaces::action::builder::Init_FindSubstringPositions_GetResult_Request_goal_id();
}

}  // namespace find_substring_positions_interfaces


namespace find_substring_positions_interfaces
{

namespace action
{

namespace builder
{

class Init_FindSubstringPositions_GetResult_Response_result
{
public:
  explicit Init_FindSubstringPositions_GetResult_Response_result(::find_substring_positions_interfaces::action::FindSubstringPositions_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::find_substring_positions_interfaces::action::FindSubstringPositions_GetResult_Response result(::find_substring_positions_interfaces::action::FindSubstringPositions_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::find_substring_positions_interfaces::action::FindSubstringPositions_GetResult_Response msg_;
};

class Init_FindSubstringPositions_GetResult_Response_status
{
public:
  Init_FindSubstringPositions_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FindSubstringPositions_GetResult_Response_result status(::find_substring_positions_interfaces::action::FindSubstringPositions_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_FindSubstringPositions_GetResult_Response_result(msg_);
  }

private:
  ::find_substring_positions_interfaces::action::FindSubstringPositions_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::find_substring_positions_interfaces::action::FindSubstringPositions_GetResult_Response>()
{
  return find_substring_positions_interfaces::action::builder::Init_FindSubstringPositions_GetResult_Response_status();
}

}  // namespace find_substring_positions_interfaces


namespace find_substring_positions_interfaces
{

namespace action
{

namespace builder
{

class Init_FindSubstringPositions_GetResult_Event_response
{
public:
  explicit Init_FindSubstringPositions_GetResult_Event_response(::find_substring_positions_interfaces::action::FindSubstringPositions_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::find_substring_positions_interfaces::action::FindSubstringPositions_GetResult_Event response(::find_substring_positions_interfaces::action::FindSubstringPositions_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::find_substring_positions_interfaces::action::FindSubstringPositions_GetResult_Event msg_;
};

class Init_FindSubstringPositions_GetResult_Event_request
{
public:
  explicit Init_FindSubstringPositions_GetResult_Event_request(::find_substring_positions_interfaces::action::FindSubstringPositions_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_FindSubstringPositions_GetResult_Event_response request(::find_substring_positions_interfaces::action::FindSubstringPositions_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_FindSubstringPositions_GetResult_Event_response(msg_);
  }

private:
  ::find_substring_positions_interfaces::action::FindSubstringPositions_GetResult_Event msg_;
};

class Init_FindSubstringPositions_GetResult_Event_info
{
public:
  Init_FindSubstringPositions_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FindSubstringPositions_GetResult_Event_request info(::find_substring_positions_interfaces::action::FindSubstringPositions_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_FindSubstringPositions_GetResult_Event_request(msg_);
  }

private:
  ::find_substring_positions_interfaces::action::FindSubstringPositions_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::find_substring_positions_interfaces::action::FindSubstringPositions_GetResult_Event>()
{
  return find_substring_positions_interfaces::action::builder::Init_FindSubstringPositions_GetResult_Event_info();
}

}  // namespace find_substring_positions_interfaces


namespace find_substring_positions_interfaces
{

namespace action
{

namespace builder
{

class Init_FindSubstringPositions_FeedbackMessage_feedback
{
public:
  explicit Init_FindSubstringPositions_FeedbackMessage_feedback(::find_substring_positions_interfaces::action::FindSubstringPositions_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::find_substring_positions_interfaces::action::FindSubstringPositions_FeedbackMessage feedback(::find_substring_positions_interfaces::action::FindSubstringPositions_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::find_substring_positions_interfaces::action::FindSubstringPositions_FeedbackMessage msg_;
};

class Init_FindSubstringPositions_FeedbackMessage_goal_id
{
public:
  Init_FindSubstringPositions_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FindSubstringPositions_FeedbackMessage_feedback goal_id(::find_substring_positions_interfaces::action::FindSubstringPositions_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_FindSubstringPositions_FeedbackMessage_feedback(msg_);
  }

private:
  ::find_substring_positions_interfaces::action::FindSubstringPositions_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::find_substring_positions_interfaces::action::FindSubstringPositions_FeedbackMessage>()
{
  return find_substring_positions_interfaces::action::builder::Init_FindSubstringPositions_FeedbackMessage_goal_id();
}

}  // namespace find_substring_positions_interfaces

#endif  // FIND_SUBSTRING_POSITIONS_INTERFACES__ACTION__DETAIL__FIND_SUBSTRING_POSITIONS__BUILDER_HPP_
