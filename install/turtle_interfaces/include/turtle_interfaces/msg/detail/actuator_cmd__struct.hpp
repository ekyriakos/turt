// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtle_interfaces:msg/ActuatorCmd.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__ACTUATOR_CMD__STRUCT_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__ACTUATOR_CMD__STRUCT_HPP_

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
# define DEPRECATED__turtle_interfaces__msg__ActuatorCmd __attribute__((deprecated))
#else
# define DEPRECATED__turtle_interfaces__msg__ActuatorCmd __declspec(deprecated)
#endif

namespace turtle_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ActuatorCmd_
{
  using Type = ActuatorCmd_<ContainerAllocator>;

  explicit ActuatorCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->throttle = 0.0f;
      this->steering = 0.0f;
      this->steering_mode = 0;
    }
  }

  explicit ActuatorCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->throttle = 0.0f;
      this->steering = 0.0f;
      this->steering_mode = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _throttle_type =
    float;
  _throttle_type throttle;
  using _steering_type =
    float;
  _steering_type steering;
  using _steering_mode_type =
    uint8_t;
  _steering_mode_type steering_mode;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__throttle(
    const float & _arg)
  {
    this->throttle = _arg;
    return *this;
  }
  Type & set__steering(
    const float & _arg)
  {
    this->steering = _arg;
    return *this;
  }
  Type & set__steering_mode(
    const uint8_t & _arg)
  {
    this->steering_mode = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t STEERING_MODE_POSITION =
    13u;
  static constexpr uint8_t STEERING_MODE_VELOCITY =
    0u;

  // pointer types
  using RawPtr =
    turtle_interfaces::msg::ActuatorCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_interfaces::msg::ActuatorCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_interfaces::msg::ActuatorCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_interfaces::msg::ActuatorCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::msg::ActuatorCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::msg::ActuatorCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::msg::ActuatorCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::msg::ActuatorCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_interfaces::msg::ActuatorCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_interfaces::msg::ActuatorCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_interfaces__msg__ActuatorCmd
    std::shared_ptr<turtle_interfaces::msg::ActuatorCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_interfaces__msg__ActuatorCmd
    std::shared_ptr<turtle_interfaces::msg::ActuatorCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActuatorCmd_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->throttle != other.throttle) {
      return false;
    }
    if (this->steering != other.steering) {
      return false;
    }
    if (this->steering_mode != other.steering_mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActuatorCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActuatorCmd_

// alias to use template instance with default allocator
using ActuatorCmd =
  turtle_interfaces::msg::ActuatorCmd_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t ActuatorCmd_<ContainerAllocator>::STEERING_MODE_POSITION;
template<typename ContainerAllocator>
constexpr uint8_t ActuatorCmd_<ContainerAllocator>::STEERING_MODE_VELOCITY;

}  // namespace msg

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__ACTUATOR_CMD__STRUCT_HPP_
