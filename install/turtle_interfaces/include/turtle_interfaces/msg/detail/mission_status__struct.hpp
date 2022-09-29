// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtle_interfaces:msg/MissionStatus.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__MISSION_STATUS__STRUCT_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__MISSION_STATUS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__turtle_interfaces__msg__MissionStatus __attribute__((deprecated))
#else
# define DEPRECATED__turtle_interfaces__msg__MissionStatus __declspec(deprecated)
#endif

namespace turtle_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MissionStatus_
{
  using Type = MissionStatus_<ContainerAllocator>;

  explicit MissionStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mission_status = 0;
    }
  }

  explicit MissionStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mission_status = 0;
    }
  }

  // field types and members
  using _mission_status_type =
    uint8_t;
  _mission_status_type mission_status;

  // setters for named parameter idiom
  Type & set__mission_status(
    const uint8_t & _arg)
  {
    this->mission_status = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t CONFIGURING =
    0u;
  static constexpr uint8_t STANDBY =
    1u;
  static constexpr uint8_t INITIALIZING =
    2u;
  static constexpr uint8_t RUNNING =
    3u;
  static constexpr uint8_t FINALIZING =
    4u;
  static constexpr uint8_t FINISHED =
    5u;

  // pointer types
  using RawPtr =
    turtle_interfaces::msg::MissionStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_interfaces::msg::MissionStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_interfaces::msg::MissionStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_interfaces::msg::MissionStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::msg::MissionStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::msg::MissionStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::msg::MissionStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::msg::MissionStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_interfaces::msg::MissionStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_interfaces::msg::MissionStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_interfaces__msg__MissionStatus
    std::shared_ptr<turtle_interfaces::msg::MissionStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_interfaces__msg__MissionStatus
    std::shared_ptr<turtle_interfaces::msg::MissionStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MissionStatus_ & other) const
  {
    if (this->mission_status != other.mission_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const MissionStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MissionStatus_

// alias to use template instance with default allocator
using MissionStatus =
  turtle_interfaces::msg::MissionStatus_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t MissionStatus_<ContainerAllocator>::CONFIGURING;
template<typename ContainerAllocator>
constexpr uint8_t MissionStatus_<ContainerAllocator>::STANDBY;
template<typename ContainerAllocator>
constexpr uint8_t MissionStatus_<ContainerAllocator>::INITIALIZING;
template<typename ContainerAllocator>
constexpr uint8_t MissionStatus_<ContainerAllocator>::RUNNING;
template<typename ContainerAllocator>
constexpr uint8_t MissionStatus_<ContainerAllocator>::FINALIZING;
template<typename ContainerAllocator>
constexpr uint8_t MissionStatus_<ContainerAllocator>::FINISHED;

}  // namespace msg

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__MISSION_STATUS__STRUCT_HPP_
