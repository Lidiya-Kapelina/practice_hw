// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from number_converter:srv/RomanToDecimal.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "number_converter/srv/detail/roman_to_decimal__functions.h"
#include "number_converter/srv/detail/roman_to_decimal__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace number_converter
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _RomanToDecimal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RomanToDecimal_Request_type_support_ids_t;

static const _RomanToDecimal_Request_type_support_ids_t _RomanToDecimal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RomanToDecimal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RomanToDecimal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RomanToDecimal_Request_type_support_symbol_names_t _RomanToDecimal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, number_converter, srv, RomanToDecimal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, number_converter, srv, RomanToDecimal_Request)),
  }
};

typedef struct _RomanToDecimal_Request_type_support_data_t
{
  void * data[2];
} _RomanToDecimal_Request_type_support_data_t;

static _RomanToDecimal_Request_type_support_data_t _RomanToDecimal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RomanToDecimal_Request_message_typesupport_map = {
  2,
  "number_converter",
  &_RomanToDecimal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_RomanToDecimal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_RomanToDecimal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RomanToDecimal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RomanToDecimal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &number_converter__srv__RomanToDecimal_Request__get_type_hash,
  &number_converter__srv__RomanToDecimal_Request__get_type_description,
  &number_converter__srv__RomanToDecimal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace number_converter

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<number_converter::srv::RomanToDecimal_Request>()
{
  return &::number_converter::srv::rosidl_typesupport_cpp::RomanToDecimal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, number_converter, srv, RomanToDecimal_Request)() {
  return get_message_type_support_handle<number_converter::srv::RomanToDecimal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "number_converter/srv/detail/roman_to_decimal__functions.h"
// already included above
// #include "number_converter/srv/detail/roman_to_decimal__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace number_converter
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _RomanToDecimal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RomanToDecimal_Response_type_support_ids_t;

static const _RomanToDecimal_Response_type_support_ids_t _RomanToDecimal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RomanToDecimal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RomanToDecimal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RomanToDecimal_Response_type_support_symbol_names_t _RomanToDecimal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, number_converter, srv, RomanToDecimal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, number_converter, srv, RomanToDecimal_Response)),
  }
};

typedef struct _RomanToDecimal_Response_type_support_data_t
{
  void * data[2];
} _RomanToDecimal_Response_type_support_data_t;

static _RomanToDecimal_Response_type_support_data_t _RomanToDecimal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RomanToDecimal_Response_message_typesupport_map = {
  2,
  "number_converter",
  &_RomanToDecimal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_RomanToDecimal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_RomanToDecimal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RomanToDecimal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RomanToDecimal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &number_converter__srv__RomanToDecimal_Response__get_type_hash,
  &number_converter__srv__RomanToDecimal_Response__get_type_description,
  &number_converter__srv__RomanToDecimal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace number_converter

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<number_converter::srv::RomanToDecimal_Response>()
{
  return &::number_converter::srv::rosidl_typesupport_cpp::RomanToDecimal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, number_converter, srv, RomanToDecimal_Response)() {
  return get_message_type_support_handle<number_converter::srv::RomanToDecimal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "number_converter/srv/detail/roman_to_decimal__functions.h"
// already included above
// #include "number_converter/srv/detail/roman_to_decimal__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace number_converter
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _RomanToDecimal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RomanToDecimal_Event_type_support_ids_t;

static const _RomanToDecimal_Event_type_support_ids_t _RomanToDecimal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RomanToDecimal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RomanToDecimal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RomanToDecimal_Event_type_support_symbol_names_t _RomanToDecimal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, number_converter, srv, RomanToDecimal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, number_converter, srv, RomanToDecimal_Event)),
  }
};

typedef struct _RomanToDecimal_Event_type_support_data_t
{
  void * data[2];
} _RomanToDecimal_Event_type_support_data_t;

static _RomanToDecimal_Event_type_support_data_t _RomanToDecimal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RomanToDecimal_Event_message_typesupport_map = {
  2,
  "number_converter",
  &_RomanToDecimal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_RomanToDecimal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_RomanToDecimal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RomanToDecimal_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RomanToDecimal_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &number_converter__srv__RomanToDecimal_Event__get_type_hash,
  &number_converter__srv__RomanToDecimal_Event__get_type_description,
  &number_converter__srv__RomanToDecimal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace number_converter

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<number_converter::srv::RomanToDecimal_Event>()
{
  return &::number_converter::srv::rosidl_typesupport_cpp::RomanToDecimal_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, number_converter, srv, RomanToDecimal_Event)() {
  return get_message_type_support_handle<number_converter::srv::RomanToDecimal_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "number_converter/srv/detail/roman_to_decimal__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace number_converter
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _RomanToDecimal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RomanToDecimal_type_support_ids_t;

static const _RomanToDecimal_type_support_ids_t _RomanToDecimal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RomanToDecimal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RomanToDecimal_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RomanToDecimal_type_support_symbol_names_t _RomanToDecimal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, number_converter, srv, RomanToDecimal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, number_converter, srv, RomanToDecimal)),
  }
};

typedef struct _RomanToDecimal_type_support_data_t
{
  void * data[2];
} _RomanToDecimal_type_support_data_t;

static _RomanToDecimal_type_support_data_t _RomanToDecimal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RomanToDecimal_service_typesupport_map = {
  2,
  "number_converter",
  &_RomanToDecimal_service_typesupport_ids.typesupport_identifier[0],
  &_RomanToDecimal_service_typesupport_symbol_names.symbol_name[0],
  &_RomanToDecimal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t RomanToDecimal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RomanToDecimal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<number_converter::srv::RomanToDecimal_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<number_converter::srv::RomanToDecimal_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<number_converter::srv::RomanToDecimal_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<number_converter::srv::RomanToDecimal>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<number_converter::srv::RomanToDecimal>,
  &number_converter__srv__RomanToDecimal__get_type_hash,
  &number_converter__srv__RomanToDecimal__get_type_description,
  &number_converter__srv__RomanToDecimal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace number_converter

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<number_converter::srv::RomanToDecimal>()
{
  return &::number_converter::srv::rosidl_typesupport_cpp::RomanToDecimal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, number_converter, srv, RomanToDecimal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<number_converter::srv::RomanToDecimal>();
}

#ifdef __cplusplus
}
#endif
