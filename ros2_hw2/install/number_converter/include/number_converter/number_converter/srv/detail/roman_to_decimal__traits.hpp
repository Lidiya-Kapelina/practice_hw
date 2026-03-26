// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from number_converter:srv/RomanToDecimal.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "number_converter/srv/roman_to_decimal.hpp"


#ifndef NUMBER_CONVERTER__SRV__DETAIL__ROMAN_TO_DECIMAL__TRAITS_HPP_
#define NUMBER_CONVERTER__SRV__DETAIL__ROMAN_TO_DECIMAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "number_converter/srv/detail/roman_to_decimal__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace number_converter
{

namespace srv
{

inline void to_flow_style_yaml(
  const RomanToDecimal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: roman_numeral
  {
    out << "roman_numeral: ";
    rosidl_generator_traits::value_to_yaml(msg.roman_numeral, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RomanToDecimal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: roman_numeral
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roman_numeral: ";
    rosidl_generator_traits::value_to_yaml(msg.roman_numeral, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RomanToDecimal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace number_converter

namespace rosidl_generator_traits
{

[[deprecated("use number_converter::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const number_converter::srv::RomanToDecimal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  number_converter::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use number_converter::srv::to_yaml() instead")]]
inline std::string to_yaml(const number_converter::srv::RomanToDecimal_Request & msg)
{
  return number_converter::srv::to_yaml(msg);
}

template<>
inline const char * data_type<number_converter::srv::RomanToDecimal_Request>()
{
  return "number_converter::srv::RomanToDecimal_Request";
}

template<>
inline const char * name<number_converter::srv::RomanToDecimal_Request>()
{
  return "number_converter/srv/RomanToDecimal_Request";
}

template<>
struct has_fixed_size<number_converter::srv::RomanToDecimal_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<number_converter::srv::RomanToDecimal_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<number_converter::srv::RomanToDecimal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace number_converter
{

namespace srv
{

inline void to_flow_style_yaml(
  const RomanToDecimal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: decimal_value
  {
    out << "decimal_value: ";
    rosidl_generator_traits::value_to_yaml(msg.decimal_value, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RomanToDecimal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: decimal_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "decimal_value: ";
    rosidl_generator_traits::value_to_yaml(msg.decimal_value, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RomanToDecimal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace number_converter

namespace rosidl_generator_traits
{

[[deprecated("use number_converter::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const number_converter::srv::RomanToDecimal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  number_converter::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use number_converter::srv::to_yaml() instead")]]
inline std::string to_yaml(const number_converter::srv::RomanToDecimal_Response & msg)
{
  return number_converter::srv::to_yaml(msg);
}

template<>
inline const char * data_type<number_converter::srv::RomanToDecimal_Response>()
{
  return "number_converter::srv::RomanToDecimal_Response";
}

template<>
inline const char * name<number_converter::srv::RomanToDecimal_Response>()
{
  return "number_converter/srv/RomanToDecimal_Response";
}

template<>
struct has_fixed_size<number_converter::srv::RomanToDecimal_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<number_converter::srv::RomanToDecimal_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<number_converter::srv::RomanToDecimal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace number_converter
{

namespace srv
{

inline void to_flow_style_yaml(
  const RomanToDecimal_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RomanToDecimal_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RomanToDecimal_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace number_converter

namespace rosidl_generator_traits
{

[[deprecated("use number_converter::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const number_converter::srv::RomanToDecimal_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  number_converter::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use number_converter::srv::to_yaml() instead")]]
inline std::string to_yaml(const number_converter::srv::RomanToDecimal_Event & msg)
{
  return number_converter::srv::to_yaml(msg);
}

template<>
inline const char * data_type<number_converter::srv::RomanToDecimal_Event>()
{
  return "number_converter::srv::RomanToDecimal_Event";
}

template<>
inline const char * name<number_converter::srv::RomanToDecimal_Event>()
{
  return "number_converter/srv/RomanToDecimal_Event";
}

template<>
struct has_fixed_size<number_converter::srv::RomanToDecimal_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<number_converter::srv::RomanToDecimal_Event>
  : std::integral_constant<bool, has_bounded_size<number_converter::srv::RomanToDecimal_Request>::value && has_bounded_size<number_converter::srv::RomanToDecimal_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<number_converter::srv::RomanToDecimal_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<number_converter::srv::RomanToDecimal>()
{
  return "number_converter::srv::RomanToDecimal";
}

template<>
inline const char * name<number_converter::srv::RomanToDecimal>()
{
  return "number_converter/srv/RomanToDecimal";
}

template<>
struct has_fixed_size<number_converter::srv::RomanToDecimal>
  : std::integral_constant<
    bool,
    has_fixed_size<number_converter::srv::RomanToDecimal_Request>::value &&
    has_fixed_size<number_converter::srv::RomanToDecimal_Response>::value
  >
{
};

template<>
struct has_bounded_size<number_converter::srv::RomanToDecimal>
  : std::integral_constant<
    bool,
    has_bounded_size<number_converter::srv::RomanToDecimal_Request>::value &&
    has_bounded_size<number_converter::srv::RomanToDecimal_Response>::value
  >
{
};

template<>
struct is_service<number_converter::srv::RomanToDecimal>
  : std::true_type
{
};

template<>
struct is_service_request<number_converter::srv::RomanToDecimal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<number_converter::srv::RomanToDecimal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // NUMBER_CONVERTER__SRV__DETAIL__ROMAN_TO_DECIMAL__TRAITS_HPP_
