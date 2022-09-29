// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtle_interfaces:msg/ECUParams.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__ECU_PARAMS__STRUCT_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__ECU_PARAMS__STRUCT_HPP_

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
# define DEPRECATED__turtle_interfaces__msg__ECUParams __attribute__((deprecated))
#else
# define DEPRECATED__turtle_interfaces__msg__ECUParams __declspec(deprecated)
#endif

namespace turtle_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ECUParams_
{
  using Type = ECUParams_<ContainerAllocator>;

  explicit ECUParams_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->inverter_rpm_percentage = 0.0f;
      this->inverter_i_rms_max = 0.0f;
      this->inverter_i_rms_max_brake = 0.0f;
      this->power_target_kw = 0.0f;
      this->servo_start_speed = 0.0f;
      this->regen_min_speed = 0.0f;
      this->ed_enable = false;
      this->tc_enable = false;
    }
  }

  explicit ECUParams_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->inverter_rpm_percentage = 0.0f;
      this->inverter_i_rms_max = 0.0f;
      this->inverter_i_rms_max_brake = 0.0f;
      this->power_target_kw = 0.0f;
      this->servo_start_speed = 0.0f;
      this->regen_min_speed = 0.0f;
      this->ed_enable = false;
      this->tc_enable = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _inverter_rpm_percentage_type =
    float;
  _inverter_rpm_percentage_type inverter_rpm_percentage;
  using _inverter_i_rms_max_type =
    float;
  _inverter_i_rms_max_type inverter_i_rms_max;
  using _inverter_i_rms_max_brake_type =
    float;
  _inverter_i_rms_max_brake_type inverter_i_rms_max_brake;
  using _power_target_kw_type =
    float;
  _power_target_kw_type power_target_kw;
  using _servo_start_speed_type =
    float;
  _servo_start_speed_type servo_start_speed;
  using _regen_min_speed_type =
    float;
  _regen_min_speed_type regen_min_speed;
  using _ed_enable_type =
    bool;
  _ed_enable_type ed_enable;
  using _tc_enable_type =
    bool;
  _tc_enable_type tc_enable;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__inverter_rpm_percentage(
    const float & _arg)
  {
    this->inverter_rpm_percentage = _arg;
    return *this;
  }
  Type & set__inverter_i_rms_max(
    const float & _arg)
  {
    this->inverter_i_rms_max = _arg;
    return *this;
  }
  Type & set__inverter_i_rms_max_brake(
    const float & _arg)
  {
    this->inverter_i_rms_max_brake = _arg;
    return *this;
  }
  Type & set__power_target_kw(
    const float & _arg)
  {
    this->power_target_kw = _arg;
    return *this;
  }
  Type & set__servo_start_speed(
    const float & _arg)
  {
    this->servo_start_speed = _arg;
    return *this;
  }
  Type & set__regen_min_speed(
    const float & _arg)
  {
    this->regen_min_speed = _arg;
    return *this;
  }
  Type & set__ed_enable(
    const bool & _arg)
  {
    this->ed_enable = _arg;
    return *this;
  }
  Type & set__tc_enable(
    const bool & _arg)
  {
    this->tc_enable = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtle_interfaces::msg::ECUParams_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_interfaces::msg::ECUParams_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_interfaces::msg::ECUParams_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_interfaces::msg::ECUParams_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::msg::ECUParams_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::msg::ECUParams_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::msg::ECUParams_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::msg::ECUParams_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_interfaces::msg::ECUParams_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_interfaces::msg::ECUParams_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_interfaces__msg__ECUParams
    std::shared_ptr<turtle_interfaces::msg::ECUParams_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_interfaces__msg__ECUParams
    std::shared_ptr<turtle_interfaces::msg::ECUParams_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ECUParams_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->inverter_rpm_percentage != other.inverter_rpm_percentage) {
      return false;
    }
    if (this->inverter_i_rms_max != other.inverter_i_rms_max) {
      return false;
    }
    if (this->inverter_i_rms_max_brake != other.inverter_i_rms_max_brake) {
      return false;
    }
    if (this->power_target_kw != other.power_target_kw) {
      return false;
    }
    if (this->servo_start_speed != other.servo_start_speed) {
      return false;
    }
    if (this->regen_min_speed != other.regen_min_speed) {
      return false;
    }
    if (this->ed_enable != other.ed_enable) {
      return false;
    }
    if (this->tc_enable != other.tc_enable) {
      return false;
    }
    return true;
  }
  bool operator!=(const ECUParams_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ECUParams_

// alias to use template instance with default allocator
using ECUParams =
  turtle_interfaces::msg::ECUParams_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__ECU_PARAMS__STRUCT_HPP_
