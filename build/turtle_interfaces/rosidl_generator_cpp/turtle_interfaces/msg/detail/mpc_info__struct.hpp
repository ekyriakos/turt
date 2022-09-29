// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtle_interfaces:msg/MPCInfo.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__MPC_INFO__STRUCT_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__MPC_INFO__STRUCT_HPP_

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
# define DEPRECATED__turtle_interfaces__msg__MPCInfo __attribute__((deprecated))
#else
# define DEPRECATED__turtle_interfaces__msg__MPCInfo __declspec(deprecated)
#endif

namespace turtle_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MPCInfo_
{
  using Type = MPCInfo_<ContainerAllocator>;

  explicit MPCInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mpc_was_used = 0;
      this->delta_commanded = 0.0f;
      this->delta_desired = 0.0f;
      this->mpc_microseconds = 0.0f;
      this->mpc_milliseconds = 0.0f;
      this->solver_milliseconds = 0.0f;
      this->velocity_desired = 0.0f;
      this->vx_max = 0.0f;
      this->vx = 0.0f;
      this->spline_length = 0.0f;
      this->number_of_waypoints = 0;
      this->throttle_brake = 0.0f;
      this->torque = 0.0f;
    }
  }

  explicit MPCInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mpc_was_used = 0;
      this->delta_commanded = 0.0f;
      this->delta_desired = 0.0f;
      this->mpc_microseconds = 0.0f;
      this->mpc_milliseconds = 0.0f;
      this->solver_milliseconds = 0.0f;
      this->velocity_desired = 0.0f;
      this->vx_max = 0.0f;
      this->vx = 0.0f;
      this->spline_length = 0.0f;
      this->number_of_waypoints = 0;
      this->throttle_brake = 0.0f;
      this->torque = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _mpc_was_used_type =
    uint8_t;
  _mpc_was_used_type mpc_was_used;
  using _delta_commanded_type =
    float;
  _delta_commanded_type delta_commanded;
  using _delta_desired_type =
    float;
  _delta_desired_type delta_desired;
  using _mpc_microseconds_type =
    float;
  _mpc_microseconds_type mpc_microseconds;
  using _mpc_milliseconds_type =
    float;
  _mpc_milliseconds_type mpc_milliseconds;
  using _solver_milliseconds_type =
    float;
  _solver_milliseconds_type solver_milliseconds;
  using _velocity_desired_type =
    float;
  _velocity_desired_type velocity_desired;
  using _vx_max_type =
    float;
  _vx_max_type vx_max;
  using _vx_type =
    float;
  _vx_type vx;
  using _spline_length_type =
    float;
  _spline_length_type spline_length;
  using _number_of_waypoints_type =
    uint8_t;
  _number_of_waypoints_type number_of_waypoints;
  using _throttle_brake_type =
    float;
  _throttle_brake_type throttle_brake;
  using _torque_type =
    float;
  _torque_type torque;
  using _stages_velocity_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _stages_velocity_type stages_velocity;
  using _stages_steering_angle_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _stages_steering_angle_type stages_steering_angle;
  using _stages_force_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _stages_force_type stages_force;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__mpc_was_used(
    const uint8_t & _arg)
  {
    this->mpc_was_used = _arg;
    return *this;
  }
  Type & set__delta_commanded(
    const float & _arg)
  {
    this->delta_commanded = _arg;
    return *this;
  }
  Type & set__delta_desired(
    const float & _arg)
  {
    this->delta_desired = _arg;
    return *this;
  }
  Type & set__mpc_microseconds(
    const float & _arg)
  {
    this->mpc_microseconds = _arg;
    return *this;
  }
  Type & set__mpc_milliseconds(
    const float & _arg)
  {
    this->mpc_milliseconds = _arg;
    return *this;
  }
  Type & set__solver_milliseconds(
    const float & _arg)
  {
    this->solver_milliseconds = _arg;
    return *this;
  }
  Type & set__velocity_desired(
    const float & _arg)
  {
    this->velocity_desired = _arg;
    return *this;
  }
  Type & set__vx_max(
    const float & _arg)
  {
    this->vx_max = _arg;
    return *this;
  }
  Type & set__vx(
    const float & _arg)
  {
    this->vx = _arg;
    return *this;
  }
  Type & set__spline_length(
    const float & _arg)
  {
    this->spline_length = _arg;
    return *this;
  }
  Type & set__number_of_waypoints(
    const uint8_t & _arg)
  {
    this->number_of_waypoints = _arg;
    return *this;
  }
  Type & set__throttle_brake(
    const float & _arg)
  {
    this->throttle_brake = _arg;
    return *this;
  }
  Type & set__torque(
    const float & _arg)
  {
    this->torque = _arg;
    return *this;
  }
  Type & set__stages_velocity(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->stages_velocity = _arg;
    return *this;
  }
  Type & set__stages_steering_angle(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->stages_steering_angle = _arg;
    return *this;
  }
  Type & set__stages_force(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->stages_force = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtle_interfaces::msg::MPCInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_interfaces::msg::MPCInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_interfaces::msg::MPCInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_interfaces::msg::MPCInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::msg::MPCInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::msg::MPCInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::msg::MPCInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::msg::MPCInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_interfaces::msg::MPCInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_interfaces::msg::MPCInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_interfaces__msg__MPCInfo
    std::shared_ptr<turtle_interfaces::msg::MPCInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_interfaces__msg__MPCInfo
    std::shared_ptr<turtle_interfaces::msg::MPCInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MPCInfo_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->mpc_was_used != other.mpc_was_used) {
      return false;
    }
    if (this->delta_commanded != other.delta_commanded) {
      return false;
    }
    if (this->delta_desired != other.delta_desired) {
      return false;
    }
    if (this->mpc_microseconds != other.mpc_microseconds) {
      return false;
    }
    if (this->mpc_milliseconds != other.mpc_milliseconds) {
      return false;
    }
    if (this->solver_milliseconds != other.solver_milliseconds) {
      return false;
    }
    if (this->velocity_desired != other.velocity_desired) {
      return false;
    }
    if (this->vx_max != other.vx_max) {
      return false;
    }
    if (this->vx != other.vx) {
      return false;
    }
    if (this->spline_length != other.spline_length) {
      return false;
    }
    if (this->number_of_waypoints != other.number_of_waypoints) {
      return false;
    }
    if (this->throttle_brake != other.throttle_brake) {
      return false;
    }
    if (this->torque != other.torque) {
      return false;
    }
    if (this->stages_velocity != other.stages_velocity) {
      return false;
    }
    if (this->stages_steering_angle != other.stages_steering_angle) {
      return false;
    }
    if (this->stages_force != other.stages_force) {
      return false;
    }
    return true;
  }
  bool operator!=(const MPCInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MPCInfo_

// alias to use template instance with default allocator
using MPCInfo =
  turtle_interfaces::msg::MPCInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__MPC_INFO__STRUCT_HPP_
