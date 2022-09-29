// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_interfaces:msg/ControlInfo.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__CONTROL_INFO__BUILDER_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__CONTROL_INFO__BUILDER_HPP_

#include "turtle_interfaces/msg/detail/control_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtle_interfaces
{

namespace msg
{

namespace builder
{

class Init_ControlInfo_startline_pose_heading
{
public:
  explicit Init_ControlInfo_startline_pose_heading(::turtle_interfaces::msg::ControlInfo & msg)
  : msg_(msg)
  {}
  ::turtle_interfaces::msg::ControlInfo startline_pose_heading(::turtle_interfaces::msg::ControlInfo::_startline_pose_heading_type arg)
  {
    msg_.startline_pose_heading = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::msg::ControlInfo msg_;
};

class Init_ControlInfo_heading_condition
{
public:
  explicit Init_ControlInfo_heading_condition(::turtle_interfaces::msg::ControlInfo & msg)
  : msg_(msg)
  {}
  Init_ControlInfo_startline_pose_heading heading_condition(::turtle_interfaces::msg::ControlInfo::_heading_condition_type arg)
  {
    msg_.heading_condition = std::move(arg);
    return Init_ControlInfo_startline_pose_heading(msg_);
  }

private:
  ::turtle_interfaces::msg::ControlInfo msg_;
};

class Init_ControlInfo_seconds_passed_since_finalization_trigger
{
public:
  explicit Init_ControlInfo_seconds_passed_since_finalization_trigger(::turtle_interfaces::msg::ControlInfo & msg)
  : msg_(msg)
  {}
  Init_ControlInfo_heading_condition seconds_passed_since_finalization_trigger(::turtle_interfaces::msg::ControlInfo::_seconds_passed_since_finalization_trigger_type arg)
  {
    msg_.seconds_passed_since_finalization_trigger = std::move(arg);
    return Init_ControlInfo_heading_condition(msg_);
  }

private:
  ::turtle_interfaces::msg::ControlInfo msg_;
};

class Init_ControlInfo_vx
{
public:
  explicit Init_ControlInfo_vx(::turtle_interfaces::msg::ControlInfo & msg)
  : msg_(msg)
  {}
  Init_ControlInfo_seconds_passed_since_finalization_trigger vx(::turtle_interfaces::msg::ControlInfo::_vx_type arg)
  {
    msg_.vx = std::move(arg);
    return Init_ControlInfo_seconds_passed_since_finalization_trigger(msg_);
  }

private:
  ::turtle_interfaces::msg::ControlInfo msg_;
};

class Init_ControlInfo_finish_dist_thresh
{
public:
  explicit Init_ControlInfo_finish_dist_thresh(::turtle_interfaces::msg::ControlInfo & msg)
  : msg_(msg)
  {}
  Init_ControlInfo_vx finish_dist_thresh(::turtle_interfaces::msg::ControlInfo::_finish_dist_thresh_type arg)
  {
    msg_.finish_dist_thresh = std::move(arg);
    return Init_ControlInfo_vx(msg_);
  }

private:
  ::turtle_interfaces::msg::ControlInfo msg_;
};

class Init_ControlInfo_anti_delft_gain
{
public:
  explicit Init_ControlInfo_anti_delft_gain(::turtle_interfaces::msg::ControlInfo & msg)
  : msg_(msg)
  {}
  Init_ControlInfo_finish_dist_thresh anti_delft_gain(::turtle_interfaces::msg::ControlInfo::_anti_delft_gain_type arg)
  {
    msg_.anti_delft_gain = std::move(arg);
    return Init_ControlInfo_finish_dist_thresh(msg_);
  }

private:
  ::turtle_interfaces::msg::ControlInfo msg_;
};

class Init_ControlInfo_seconds_to_cross_finish_line
{
public:
  explicit Init_ControlInfo_seconds_to_cross_finish_line(::turtle_interfaces::msg::ControlInfo & msg)
  : msg_(msg)
  {}
  Init_ControlInfo_anti_delft_gain seconds_to_cross_finish_line(::turtle_interfaces::msg::ControlInfo::_seconds_to_cross_finish_line_type arg)
  {
    msg_.seconds_to_cross_finish_line = std::move(arg);
    return Init_ControlInfo_anti_delft_gain(msg_);
  }

private:
  ::turtle_interfaces::msg::ControlInfo msg_;
};

class Init_ControlInfo_finalization_trigger
{
public:
  explicit Init_ControlInfo_finalization_trigger(::turtle_interfaces::msg::ControlInfo & msg)
  : msg_(msg)
  {}
  Init_ControlInfo_seconds_to_cross_finish_line finalization_trigger(::turtle_interfaces::msg::ControlInfo::_finalization_trigger_type arg)
  {
    msg_.finalization_trigger = std::move(arg);
    return Init_ControlInfo_seconds_to_cross_finish_line(msg_);
  }

private:
  ::turtle_interfaces::msg::ControlInfo msg_;
};

class Init_ControlInfo_map_available
{
public:
  explicit Init_ControlInfo_map_available(::turtle_interfaces::msg::ControlInfo & msg)
  : msg_(msg)
  {}
  Init_ControlInfo_finalization_trigger map_available(::turtle_interfaces::msg::ControlInfo::_map_available_type arg)
  {
    msg_.map_available = std::move(arg);
    return Init_ControlInfo_finalization_trigger(msg_);
  }

private:
  ::turtle_interfaces::msg::ControlInfo msg_;
};

class Init_ControlInfo_lap
{
public:
  explicit Init_ControlInfo_lap(::turtle_interfaces::msg::ControlInfo & msg)
  : msg_(msg)
  {}
  Init_ControlInfo_map_available lap(::turtle_interfaces::msg::ControlInfo::_lap_type arg)
  {
    msg_.lap = std::move(arg);
    return Init_ControlInfo_map_available(msg_);
  }

private:
  ::turtle_interfaces::msg::ControlInfo msg_;
};

class Init_ControlInfo_vx_desired
{
public:
  explicit Init_ControlInfo_vx_desired(::turtle_interfaces::msg::ControlInfo & msg)
  : msg_(msg)
  {}
  Init_ControlInfo_lap vx_desired(::turtle_interfaces::msg::ControlInfo::_vx_desired_type arg)
  {
    msg_.vx_desired = std::move(arg);
    return Init_ControlInfo_lap(msg_);
  }

private:
  ::turtle_interfaces::msg::ControlInfo msg_;
};

class Init_ControlInfo_lookahead_distance
{
public:
  explicit Init_ControlInfo_lookahead_distance(::turtle_interfaces::msg::ControlInfo & msg)
  : msg_(msg)
  {}
  Init_ControlInfo_vx_desired lookahead_distance(::turtle_interfaces::msg::ControlInfo::_lookahead_distance_type arg)
  {
    msg_.lookahead_distance = std::move(arg);
    return Init_ControlInfo_vx_desired(msg_);
  }

private:
  ::turtle_interfaces::msg::ControlInfo msg_;
};

class Init_ControlInfo_header
{
public:
  Init_ControlInfo_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControlInfo_lookahead_distance header(::turtle_interfaces::msg::ControlInfo::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ControlInfo_lookahead_distance(msg_);
  }

private:
  ::turtle_interfaces::msg::ControlInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::msg::ControlInfo>()
{
  return turtle_interfaces::msg::builder::Init_ControlInfo_header();
}

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__CONTROL_INFO__BUILDER_HPP_
