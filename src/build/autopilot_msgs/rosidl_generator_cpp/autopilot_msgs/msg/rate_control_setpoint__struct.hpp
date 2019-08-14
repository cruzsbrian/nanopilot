// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autopilot_msgs:msg/RateControlSetpoint.idl
// generated code does not contain a copyright notice

#ifndef AUTOPILOT_MSGS__MSG__RATE_CONTROL_SETPOINT__STRUCT_HPP_
#define AUTOPILOT_MSGS__MSG__RATE_CONTROL_SETPOINT__STRUCT_HPP_

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
// Member 'header'
#include "std_msgs/msg/header__struct.hpp"
// Member 'rate_control_setpoint'
// Member 'feed_forward_torque'
// Member 'force'
#include "geometry_msgs/msg/vector3__struct.hpp"
// Member 'actuators'
#include "autopilot_msgs/msg/actuator_positions__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autopilot_msgs__msg__RateControlSetpoint __attribute__((deprecated))
#else
# define DEPRECATED__autopilot_msgs__msg__RateControlSetpoint __declspec(deprecated)
#endif

namespace autopilot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RateControlSetpoint_
{
  using Type = RateControlSetpoint_<ContainerAllocator>;

  explicit RateControlSetpoint_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : header(_init),
    rate_control_setpoint(_init),
    feed_forward_torque(_init),
    force(_init),
    actuators(_init)
  {
    (void)_init;
  }

  explicit RateControlSetpoint_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    rate_control_setpoint(_alloc, _init),
    feed_forward_torque(_alloc, _init),
    force(_alloc, _init),
    actuators(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _rate_control_setpoint_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _rate_control_setpoint_type rate_control_setpoint;
  using _feed_forward_torque_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _feed_forward_torque_type feed_forward_torque;
  using _force_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _force_type force;
  using _actuators_type =
    autopilot_msgs::msg::ActuatorPositions_<ContainerAllocator>;
  _actuators_type actuators;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__rate_control_setpoint(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->rate_control_setpoint = _arg;
    return *this;
  }
  Type & set__feed_forward_torque(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->feed_forward_torque = _arg;
    return *this;
  }
  Type & set__force(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->force = _arg;
    return *this;
  }
  Type & set__actuators(
    const autopilot_msgs::msg::ActuatorPositions_<ContainerAllocator> & _arg)
  {
    this->actuators = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autopilot_msgs::msg::RateControlSetpoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const autopilot_msgs::msg::RateControlSetpoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autopilot_msgs::msg::RateControlSetpoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autopilot_msgs::msg::RateControlSetpoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autopilot_msgs::msg::RateControlSetpoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autopilot_msgs::msg::RateControlSetpoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autopilot_msgs::msg::RateControlSetpoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autopilot_msgs::msg::RateControlSetpoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autopilot_msgs::msg::RateControlSetpoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autopilot_msgs::msg::RateControlSetpoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autopilot_msgs__msg__RateControlSetpoint
    std::shared_ptr<autopilot_msgs::msg::RateControlSetpoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autopilot_msgs__msg__RateControlSetpoint
    std::shared_ptr<autopilot_msgs::msg::RateControlSetpoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RateControlSetpoint_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->rate_control_setpoint != other.rate_control_setpoint) {
      return false;
    }
    if (this->feed_forward_torque != other.feed_forward_torque) {
      return false;
    }
    if (this->force != other.force) {
      return false;
    }
    if (this->actuators != other.actuators) {
      return false;
    }
    return true;
  }
  bool operator!=(const RateControlSetpoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RateControlSetpoint_

// alias to use template instance with default allocator
using RateControlSetpoint =
  autopilot_msgs::msg::RateControlSetpoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autopilot_msgs

#endif  // AUTOPILOT_MSGS__MSG__RATE_CONTROL_SETPOINT__STRUCT_HPP_
