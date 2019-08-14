// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autopilot_msgs:msg/RCInput.idl
// generated code does not contain a copyright notice

#ifndef AUTOPILOT_MSGS__MSG__RC_INPUT__TRAITS_HPP_
#define AUTOPILOT_MSGS__MSG__RC_INPUT__TRAITS_HPP_

#include "autopilot_msgs/msg/rc_input__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autopilot_msgs::msg::RCInput>()
{
  return "autopilot_msgs::msg::RCInput";
}

template<>
struct has_fixed_size<autopilot_msgs::msg::RCInput>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autopilot_msgs::msg::RCInput>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

}  // namespace rosidl_generator_traits

#endif  // AUTOPILOT_MSGS__MSG__RC_INPUT__TRAITS_HPP_
