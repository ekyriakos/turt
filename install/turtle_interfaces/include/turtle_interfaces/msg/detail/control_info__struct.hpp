// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtle_interfaces:msg/ControlInfo.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__CONTROL_INFO__STRUCT_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__CONTROL_INFO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__turtle_interfaces__msg__ControlInfo __attribute__((deprecated))
#else
# define DEPRECATED__turtle_interfaces__msg__ControlInfo __declspec(deprecated)
#endif

namespace turtle_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ControlInfo_
{
  using Type = ControlInfo_<ContainerAllocator>;

  explicit ControlInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lookahead_distance = 0.0f;
      this->vx_desired = 0.0f;
      this->lap = 0;
      this->map_available = false;
      this->finalization_trigger = false;
      this->seconds_to_cross_finish_line = 0.0f;
      this->anti_delft_gain = 0.0f;
      this->finish_dist_thresh = 0.0f;
      this->vx = 0.0f;
      this->seconds_passed_since_finalization_trigger = 0.0f;
      this->heading_condition = false;
      this->startline_pose_heading = 0.0f;
    }
  }

  explicit ControlInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lookahead_distance = 0.0f;
      this->vx_desired = 0.0f;
      this->lap = 0;
      this->map_available = false;
      this->finalization_trigger = false;
      this->seconds_to_cross_finish_line = 0.0f;
      this->anti_delft_gain = 0.0f;
      this->finish_dist_thresh = 0.0f;
      this->vx = 0.0f;
      this->seconds_passed_since_finalization_trigger = 0.0f;
      this->heading_condition = false;
      this->startline_pose_heading = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _lookahead_distance_type =
    float;
  _lookahead_distance_type lookahead_distance;
  using _vx_desired_type =
    float;
  _vx_desired_type vx_desired;
  using _lap_type =
    uint8_t;
  _lap_type lap;
  using _map_available_type =
    bool;
  _map_available_type map_available;
  using _finalization_trigger_type =
    bool;
  _finalization_trigger_type finalization_trigger;
  using _seconds_to_cross_finish_line_type =
    float;
  _seconds_to_cross_finish_line_type seconds_to_cross_finish_line;
  using _anti_delft_gain_type =
    float;
  _anti_delft_gain_type anti_delft_gain;
  using _finish_dist_thresh_type =
    float;
  _finish_dist_thresh_type finish_dist_thresh;
  using _vx_type =
    float;
  _vx_type vx;
  using _seconds_passed_since_finalization_trigger_type =
    float;
  _seconds_passed_since_finalization_trigger_type seconds_passed_since_finalization_trigger;
  using _heading_condition_type =
    bool;
  _heading_condition_type heading_condition;
  using _startline_pose_heading_type =
    float;
  _startline_pose_heading_type startline_pose_heading;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__lookahead_distance(
    const float & _arg)
  {
    this->lookahead_distance = _arg;
    return *this;
  }
  Type & set__vx_desired(
    const float & _arg)
  {
    this->vx_desired = _arg;
    return *this;
  }
  Type & set__lap(
    const uint8_t & _arg)
  {
    this->lap = _arg;
    return *this;
  }
  Type & set__map_available(
    const bool & _arg)
  {
    this->map_available = _arg;
    return *this;
  }
  Type & set__finalization_trigger(
    const bool & _arg)
  {
    this->finalization_trigger = _arg;
    return *this;
  }
  Type & set__seconds_to_cross_finish_line(
    const float & _arg)
  {
    this->seconds_to_cross_finish_line = _arg;
    return *this;
  }
  Type & set__anti_delft_gain(
    const float & _arg)
  {
    this->anti_delft_gain = _arg;
    return *this;
  }
  Type & set__finish_dist_thresh(
    const float & _arg)
  {
    this->finish_dist_thresh = _arg;
    return *this;
  }
  Type & set__vx(
    const float & _arg)
  {
    this->vx = _arg;
    return *this;
  }
  Type & set__seconds_passed_since_finalization_trigger(
    const float & _arg)
  {
    this->seconds_passed_since_finalization_trigger = _arg;
    return *this;
  }
  Type & set__heading_condition(
    const bool & _arg)
  {
    this->heading_condition = _arg;
    return *this;
  }
  Type & set__startline_pose_heading(
    const float & _arg)
  {
    this->startline_pose_heading = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtle_interfaces::msg::ControlInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_interfaces::msg::ControlInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_interfaces::msg::ControlInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_interfaces::msg::ControlInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::msg::ControlInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::msg::ControlInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::msg::ControlInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::msg::ControlInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_interfaces::msg::ControlInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_interfaces::msg::ControlInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_interfaces__msg__ControlInfo
    std::shared_ptr<turtle_interfaces::msg::ControlInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_interfaces__msg__ControlInfo
    std::shared_ptr<turtle_interfaces::msg::ControlInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControlInfo_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->lookahead_distance != other.lookahead_distance) {
      return false;
    }
    if (this->vx_desired != other.vx_desired) {
      return false;
    }
    if (this->lap != other.lap) {
      return false;
    }
    if (this->map_available != other.map_available) {
      return false;
    }
    if (this->finalization_trigger != other.finalization_trigger) {
      return false;
    }
    if (this->seconds_to_cross_finish_line != other.seconds_to_cross_finish_line) {
      return false;
    }
    if (this->anti_delft_gain != other.anti_delft_gain) {
      return false;
    }
    if (this->finish_dist_thresh != other.finish_dist_thresh) {
      return false;
    }
    if (this->vx != other.vx) {
      return false;
    }
    if (this->seconds_passed_since_finalization_trigger != other.seconds_passed_since_finalization_trigger) {
      return false;
    }
    if (this->heading_condition != other.heading_condition) {
      return false;
    }
    if (this->startline_pose_heading != other.startline_pose_heading) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControlInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControlInfo_

// alias to use template instance with default allocator
using ControlInfo =
  turtle_interfaces::msg::ControlInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__CONTROL_INFO__STRUCT_HPP_
