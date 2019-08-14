// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autopilot_msgs:msg/ActuatorPositionsStamped.idl
// generated code does not contain a copyright notice

#ifndef AUTOPILOT_MSGS__MSG__ACTUATOR_POSITIONS_STAMPED__STRUCT_HPP_
#define AUTOPILOT_MSGS__MSG__ACTUATOR_POSITIONS_STAMPED__STRUCT_HPP_

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
// Member 'actuators'
#include "autopilot_msgs/msg/actuator_positions__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autopilot_msgs__msg__ActuatorPositionsStamped __attribute__((deprecated))
#else
# define DEPRECATED__autopilot_msgs__msg__ActuatorPositionsStamped __declspec(deprecated)
#endif

namespace autopilot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ActuatorPositionsStamped_
{
  using Type = ActuatorPositionsStamped_<ContainerAllocator>;

  explicit ActuatorPositionsStamped_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : stamp(_init),
    actuators(_init)
  {
    (void)_init;
  }

  explicit ActuatorPositionsStamped_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init),
    actuators(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _actuators_type =
    autopilot_msgs::msg::ActuatorPositions_<ContainerAllocator>;
  _actuators_type actuators;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
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
    autopilot_msgs::msg::ActuatorPositionsStamped_<ContainerAllocator> *;
  using ConstRawPtr =
    const autopilot_msgs::msg::ActuatorPositionsStamped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autopilot_msgs::msg::ActuatorPositionsStamped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autopilot_msgs::msg::ActuatorPositionsStamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autopilot_msgs::msg::ActuatorPositionsStamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autopilot_msgs::msg::ActuatorPositionsStamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autopilot_msgs::msg::ActuatorPositionsStamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autopilot_msgs::msg::ActuatorPositionsStamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autopilot_msgs::msg::ActuatorPositionsStamped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autopilot_msgs::msg::ActuatorPositionsStamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autopilot_msgs__msg__ActuatorPositionsStamped
    std::shared_ptr<autopilot_msgs::msg::ActuatorPositionsStamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autopilot_msgs__msg__ActuatorPositionsStamped
    std::shared_ptr<autopilot_msgs::msg::ActuatorPositionsStamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActuatorPositionsStamped_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->actuators != other.actuators) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActuatorPositionsStamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActuatorPositionsStamped_

// alias to use template instance with default allocator
using ActuatorPositionsStamped =
  autopilot_msgs::msg::ActuatorPositionsStamped_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autopilot_msgs

#endif  // AUTOPILOT_MSGS__MSG__ACTUATOR_POSITIONS_STAMPED__STRUCT_HPP_
