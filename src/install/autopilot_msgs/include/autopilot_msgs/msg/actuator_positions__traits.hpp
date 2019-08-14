// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autopilot_msgs:msg/ActuatorPositions.idl
// generated code does not contain a copyright notice

#ifndef AUTOPILOT_MSGS__MSG__ACTUATOR_POSITIONS__TRAITS_HPP_
#define AUTOPILOT_MSGS__MSG__ACTUATOR_POSITIONS__TRAITS_HPP_

#include "autopilot_msgs/msg/actuator_positions__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autopilot_msgs::msg::ActuatorPositions>()
{
  return "autopilot_msgs::msg::ActuatorPositions";
}

template<>
struct has_fixed_size<autopilot_msgs::msg::ActuatorPositions>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autopilot_msgs::msg::ActuatorPositions>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

#endif  // AUTOPILOT_MSGS__MSG__ACTUATOR_POSITIONS__TRAITS_HPP_
