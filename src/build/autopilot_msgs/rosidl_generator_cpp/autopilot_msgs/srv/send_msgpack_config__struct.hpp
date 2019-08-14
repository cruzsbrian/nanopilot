// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autopilot_msgs:srv/SendMsgpackConfig.idl
// generated code does not contain a copyright notice

#ifndef AUTOPILOT_MSGS__SRV__SEND_MSGPACK_CONFIG__STRUCT_HPP_
#define AUTOPILOT_MSGS__SRV__SEND_MSGPACK_CONFIG__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

// Protect against ERROR being predefined on Windows, in case somebody defines a
// constant by that name.
#if defined(_WIN32)
  #if defined(ERROR)
    #undef ERROR
  #endif
  #if defined(NO_ERROR)
    #undef NO_ERROR
  #endif
#endif

#ifndef _WIN32
# define DEPRECATED__autopilot_msgs__srv__SendMsgpackConfig_Request __attribute__((deprecated))
#else
# define DEPRECATED__autopilot_msgs__srv__SendMsgpackConfig_Request __declspec(deprecated)
#endif

namespace autopilot_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SendMsgpackConfig_Request_
{
  using Type = SendMsgpackConfig_Request_<ContainerAllocator>;

  explicit SendMsgpackConfig_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit SendMsgpackConfig_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _msgpack_config_type =
    std::vector<unsigned char, typename ContainerAllocator::template rebind<unsigned char>::other>;
  _msgpack_config_type msgpack_config;

  // setters for named parameter idiom
  Type & set__msgpack_config(
    const std::vector<unsigned char, typename ContainerAllocator::template rebind<unsigned char>::other> & _arg)
  {
    this->msgpack_config = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autopilot_msgs::srv::SendMsgpackConfig_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const autopilot_msgs::srv::SendMsgpackConfig_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autopilot_msgs::srv::SendMsgpackConfig_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autopilot_msgs::srv::SendMsgpackConfig_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autopilot_msgs::srv::SendMsgpackConfig_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autopilot_msgs::srv::SendMsgpackConfig_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autopilot_msgs::srv::SendMsgpackConfig_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autopilot_msgs::srv::SendMsgpackConfig_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autopilot_msgs::srv::SendMsgpackConfig_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autopilot_msgs::srv::SendMsgpackConfig_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autopilot_msgs__srv__SendMsgpackConfig_Request
    std::shared_ptr<autopilot_msgs::srv::SendMsgpackConfig_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autopilot_msgs__srv__SendMsgpackConfig_Request
    std::shared_ptr<autopilot_msgs::srv::SendMsgpackConfig_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SendMsgpackConfig_Request_ & other) const
  {
    if (this->msgpack_config != other.msgpack_config) {
      return false;
    }
    return true;
  }
  bool operator!=(const SendMsgpackConfig_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SendMsgpackConfig_Request_

// alias to use template instance with default allocator
using SendMsgpackConfig_Request =
  autopilot_msgs::srv::SendMsgpackConfig_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace autopilot_msgs

// Protect against ERROR being predefined on Windows, in case somebody defines a
// constant by that name.
#if defined(_WIN32)
  #if defined(ERROR)
    #undef ERROR
  #endif
  #if defined(NO_ERROR)
    #undef NO_ERROR
  #endif
#endif

#ifndef _WIN32
# define DEPRECATED__autopilot_msgs__srv__SendMsgpackConfig_Response __attribute__((deprecated))
#else
# define DEPRECATED__autopilot_msgs__srv__SendMsgpackConfig_Response __declspec(deprecated)
#endif

namespace autopilot_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SendMsgpackConfig_Response_
{
  using Type = SendMsgpackConfig_Response_<ContainerAllocator>;

  explicit SendMsgpackConfig_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->error_message = "";
    }
  }

  explicit SendMsgpackConfig_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : error_message(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->error_message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _error_message_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _error_message_type error_message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__error_message(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->error_message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autopilot_msgs::srv::SendMsgpackConfig_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const autopilot_msgs::srv::SendMsgpackConfig_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autopilot_msgs::srv::SendMsgpackConfig_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autopilot_msgs::srv::SendMsgpackConfig_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autopilot_msgs::srv::SendMsgpackConfig_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autopilot_msgs::srv::SendMsgpackConfig_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autopilot_msgs::srv::SendMsgpackConfig_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autopilot_msgs::srv::SendMsgpackConfig_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autopilot_msgs::srv::SendMsgpackConfig_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autopilot_msgs::srv::SendMsgpackConfig_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autopilot_msgs__srv__SendMsgpackConfig_Response
    std::shared_ptr<autopilot_msgs::srv::SendMsgpackConfig_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autopilot_msgs__srv__SendMsgpackConfig_Response
    std::shared_ptr<autopilot_msgs::srv::SendMsgpackConfig_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SendMsgpackConfig_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->error_message != other.error_message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SendMsgpackConfig_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SendMsgpackConfig_Response_

// alias to use template instance with default allocator
using SendMsgpackConfig_Response =
  autopilot_msgs::srv::SendMsgpackConfig_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace autopilot_msgs

namespace autopilot_msgs
{

namespace srv
{

struct SendMsgpackConfig
{
  using Request = autopilot_msgs::srv::SendMsgpackConfig_Request;
  using Response = autopilot_msgs::srv::SendMsgpackConfig_Response;
};

}  // namespace srv

}  // namespace autopilot_msgs

#endif  // AUTOPILOT_MSGS__SRV__SEND_MSGPACK_CONFIG__STRUCT_HPP_
