// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from number_converter:srv/RomanToDecimal.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "number_converter/srv/roman_to_decimal.h"


#ifndef NUMBER_CONVERTER__SRV__DETAIL__ROMAN_TO_DECIMAL__STRUCT_H_
#define NUMBER_CONVERTER__SRV__DETAIL__ROMAN_TO_DECIMAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'roman_numeral'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/RomanToDecimal in the package number_converter.
typedef struct number_converter__srv__RomanToDecimal_Request
{
  rosidl_runtime_c__String roman_numeral;
} number_converter__srv__RomanToDecimal_Request;

// Struct for a sequence of number_converter__srv__RomanToDecimal_Request.
typedef struct number_converter__srv__RomanToDecimal_Request__Sequence
{
  number_converter__srv__RomanToDecimal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} number_converter__srv__RomanToDecimal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/RomanToDecimal in the package number_converter.
typedef struct number_converter__srv__RomanToDecimal_Response
{
  int32_t decimal_value;
  rosidl_runtime_c__String message;
} number_converter__srv__RomanToDecimal_Response;

// Struct for a sequence of number_converter__srv__RomanToDecimal_Response.
typedef struct number_converter__srv__RomanToDecimal_Response__Sequence
{
  number_converter__srv__RomanToDecimal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} number_converter__srv__RomanToDecimal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  number_converter__srv__RomanToDecimal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  number_converter__srv__RomanToDecimal_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/RomanToDecimal in the package number_converter.
typedef struct number_converter__srv__RomanToDecimal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  number_converter__srv__RomanToDecimal_Request__Sequence request;
  number_converter__srv__RomanToDecimal_Response__Sequence response;
} number_converter__srv__RomanToDecimal_Event;

// Struct for a sequence of number_converter__srv__RomanToDecimal_Event.
typedef struct number_converter__srv__RomanToDecimal_Event__Sequence
{
  number_converter__srv__RomanToDecimal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} number_converter__srv__RomanToDecimal_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NUMBER_CONVERTER__SRV__DETAIL__ROMAN_TO_DECIMAL__STRUCT_H_
