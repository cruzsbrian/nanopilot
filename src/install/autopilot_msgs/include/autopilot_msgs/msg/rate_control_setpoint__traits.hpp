// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autopilot_msgs:msg/RateControlSetpoint.idl
// generated code does not contain a copyright notice

#ifndef AUTOPILOT_MSGS__MSG__RATE_CONTROL_SETPOINT__TRAITS_HPP_
#define AUTOPILOT_MSGS__MSG__RATE_CONTROL_SETPOINT__TRAITS_HPP_

#include "autopilot_msgs/msg/rate_control_setpoint__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/header__traits.hpp"
// Member 'rate_control_setpoint'
// Member 'feed_forward_torque'
// Member 'force'
#include "geometry_msgs/msg/vector3__traits.hpp"
// Member 'actuators'
#include "autopilot_msgs/msg/actuator_positions__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autopilot_msgs::msg::RateControlSetpoint>()
{
  return "autopilot_msgs::msg::RateControlSetpoint";
}

template<>
struct has_fixed_size<autopilot_msgs::msg::RateControlSetpoint>
  : std::integral_constant<bool, has_fixed_size<autopilot_msgs::msg::ActuatorPositions>::value && has_fixed_size<geometry_msgs::msg::Vector3>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<autopilot_msgs::msg::RateControlSetpoint>
  : std::integral_constant<bool, has_bounded_size<autopilot_msgs::msg::ActuatorPositions>::value && has_bounded_size<geometry_msgs::msg::Vector3>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

}  // namespace rosidl_generator_traits

#endif  // AUTOPILOT_MSGS__MSG__RATE_CONTROL_SETPOINT__TRAITS_HPP_
