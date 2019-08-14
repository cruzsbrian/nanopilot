// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autopilot_msgs:msg/ActuatorPositions.idl
// generated code does not contain a copyright notice

#ifndef AUTOPILOT_MSGS__MSG__ACTUATOR_POSITIONS__STRUCT_HPP_
#define AUTOPILOT_MSGS__MSG__ACTUATOR_POSITIONS__STRUCT_HPP_

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
# define DEPRECATED__autopilot_msgs__msg__ActuatorPositions __attribute__((deprecated))
#else
# define DEPRECATED__autopilot_msgs__msg__ActuatorPositions __declspec(deprecated)
#endif

namespace autopilot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ActuatorPositions_
{
  using Type = ActuatorPositions_<ContainerAllocator>;

  explicit ActuatorPositions_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ActuatorPositions_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _actuators_type =
    rosidl_generator_cpp::BoundedVector<float, 16, typename ContainerAllocator::template rebind<float>::other>;
  _actuators_type actuators;

  // setters for named parameter idiom
  Type & set__actuators(
    const rosidl_generator_cpp::BoundedVector<float, 16, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->actuators = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t MAX_NB_ACTUATORS =
    16u;

  // pointer types
  using RawPtr =
    autopilot_msgs::msg::ActuatorPositions_<ContainerAllocator> *;
  using ConstRawPtr =
    const autopilot_msgs::msg::ActuatorPositions_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autopilot_msgs::msg::ActuatorPositions_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autopilot_msgs::msg::ActuatorPositions_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autopilot_msgs::msg::ActuatorPositions_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autopilot_msgs::msg::ActuatorPositions_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autopilot_msgs::msg::ActuatorPositions_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autopilot_msgs::msg::ActuatorPositions_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autopilot_msgs::msg::ActuatorPositions_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autopilot_msgs::msg::ActuatorPositions_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autopilot_msgs__msg__ActuatorPositions
    std::shared_ptr<autopilot_msgs::msg::ActuatorPositions_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autopilot_msgs__msg__ActuatorPositions
    std::shared_ptr<autopilot_msgs::msg::ActuatorPositions_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActuatorPositions_ & other) const
  {
    if (this->actuators != other.actuators) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActuatorPositions_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActuatorPositions_

// alias to use template instance with default allocator
using ActuatorPositions =
  autopilot_msgs::msg::ActuatorPositions_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint32_t ActuatorPositions_<ContainerAllocator>::MAX_NB_ACTUATORS;

}  // namespace msg

}  // namespace autopilot_msgs

#endif  // AUTOPILOT_MSGS__MSG__ACTUATOR_POSITIONS__STRUCT_HPP_
