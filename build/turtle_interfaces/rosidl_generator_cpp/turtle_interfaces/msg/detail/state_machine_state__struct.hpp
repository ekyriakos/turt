// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtle_interfaces:msg/StateMachineState.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__STATE_MACHINE_STATE__STRUCT_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__STATE_MACHINE_STATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__turtle_interfaces__msg__StateMachineState __attribute__((deprecated))
#else
# define DEPRECATED__turtle_interfaces__msg__StateMachineState __declspec(deprecated)
#endif

namespace turtle_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StateMachineState_
{
  using Type = StateMachineState_<ContainerAllocator>;

  explicit StateMachineState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = 0;
      this->setfinished = false;
    }
  }

  explicit StateMachineState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = 0;
      this->setfinished = false;
    }
  }

  // field types and members
  using _state_type =
    uint8_t;
  _state_type state;
  using _setfinished_type =
    bool;
  _setfinished_type setfinished;

  // setters for named parameter idiom
  Type & set__state(
    const uint8_t & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__setfinished(
    const bool & _arg)
  {
    this->setfinished = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t MANUAL_DRIVING =
    0u;
  static constexpr uint8_t AS_OFF =
    1u;
  static constexpr uint8_t AS_READY =
    2u;
  static constexpr uint8_t AS_DRIVING =
    3u;
  static constexpr uint8_t AS_FINISHED =
    4u;
  static constexpr uint8_t AS_EMERGENCY =
    5u;

  // pointer types
  using RawPtr =
    turtle_interfaces::msg::StateMachineState_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_interfaces::msg::StateMachineState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_interfaces::msg::StateMachineState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_interfaces::msg::StateMachineState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::msg::StateMachineState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::msg::StateMachineState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::msg::StateMachineState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::msg::StateMachineState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_interfaces::msg::StateMachineState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_interfaces::msg::StateMachineState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_interfaces__msg__StateMachineState
    std::shared_ptr<turtle_interfaces::msg::StateMachineState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_interfaces__msg__StateMachineState
    std::shared_ptr<turtle_interfaces::msg::StateMachineState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StateMachineState_ & other) const
  {
    if (this->state != other.state) {
      return false;
    }
    if (this->setfinished != other.setfinished) {
      return false;
    }
    return true;
  }
  bool operator!=(const StateMachineState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StateMachineState_

// alias to use template instance with default allocator
using StateMachineState =
  turtle_interfaces::msg::StateMachineState_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t StateMachineState_<ContainerAllocator>::MANUAL_DRIVING;
template<typename ContainerAllocator>
constexpr uint8_t StateMachineState_<ContainerAllocator>::AS_OFF;
template<typename ContainerAllocator>
constexpr uint8_t StateMachineState_<ContainerAllocator>::AS_READY;
template<typename ContainerAllocator>
constexpr uint8_t StateMachineState_<ContainerAllocator>::AS_DRIVING;
template<typename ContainerAllocator>
constexpr uint8_t StateMachineState_<ContainerAllocator>::AS_FINISHED;
template<typename ContainerAllocator>
constexpr uint8_t StateMachineState_<ContainerAllocator>::AS_EMERGENCY;

}  // namespace msg

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__STATE_MACHINE_STATE__STRUCT_HPP_
