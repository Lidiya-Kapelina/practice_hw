// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from number_converter:srv/RomanToDecimal.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "number_converter/srv/roman_to_decimal.hpp"


#ifndef NUMBER_CONVERTER__SRV__DETAIL__ROMAN_TO_DECIMAL__STRUCT_HPP_
#define NUMBER_CONVERTER__SRV__DETAIL__ROMAN_TO_DECIMAL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__number_converter__srv__RomanToDecimal_Request __attribute__((deprecated))
#else
# define DEPRECATED__number_converter__srv__RomanToDecimal_Request __declspec(deprecated)
#endif

namespace number_converter
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RomanToDecimal_Request_
{
  using Type = RomanToDecimal_Request_<ContainerAllocator>;

  explicit RomanToDecimal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->roman_numeral = "";
    }
  }

  explicit RomanToDecimal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : roman_numeral(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->roman_numeral = "";
    }
  }

  // field types and members
  using _roman_numeral_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _roman_numeral_type roman_numeral;

  // setters for named parameter idiom
  Type & set__roman_numeral(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->roman_numeral = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    number_converter::srv::RomanToDecimal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const number_converter::srv::RomanToDecimal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<number_converter::srv::RomanToDecimal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<number_converter::srv::RomanToDecimal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      number_converter::srv::RomanToDecimal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<number_converter::srv::RomanToDecimal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      number_converter::srv::RomanToDecimal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<number_converter::srv::RomanToDecimal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<number_converter::srv::RomanToDecimal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<number_converter::srv::RomanToDecimal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__number_converter__srv__RomanToDecimal_Request
    std::shared_ptr<number_converter::srv::RomanToDecimal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__number_converter__srv__RomanToDecimal_Request
    std::shared_ptr<number_converter::srv::RomanToDecimal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RomanToDecimal_Request_ & other) const
  {
    if (this->roman_numeral != other.roman_numeral) {
      return false;
    }
    return true;
  }
  bool operator!=(const RomanToDecimal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RomanToDecimal_Request_

// alias to use template instance with default allocator
using RomanToDecimal_Request =
  number_converter::srv::RomanToDecimal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace number_converter


#ifndef _WIN32
# define DEPRECATED__number_converter__srv__RomanToDecimal_Response __attribute__((deprecated))
#else
# define DEPRECATED__number_converter__srv__RomanToDecimal_Response __declspec(deprecated)
#endif

namespace number_converter
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RomanToDecimal_Response_
{
  using Type = RomanToDecimal_Response_<ContainerAllocator>;

  explicit RomanToDecimal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->decimal_value = 0l;
      this->message = "";
    }
  }

  explicit RomanToDecimal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->decimal_value = 0l;
      this->message = "";
    }
  }

  // field types and members
  using _decimal_value_type =
    int32_t;
  _decimal_value_type decimal_value;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__decimal_value(
    const int32_t & _arg)
  {
    this->decimal_value = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    number_converter::srv::RomanToDecimal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const number_converter::srv::RomanToDecimal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<number_converter::srv::RomanToDecimal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<number_converter::srv::RomanToDecimal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      number_converter::srv::RomanToDecimal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<number_converter::srv::RomanToDecimal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      number_converter::srv::RomanToDecimal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<number_converter::srv::RomanToDecimal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<number_converter::srv::RomanToDecimal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<number_converter::srv::RomanToDecimal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__number_converter__srv__RomanToDecimal_Response
    std::shared_ptr<number_converter::srv::RomanToDecimal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__number_converter__srv__RomanToDecimal_Response
    std::shared_ptr<number_converter::srv::RomanToDecimal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RomanToDecimal_Response_ & other) const
  {
    if (this->decimal_value != other.decimal_value) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const RomanToDecimal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RomanToDecimal_Response_

// alias to use template instance with default allocator
using RomanToDecimal_Response =
  number_converter::srv::RomanToDecimal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace number_converter


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__number_converter__srv__RomanToDecimal_Event __attribute__((deprecated))
#else
# define DEPRECATED__number_converter__srv__RomanToDecimal_Event __declspec(deprecated)
#endif

namespace number_converter
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RomanToDecimal_Event_
{
  using Type = RomanToDecimal_Event_<ContainerAllocator>;

  explicit RomanToDecimal_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit RomanToDecimal_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<number_converter::srv::RomanToDecimal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<number_converter::srv::RomanToDecimal_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<number_converter::srv::RomanToDecimal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<number_converter::srv::RomanToDecimal_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<number_converter::srv::RomanToDecimal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<number_converter::srv::RomanToDecimal_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<number_converter::srv::RomanToDecimal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<number_converter::srv::RomanToDecimal_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    number_converter::srv::RomanToDecimal_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const number_converter::srv::RomanToDecimal_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<number_converter::srv::RomanToDecimal_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<number_converter::srv::RomanToDecimal_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      number_converter::srv::RomanToDecimal_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<number_converter::srv::RomanToDecimal_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      number_converter::srv::RomanToDecimal_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<number_converter::srv::RomanToDecimal_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<number_converter::srv::RomanToDecimal_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<number_converter::srv::RomanToDecimal_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__number_converter__srv__RomanToDecimal_Event
    std::shared_ptr<number_converter::srv::RomanToDecimal_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__number_converter__srv__RomanToDecimal_Event
    std::shared_ptr<number_converter::srv::RomanToDecimal_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RomanToDecimal_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const RomanToDecimal_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RomanToDecimal_Event_

// alias to use template instance with default allocator
using RomanToDecimal_Event =
  number_converter::srv::RomanToDecimal_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace number_converter

namespace number_converter
{

namespace srv
{

struct RomanToDecimal
{
  using Request = number_converter::srv::RomanToDecimal_Request;
  using Response = number_converter::srv::RomanToDecimal_Response;
  using Event = number_converter::srv::RomanToDecimal_Event;
};

}  // namespace srv

}  // namespace number_converter

#endif  // NUMBER_CONVERTER__SRV__DETAIL__ROMAN_TO_DECIMAL__STRUCT_HPP_
