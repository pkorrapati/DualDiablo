// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dd_motion_msgs:msg/PoseCtrl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dd_motion_msgs/msg/pose_ctrl.hpp"


#ifndef DD_MOTION_MSGS__MSG__DETAIL__POSE_CTRL__TRAITS_HPP_
#define DD_MOTION_MSGS__MSG__DETAIL__POSE_CTRL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dd_motion_msgs/msg/detail/pose_ctrl__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace dd_motion_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PoseCtrl & msg,
  std::ostream & out)
{
  out << "{";
  // member: fl_x
  {
    out << "fl_x: ";
    rosidl_generator_traits::value_to_yaml(msg.fl_x, out);
    out << ", ";
  }

  // member: fl_z
  {
    out << "fl_z: ";
    rosidl_generator_traits::value_to_yaml(msg.fl_z, out);
    out << ", ";
  }

  // member: fr_x
  {
    out << "fr_x: ";
    rosidl_generator_traits::value_to_yaml(msg.fr_x, out);
    out << ", ";
  }

  // member: fr_z
  {
    out << "fr_z: ";
    rosidl_generator_traits::value_to_yaml(msg.fr_z, out);
    out << ", ";
  }

  // member: f_pitch
  {
    out << "f_pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.f_pitch, out);
    out << ", ";
  }

  // member: f_delta
  {
    out << "f_delta: ";
    rosidl_generator_traits::value_to_yaml(msg.f_delta, out);
    out << ", ";
  }

  // member: bl_x
  {
    out << "bl_x: ";
    rosidl_generator_traits::value_to_yaml(msg.bl_x, out);
    out << ", ";
  }

  // member: bl_z
  {
    out << "bl_z: ";
    rosidl_generator_traits::value_to_yaml(msg.bl_z, out);
    out << ", ";
  }

  // member: br_x
  {
    out << "br_x: ";
    rosidl_generator_traits::value_to_yaml(msg.br_x, out);
    out << ", ";
  }

  // member: br_z
  {
    out << "br_z: ";
    rosidl_generator_traits::value_to_yaml(msg.br_z, out);
    out << ", ";
  }

  // member: b_pitch
  {
    out << "b_pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.b_pitch, out);
    out << ", ";
  }

  // member: b_delta
  {
    out << "b_delta: ";
    rosidl_generator_traits::value_to_yaml(msg.b_delta, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PoseCtrl & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: fl_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fl_x: ";
    rosidl_generator_traits::value_to_yaml(msg.fl_x, out);
    out << "\n";
  }

  // member: fl_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fl_z: ";
    rosidl_generator_traits::value_to_yaml(msg.fl_z, out);
    out << "\n";
  }

  // member: fr_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fr_x: ";
    rosidl_generator_traits::value_to_yaml(msg.fr_x, out);
    out << "\n";
  }

  // member: fr_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fr_z: ";
    rosidl_generator_traits::value_to_yaml(msg.fr_z, out);
    out << "\n";
  }

  // member: f_pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f_pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.f_pitch, out);
    out << "\n";
  }

  // member: f_delta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "f_delta: ";
    rosidl_generator_traits::value_to_yaml(msg.f_delta, out);
    out << "\n";
  }

  // member: bl_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bl_x: ";
    rosidl_generator_traits::value_to_yaml(msg.bl_x, out);
    out << "\n";
  }

  // member: bl_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bl_z: ";
    rosidl_generator_traits::value_to_yaml(msg.bl_z, out);
    out << "\n";
  }

  // member: br_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "br_x: ";
    rosidl_generator_traits::value_to_yaml(msg.br_x, out);
    out << "\n";
  }

  // member: br_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "br_z: ";
    rosidl_generator_traits::value_to_yaml(msg.br_z, out);
    out << "\n";
  }

  // member: b_pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b_pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.b_pitch, out);
    out << "\n";
  }

  // member: b_delta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b_delta: ";
    rosidl_generator_traits::value_to_yaml(msg.b_delta, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PoseCtrl & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace dd_motion_msgs

namespace rosidl_generator_traits
{

[[deprecated("use dd_motion_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dd_motion_msgs::msg::PoseCtrl & msg,
  std::ostream & out, size_t indentation = 0)
{
  dd_motion_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dd_motion_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const dd_motion_msgs::msg::PoseCtrl & msg)
{
  return dd_motion_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<dd_motion_msgs::msg::PoseCtrl>()
{
  return "dd_motion_msgs::msg::PoseCtrl";
}

template<>
inline const char * name<dd_motion_msgs::msg::PoseCtrl>()
{
  return "dd_motion_msgs/msg/PoseCtrl";
}

template<>
struct has_fixed_size<dd_motion_msgs::msg::PoseCtrl>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dd_motion_msgs::msg::PoseCtrl>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dd_motion_msgs::msg::PoseCtrl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DD_MOTION_MSGS__MSG__DETAIL__POSE_CTRL__TRAITS_HPP_
