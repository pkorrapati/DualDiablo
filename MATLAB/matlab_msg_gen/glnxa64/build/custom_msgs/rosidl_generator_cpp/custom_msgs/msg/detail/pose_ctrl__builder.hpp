// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/PoseCtrl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_msgs/msg/pose_ctrl.hpp"


#ifndef CUSTOM_MSGS__MSG__DETAIL__POSE_CTRL__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__POSE_CTRL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_msgs/msg/detail/pose_ctrl__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_PoseCtrl_b_delta
{
public:
  explicit Init_PoseCtrl_b_delta(::custom_msgs::msg::PoseCtrl & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::PoseCtrl b_delta(::custom_msgs::msg::PoseCtrl::_b_delta_type arg)
  {
    msg_.b_delta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::PoseCtrl msg_;
};

class Init_PoseCtrl_b_pitch
{
public:
  explicit Init_PoseCtrl_b_pitch(::custom_msgs::msg::PoseCtrl & msg)
  : msg_(msg)
  {}
  Init_PoseCtrl_b_delta b_pitch(::custom_msgs::msg::PoseCtrl::_b_pitch_type arg)
  {
    msg_.b_pitch = std::move(arg);
    return Init_PoseCtrl_b_delta(msg_);
  }

private:
  ::custom_msgs::msg::PoseCtrl msg_;
};

class Init_PoseCtrl_br_z
{
public:
  explicit Init_PoseCtrl_br_z(::custom_msgs::msg::PoseCtrl & msg)
  : msg_(msg)
  {}
  Init_PoseCtrl_b_pitch br_z(::custom_msgs::msg::PoseCtrl::_br_z_type arg)
  {
    msg_.br_z = std::move(arg);
    return Init_PoseCtrl_b_pitch(msg_);
  }

private:
  ::custom_msgs::msg::PoseCtrl msg_;
};

class Init_PoseCtrl_br_x
{
public:
  explicit Init_PoseCtrl_br_x(::custom_msgs::msg::PoseCtrl & msg)
  : msg_(msg)
  {}
  Init_PoseCtrl_br_z br_x(::custom_msgs::msg::PoseCtrl::_br_x_type arg)
  {
    msg_.br_x = std::move(arg);
    return Init_PoseCtrl_br_z(msg_);
  }

private:
  ::custom_msgs::msg::PoseCtrl msg_;
};

class Init_PoseCtrl_bl_z
{
public:
  explicit Init_PoseCtrl_bl_z(::custom_msgs::msg::PoseCtrl & msg)
  : msg_(msg)
  {}
  Init_PoseCtrl_br_x bl_z(::custom_msgs::msg::PoseCtrl::_bl_z_type arg)
  {
    msg_.bl_z = std::move(arg);
    return Init_PoseCtrl_br_x(msg_);
  }

private:
  ::custom_msgs::msg::PoseCtrl msg_;
};

class Init_PoseCtrl_bl_x
{
public:
  explicit Init_PoseCtrl_bl_x(::custom_msgs::msg::PoseCtrl & msg)
  : msg_(msg)
  {}
  Init_PoseCtrl_bl_z bl_x(::custom_msgs::msg::PoseCtrl::_bl_x_type arg)
  {
    msg_.bl_x = std::move(arg);
    return Init_PoseCtrl_bl_z(msg_);
  }

private:
  ::custom_msgs::msg::PoseCtrl msg_;
};

class Init_PoseCtrl_f_delta
{
public:
  explicit Init_PoseCtrl_f_delta(::custom_msgs::msg::PoseCtrl & msg)
  : msg_(msg)
  {}
  Init_PoseCtrl_bl_x f_delta(::custom_msgs::msg::PoseCtrl::_f_delta_type arg)
  {
    msg_.f_delta = std::move(arg);
    return Init_PoseCtrl_bl_x(msg_);
  }

private:
  ::custom_msgs::msg::PoseCtrl msg_;
};

class Init_PoseCtrl_f_pitch
{
public:
  explicit Init_PoseCtrl_f_pitch(::custom_msgs::msg::PoseCtrl & msg)
  : msg_(msg)
  {}
  Init_PoseCtrl_f_delta f_pitch(::custom_msgs::msg::PoseCtrl::_f_pitch_type arg)
  {
    msg_.f_pitch = std::move(arg);
    return Init_PoseCtrl_f_delta(msg_);
  }

private:
  ::custom_msgs::msg::PoseCtrl msg_;
};

class Init_PoseCtrl_fr_z
{
public:
  explicit Init_PoseCtrl_fr_z(::custom_msgs::msg::PoseCtrl & msg)
  : msg_(msg)
  {}
  Init_PoseCtrl_f_pitch fr_z(::custom_msgs::msg::PoseCtrl::_fr_z_type arg)
  {
    msg_.fr_z = std::move(arg);
    return Init_PoseCtrl_f_pitch(msg_);
  }

private:
  ::custom_msgs::msg::PoseCtrl msg_;
};

class Init_PoseCtrl_fr_x
{
public:
  explicit Init_PoseCtrl_fr_x(::custom_msgs::msg::PoseCtrl & msg)
  : msg_(msg)
  {}
  Init_PoseCtrl_fr_z fr_x(::custom_msgs::msg::PoseCtrl::_fr_x_type arg)
  {
    msg_.fr_x = std::move(arg);
    return Init_PoseCtrl_fr_z(msg_);
  }

private:
  ::custom_msgs::msg::PoseCtrl msg_;
};

class Init_PoseCtrl_fl_z
{
public:
  explicit Init_PoseCtrl_fl_z(::custom_msgs::msg::PoseCtrl & msg)
  : msg_(msg)
  {}
  Init_PoseCtrl_fr_x fl_z(::custom_msgs::msg::PoseCtrl::_fl_z_type arg)
  {
    msg_.fl_z = std::move(arg);
    return Init_PoseCtrl_fr_x(msg_);
  }

private:
  ::custom_msgs::msg::PoseCtrl msg_;
};

class Init_PoseCtrl_fl_x
{
public:
  Init_PoseCtrl_fl_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PoseCtrl_fl_z fl_x(::custom_msgs::msg::PoseCtrl::_fl_x_type arg)
  {
    msg_.fl_x = std::move(arg);
    return Init_PoseCtrl_fl_z(msg_);
  }

private:
  ::custom_msgs::msg::PoseCtrl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::PoseCtrl>()
{
  return custom_msgs::msg::builder::Init_PoseCtrl_fl_x();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__POSE_CTRL__BUILDER_HPP_
