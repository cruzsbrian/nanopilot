// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autopilot_msgs:msg/AttitudeTrajectorySetpoint.idl
// generated code does not contain a copyright notice

#ifndef AUTOPILOT_MSGS__MSG__ATTITUDE_TRAJECTORY_SETPOINT__STRUCT_HPP_
#define AUTOPILOT_MSGS__MSG__ATTITUDE_TRAJECTORY_SETPOINT__STRUCT_HPP_

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
// Member 'orientation'
#include "geometry_msgs/msg/quaternion__struct.hpp"
// Member 'angular_rate'
// Member 'angular_acceleration'
// Member 'force'
#include "geometry_msgs/msg/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autopilot_msgs__msg__AttitudeTrajectorySetpoint __attribute__((deprecated))
#else
# define DEPRECATED__autopilot_msgs__msg__AttitudeTrajectorySetpoint __declspec(deprecated)
#endif

namespace autopilot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AttitudeTrajectorySetpoint_
{
  using Type = AttitudeTrajectorySetpoint_<ContainerAllocator>;

  explicit AttitudeTrajectorySetpoint_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : header(_init),
    orientation(_init),
    angular_rate(_init),
    angular_acceleration(_init),
    force(_init)
  {
    (void)_init;
  }

  explicit AttitudeTrajectorySetpoint_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    orientation(_alloc, _init),
    angular_rate(_alloc, _init),
    angular_acceleration(_alloc, _init),
    force(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _orientation_type =
    geometry_msgs::msg::Quaternion_<ContainerAllocator>;
  _orientation_type orientation;
  using _angular_rate_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _angular_rate_type angular_rate;
  using _angular_acceleration_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _angular_acceleration_type angular_acceleration;
  using _force_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _force_type force;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__orientation(
    const geometry_msgs::msg::Quaternion_<ContainerAllocator> & _arg)
  {
    this->orientation = _arg;
    return *this;
  }
  Type & set__angular_rate(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->angular_rate = _arg;
    return *this;
  }
  Type & set__angular_acceleration(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->angular_acceleration = _arg;
    return *this;
  }
  Type & set__force(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->force = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autopilot_msgs::msg::AttitudeTrajectorySetpoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const autopilot_msgs::msg::AttitudeTrajectorySetpoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autopilot_msgs::msg::AttitudeTrajectorySetpoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autopilot_msgs::msg::AttitudeTrajectorySetpoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autopilot_msgs::msg::AttitudeTrajectorySetpoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autopilot_msgs::msg::AttitudeTrajectorySetpoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autopilot_msgs::msg::AttitudeTrajectorySetpoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autopilot_msgs::msg::AttitudeTrajectorySetpoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autopilot_msgs::msg::AttitudeTrajectorySetpoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autopilot_msgs::msg::AttitudeTrajectorySetpoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autopilot_msgs__msg__AttitudeTrajectorySetpoint
    std::shared_ptr<autopilot_msgs::msg::AttitudeTrajectorySetpoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autopilot_msgs__msg__AttitudeTrajectorySetpoint
    std::shared_ptr<autopilot_msgs::msg::AttitudeTrajectorySetpoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AttitudeTrajectorySetpoint_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->orientation != other.orientation) {
      return false;
    }
    if (this->angular_rate != other.angular_rate) {
      return false;
    }
    if (this->angular_acceleration != other.angular_acceleration) {
      return false;
    }
    if (this->force != other.force) {
      return false;
    }
    return true;
  }
  bool operator!=(const AttitudeTrajectorySetpoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AttitudeTrajectorySetpoint_

// alias to use template instance with default allocator
using AttitudeTrajectorySetpoint =
  autopilot_msgs::msg::AttitudeTrajectorySetpoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autopilot_msgs

#endif  // AUTOPILOT_MSGS__MSG__ATTITUDE_TRAJECTORY_SETPOINT__STRUCT_HPP_
