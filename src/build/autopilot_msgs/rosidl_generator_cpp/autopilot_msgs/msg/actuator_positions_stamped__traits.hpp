// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autopilot_msgs:msg/ActuatorPositionsStamped.idl
// generated code does not contain a copyright notice

#ifndef AUTOPILOT_MSGS__MSG__ACTUATOR_POSITIONS_STAMPED__TRAITS_HPP_
#define AUTOPILOT_MSGS__MSG__ACTUATOR_POSITIONS_STAMPED__TRAITS_HPP_

#include "autopilot_msgs/msg/actuator_positions_stamped__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/time__traits.hpp"
// Member 'actuators'
#include "autopilot_msgs/msg/actuator_positions__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autopilot_msgs::msg::ActuatorPositionsStamped>()
{
  return "autopilot_msgs::msg::ActuatorPositionsStamped";
}

template<>
struct has_fixed_size<autopilot_msgs::msg::ActuatorPositionsStamped>
  : std::integral_constant<bool, has_fixed_size<autopilot_msgs::msg::ActuatorPositions>::value && has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<autopilot_msgs::msg::ActuatorPositionsStamped>
  : std::integral_constant<bool, has_bounded_size<autopilot_msgs::msg::ActuatorPositions>::value && has_bounded_size<builtin_interfaces::msg::Time>::value> {};

}  // namespace rosidl_generator_traits

#endif  // AUTOPILOT_MSGS__MSG__ACTUATOR_POSITIONS_STAMPED__TRAITS_HPP_
