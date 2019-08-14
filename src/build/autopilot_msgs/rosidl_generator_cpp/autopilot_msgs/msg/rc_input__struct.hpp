// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autopilot_msgs:msg/RCInput.idl
// generated code does not contain a copyright notice

#ifndef AUTOPILOT_MSGS__MSG__RC_INPUT__STRUCT_HPP_
#define AUTOPILOT_MSGS__MSG__RC_INPUT__STRUCT_HPP_

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

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autopilot_msgs__msg__RCInput __attribute__((deprecated))
#else
# define DEPRECATED__autopilot_msgs__msg__RCInput __declspec(deprecated)
#endif

namespace autopilot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RCInput_
{
  using Type = RCInput_<ContainerAllocator>;

  explicit RCInput_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->signal = false;
    }
  }

  explicit RCInput_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->signal = false;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _channels_type =
    rosidl_generator_cpp::BoundedVector<float, 16, typename ContainerAllocator::template rebind<float>::other>;
  _channels_type channels;
  using _signal_type =
    bool;
  _signal_type signal;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__channels(
    const rosidl_generator_cpp::BoundedVector<float, 16, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->channels = _arg;
    return *this;
  }
  Type & set__signal(
    const bool & _arg)
  {
    this->signal = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t MAX_NB_CHANNELS =
    16u;

  // pointer types
  using RawPtr =
    autopilot_msgs::msg::RCInput_<ContainerAllocator> *;
  using ConstRawPtr =
    const autopilot_msgs::msg::RCInput_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autopilot_msgs::msg::RCInput_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autopilot_msgs::msg::RCInput_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autopilot_msgs::msg::RCInput_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autopilot_msgs::msg::RCInput_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autopilot_msgs::msg::RCInput_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autopilot_msgs::msg::RCInput_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autopilot_msgs::msg::RCInput_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autopilot_msgs::msg::RCInput_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autopilot_msgs__msg__RCInput
    std::shared_ptr<autopilot_msgs::msg::RCInput_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autopilot_msgs__msg__RCInput
    std::shared_ptr<autopilot_msgs::msg::RCInput_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RCInput_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->channels != other.channels) {
      return false;
    }
    if (this->signal != other.signal) {
      return false;
    }
    return true;
  }
  bool operator!=(const RCInput_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RCInput_

// alias to use template instance with default allocator
using RCInput =
  autopilot_msgs::msg::RCInput_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint32_t RCInput_<ContainerAllocator>::MAX_NB_CHANNELS;

}  // namespace msg

}  // namespace autopilot_msgs

#endif  // AUTOPILOT_MSGS__MSG__RC_INPUT__STRUCT_HPP_
