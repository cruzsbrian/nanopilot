// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autopilot_msgs:srv/SendMsgpackConfig.idl
// generated code does not contain a copyright notice

#ifndef AUTOPILOT_MSGS__SRV__SEND_MSGPACK_CONFIG__TRAITS_HPP_
#define AUTOPILOT_MSGS__SRV__SEND_MSGPACK_CONFIG__TRAITS_HPP_

#include "autopilot_msgs/srv/send_msgpack_config__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autopilot_msgs::srv::SendMsgpackConfig_Request>()
{
  return "autopilot_msgs::srv::SendMsgpackConfig_Request";
}

template<>
struct has_fixed_size<autopilot_msgs::srv::SendMsgpackConfig_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autopilot_msgs::srv::SendMsgpackConfig_Request>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autopilot_msgs::srv::SendMsgpackConfig_Response>()
{
  return "autopilot_msgs::srv::SendMsgpackConfig_Response";
}

template<>
struct has_fixed_size<autopilot_msgs::srv::SendMsgpackConfig_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autopilot_msgs::srv::SendMsgpackConfig_Response>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autopilot_msgs::srv::SendMsgpackConfig>()
{
  return "autopilot_msgs::srv::SendMsgpackConfig";
}

template<>
struct has_fixed_size<autopilot_msgs::srv::SendMsgpackConfig>
  : std::integral_constant<
    bool,
    has_fixed_size<autopilot_msgs::srv::SendMsgpackConfig_Request>::value &&
    has_fixed_size<autopilot_msgs::srv::SendMsgpackConfig_Response>::value
  >
{
};

template<>
struct has_bounded_size<autopilot_msgs::srv::SendMsgpackConfig>
  : std::integral_constant<
    bool,
    has_bounded_size<autopilot_msgs::srv::SendMsgpackConfig_Request>::value &&
    has_bounded_size<autopilot_msgs::srv::SendMsgpackConfig_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // AUTOPILOT_MSGS__SRV__SEND_MSGPACK_CONFIG__TRAITS_HPP_
