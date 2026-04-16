// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from number_converter:srv/RomanToDecimal.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "number_converter/srv/roman_to_decimal.hpp"


#ifndef NUMBER_CONVERTER__SRV__DETAIL__ROMAN_TO_DECIMAL__BUILDER_HPP_
#define NUMBER_CONVERTER__SRV__DETAIL__ROMAN_TO_DECIMAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "number_converter/srv/detail/roman_to_decimal__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace number_converter
{

namespace srv
{

namespace builder
{

class Init_RomanToDecimal_Request_roman_numeral
{
public:
  Init_RomanToDecimal_Request_roman_numeral()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::number_converter::srv::RomanToDecimal_Request roman_numeral(::number_converter::srv::RomanToDecimal_Request::_roman_numeral_type arg)
  {
    msg_.roman_numeral = std::move(arg);
    return std::move(msg_);
  }

private:
  ::number_converter::srv::RomanToDecimal_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::number_converter::srv::RomanToDecimal_Request>()
{
  return number_converter::srv::builder::Init_RomanToDecimal_Request_roman_numeral();
}

}  // namespace number_converter


namespace number_converter
{

namespace srv
{

namespace builder
{

class Init_RomanToDecimal_Response_message
{
public:
  explicit Init_RomanToDecimal_Response_message(::number_converter::srv::RomanToDecimal_Response & msg)
  : msg_(msg)
  {}
  ::number_converter::srv::RomanToDecimal_Response message(::number_converter::srv::RomanToDecimal_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::number_converter::srv::RomanToDecimal_Response msg_;
};

class Init_RomanToDecimal_Response_decimal_value
{
public:
  Init_RomanToDecimal_Response_decimal_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RomanToDecimal_Response_message decimal_value(::number_converter::srv::RomanToDecimal_Response::_decimal_value_type arg)
  {
    msg_.decimal_value = std::move(arg);
    return Init_RomanToDecimal_Response_message(msg_);
  }

private:
  ::number_converter::srv::RomanToDecimal_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::number_converter::srv::RomanToDecimal_Response>()
{
  return number_converter::srv::builder::Init_RomanToDecimal_Response_decimal_value();
}

}  // namespace number_converter


namespace number_converter
{

namespace srv
{

namespace builder
{

class Init_RomanToDecimal_Event_response
{
public:
  explicit Init_RomanToDecimal_Event_response(::number_converter::srv::RomanToDecimal_Event & msg)
  : msg_(msg)
  {}
  ::number_converter::srv::RomanToDecimal_Event response(::number_converter::srv::RomanToDecimal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::number_converter::srv::RomanToDecimal_Event msg_;
};

class Init_RomanToDecimal_Event_request
{
public:
  explicit Init_RomanToDecimal_Event_request(::number_converter::srv::RomanToDecimal_Event & msg)
  : msg_(msg)
  {}
  Init_RomanToDecimal_Event_response request(::number_converter::srv::RomanToDecimal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_RomanToDecimal_Event_response(msg_);
  }

private:
  ::number_converter::srv::RomanToDecimal_Event msg_;
};

class Init_RomanToDecimal_Event_info
{
public:
  Init_RomanToDecimal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RomanToDecimal_Event_request info(::number_converter::srv::RomanToDecimal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_RomanToDecimal_Event_request(msg_);
  }

private:
  ::number_converter::srv::RomanToDecimal_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::number_converter::srv::RomanToDecimal_Event>()
{
  return number_converter::srv::builder::Init_RomanToDecimal_Event_info();
}

}  // namespace number_converter

#endif  // NUMBER_CONVERTER__SRV__DETAIL__ROMAN_TO_DECIMAL__BUILDER_HPP_
