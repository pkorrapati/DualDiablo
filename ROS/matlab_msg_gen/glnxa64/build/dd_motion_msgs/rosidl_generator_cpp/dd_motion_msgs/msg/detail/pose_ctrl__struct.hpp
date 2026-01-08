// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dd_motion_msgs:msg/PoseCtrl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dd_motion_msgs/msg/pose_ctrl.hpp"


#ifndef DD_MOTION_MSGS__MSG__DETAIL__POSE_CTRL__STRUCT_HPP_
#define DD_MOTION_MSGS__MSG__DETAIL__POSE_CTRL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__dd_motion_msgs__msg__PoseCtrl __attribute__((deprecated))
#else
# define DEPRECATED__dd_motion_msgs__msg__PoseCtrl __declspec(deprecated)
#endif

namespace dd_motion_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PoseCtrl_
{
  using Type = PoseCtrl_<ContainerAllocator>;

  explicit PoseCtrl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fl_x = 0.0;
      this->fl_z = 0.0;
      this->fr_x = 0.0;
      this->fr_z = 0.0;
      this->f_pitch = 0.0;
      this->f_delta = 0.0;
      this->bl_x = 0.0;
      this->bl_z = 0.0;
      this->br_x = 0.0;
      this->br_z = 0.0;
      this->b_pitch = 0.0;
      this->b_delta = 0.0;
    }
  }

  explicit PoseCtrl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fl_x = 0.0;
      this->fl_z = 0.0;
      this->fr_x = 0.0;
      this->fr_z = 0.0;
      this->f_pitch = 0.0;
      this->f_delta = 0.0;
      this->bl_x = 0.0;
      this->bl_z = 0.0;
      this->br_x = 0.0;
      this->br_z = 0.0;
      this->b_pitch = 0.0;
      this->b_delta = 0.0;
    }
  }

  // field types and members
  using _fl_x_type =
    double;
  _fl_x_type fl_x;
  using _fl_z_type =
    double;
  _fl_z_type fl_z;
  using _fr_x_type =
    double;
  _fr_x_type fr_x;
  using _fr_z_type =
    double;
  _fr_z_type fr_z;
  using _f_pitch_type =
    double;
  _f_pitch_type f_pitch;
  using _f_delta_type =
    double;
  _f_delta_type f_delta;
  using _bl_x_type =
    double;
  _bl_x_type bl_x;
  using _bl_z_type =
    double;
  _bl_z_type bl_z;
  using _br_x_type =
    double;
  _br_x_type br_x;
  using _br_z_type =
    double;
  _br_z_type br_z;
  using _b_pitch_type =
    double;
  _b_pitch_type b_pitch;
  using _b_delta_type =
    double;
  _b_delta_type b_delta;

  // setters for named parameter idiom
  Type & set__fl_x(
    const double & _arg)
  {
    this->fl_x = _arg;
    return *this;
  }
  Type & set__fl_z(
    const double & _arg)
  {
    this->fl_z = _arg;
    return *this;
  }
  Type & set__fr_x(
    const double & _arg)
  {
    this->fr_x = _arg;
    return *this;
  }
  Type & set__fr_z(
    const double & _arg)
  {
    this->fr_z = _arg;
    return *this;
  }
  Type & set__f_pitch(
    const double & _arg)
  {
    this->f_pitch = _arg;
    return *this;
  }
  Type & set__f_delta(
    const double & _arg)
  {
    this->f_delta = _arg;
    return *this;
  }
  Type & set__bl_x(
    const double & _arg)
  {
    this->bl_x = _arg;
    return *this;
  }
  Type & set__bl_z(
    const double & _arg)
  {
    this->bl_z = _arg;
    return *this;
  }
  Type & set__br_x(
    const double & _arg)
  {
    this->br_x = _arg;
    return *this;
  }
  Type & set__br_z(
    const double & _arg)
  {
    this->br_z = _arg;
    return *this;
  }
  Type & set__b_pitch(
    const double & _arg)
  {
    this->b_pitch = _arg;
    return *this;
  }
  Type & set__b_delta(
    const double & _arg)
  {
    this->b_delta = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dd_motion_msgs::msg::PoseCtrl_<ContainerAllocator> *;
  using ConstRawPtr =
    const dd_motion_msgs::msg::PoseCtrl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dd_motion_msgs::msg::PoseCtrl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dd_motion_msgs::msg::PoseCtrl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dd_motion_msgs::msg::PoseCtrl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dd_motion_msgs::msg::PoseCtrl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dd_motion_msgs::msg::PoseCtrl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dd_motion_msgs::msg::PoseCtrl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dd_motion_msgs::msg::PoseCtrl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dd_motion_msgs::msg::PoseCtrl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dd_motion_msgs__msg__PoseCtrl
    std::shared_ptr<dd_motion_msgs::msg::PoseCtrl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dd_motion_msgs__msg__PoseCtrl
    std::shared_ptr<dd_motion_msgs::msg::PoseCtrl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PoseCtrl_ & other) const
  {
    if (this->fl_x != other.fl_x) {
      return false;
    }
    if (this->fl_z != other.fl_z) {
      return false;
    }
    if (this->fr_x != other.fr_x) {
      return false;
    }
    if (this->fr_z != other.fr_z) {
      return false;
    }
    if (this->f_pitch != other.f_pitch) {
      return false;
    }
    if (this->f_delta != other.f_delta) {
      return false;
    }
    if (this->bl_x != other.bl_x) {
      return false;
    }
    if (this->bl_z != other.bl_z) {
      return false;
    }
    if (this->br_x != other.br_x) {
      return false;
    }
    if (this->br_z != other.br_z) {
      return false;
    }
    if (this->b_pitch != other.b_pitch) {
      return false;
    }
    if (this->b_delta != other.b_delta) {
      return false;
    }
    return true;
  }
  bool operator!=(const PoseCtrl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PoseCtrl_

// alias to use template instance with default allocator
using PoseCtrl =
  dd_motion_msgs::msg::PoseCtrl_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dd_motion_msgs

#endif  // DD_MOTION_MSGS__MSG__DETAIL__POSE_CTRL__STRUCT_HPP_
