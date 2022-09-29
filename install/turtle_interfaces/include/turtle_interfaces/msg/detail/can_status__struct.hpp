// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtle_interfaces:msg/CanStatus.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__CAN_STATUS__STRUCT_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__CAN_STATUS__STRUCT_HPP_

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
# define DEPRECATED__turtle_interfaces__msg__CanStatus __attribute__((deprecated))
#else
# define DEPRECATED__turtle_interfaces__msg__CanStatus __declspec(deprecated)
#endif

namespace turtle_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CanStatus_
{
  using Type = CanStatus_<ContainerAllocator>;

  explicit CanStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message_timeouts = 0ul;
      this->sensor_errors = 0;
      this->tx_berrors = 0;
      this->rx_berrors = 0;
      this->tx_terrors = 0ull;
      this->rx_terrors = 0ull;
      this->bus_errors = 0ul;
      this->restarts = 0ul;
      this->can_state = 0l;
    }
  }

  explicit CanStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message_timeouts = 0ul;
      this->sensor_errors = 0;
      this->tx_berrors = 0;
      this->rx_berrors = 0;
      this->tx_terrors = 0ull;
      this->rx_terrors = 0ull;
      this->bus_errors = 0ul;
      this->restarts = 0ul;
      this->can_state = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _message_timeouts_type =
    uint32_t;
  _message_timeouts_type message_timeouts;
  using _sensor_errors_type =
    uint16_t;
  _sensor_errors_type sensor_errors;
  using _tx_berrors_type =
    uint16_t;
  _tx_berrors_type tx_berrors;
  using _rx_berrors_type =
    uint16_t;
  _rx_berrors_type rx_berrors;
  using _tx_terrors_type =
    uint64_t;
  _tx_terrors_type tx_terrors;
  using _rx_terrors_type =
    uint64_t;
  _rx_terrors_type rx_terrors;
  using _bus_errors_type =
    uint32_t;
  _bus_errors_type bus_errors;
  using _restarts_type =
    uint32_t;
  _restarts_type restarts;
  using _can_state_type =
    int32_t;
  _can_state_type can_state;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__message_timeouts(
    const uint32_t & _arg)
  {
    this->message_timeouts = _arg;
    return *this;
  }
  Type & set__sensor_errors(
    const uint16_t & _arg)
  {
    this->sensor_errors = _arg;
    return *this;
  }
  Type & set__tx_berrors(
    const uint16_t & _arg)
  {
    this->tx_berrors = _arg;
    return *this;
  }
  Type & set__rx_berrors(
    const uint16_t & _arg)
  {
    this->rx_berrors = _arg;
    return *this;
  }
  Type & set__tx_terrors(
    const uint64_t & _arg)
  {
    this->tx_terrors = _arg;
    return *this;
  }
  Type & set__rx_terrors(
    const uint64_t & _arg)
  {
    this->rx_terrors = _arg;
    return *this;
  }
  Type & set__bus_errors(
    const uint32_t & _arg)
  {
    this->bus_errors = _arg;
    return *this;
  }
  Type & set__restarts(
    const uint32_t & _arg)
  {
    this->restarts = _arg;
    return *this;
  }
  Type & set__can_state(
    const int32_t & _arg)
  {
    this->can_state = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t DASH_APPS_TIMEOUT =
    1u;
  static constexpr uint32_t DASH_BRAKE_TIMEOUT =
    2u;
  static constexpr uint32_t DASH_BUTTONS_TIMEOUT =
    4u;
  static constexpr uint32_t DASH_FRONT_HALL_TIMEOUT =
    8u;
  static constexpr uint32_t AUX_PUMPS_FANS_TIMEOUT =
    16u;
  static constexpr uint32_t DASH_BOOLS_TIMEOUT =
    32u;
  static constexpr uint32_t EBS_TANK_PRESSURE_TIMEOUT =
    64u;
  static constexpr uint32_t AMI_SELECTED_MISSION_TIMEOUT =
    128u;
  static constexpr uint32_t SWA_STATUS_TIMEOUT =
    256u;
  static constexpr uint32_t EBS_SUPERVISOR_TIMEOUT =
    512u;
  static constexpr uint32_t EBS_SERVICE_BRAKE_TIMEOUT =
    1024u;
  static constexpr uint32_t INVERTER_ADU_TIMEOUT =
    2048u;
  static constexpr uint32_t ECU_PARAMS_ACTUAL_TIMEOUT =
    4096u;
  static constexpr uint32_t COOLING_INFO_TIMEOUT =
    8192u;
  static constexpr uint32_t ISABELLEN_TIMEOUT =
    16384u;
  static constexpr uint32_t ECU_CONTROL_SYSTEMS_TIMEOUT =
    32768u;
  static constexpr uint32_t ECU_ISABELLEN_TIMEOUT =
    65536u;
  static constexpr uint32_t INV_LEFT_INFO_TIMEOUT =
    131072u;
  static constexpr uint32_t INV_RIGHT_INFO_TIMEOUT =
    262144u;
  static constexpr int32_t CAN_STATE_ERROR_ACTIVE =
    0;
  static constexpr int32_t CAN_STATE_ERROR_WARNING =
    1;
  static constexpr int32_t CAN_STATE_ERROR_PASSIVE =
    2;
  static constexpr int32_t CAN_STATE_BUS_OFF =
    3;
  static constexpr int32_t CAN_STATE_STOPPED =
    4;
  static constexpr int32_t CAN_STATE_SLEEPING =
    5;
  static constexpr int32_t CAN_STATE_MAX =
    6;

  // pointer types
  using RawPtr =
    turtle_interfaces::msg::CanStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_interfaces::msg::CanStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_interfaces::msg::CanStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_interfaces::msg::CanStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::msg::CanStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::msg::CanStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::msg::CanStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::msg::CanStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_interfaces::msg::CanStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_interfaces::msg::CanStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_interfaces__msg__CanStatus
    std::shared_ptr<turtle_interfaces::msg::CanStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_interfaces__msg__CanStatus
    std::shared_ptr<turtle_interfaces::msg::CanStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CanStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->message_timeouts != other.message_timeouts) {
      return false;
    }
    if (this->sensor_errors != other.sensor_errors) {
      return false;
    }
    if (this->tx_berrors != other.tx_berrors) {
      return false;
    }
    if (this->rx_berrors != other.rx_berrors) {
      return false;
    }
    if (this->tx_terrors != other.tx_terrors) {
      return false;
    }
    if (this->rx_terrors != other.rx_terrors) {
      return false;
    }
    if (this->bus_errors != other.bus_errors) {
      return false;
    }
    if (this->restarts != other.restarts) {
      return false;
    }
    if (this->can_state != other.can_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const CanStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CanStatus_

// alias to use template instance with default allocator
using CanStatus =
  turtle_interfaces::msg::CanStatus_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint32_t CanStatus_<ContainerAllocator>::DASH_APPS_TIMEOUT;
template<typename ContainerAllocator>
constexpr uint32_t CanStatus_<ContainerAllocator>::DASH_BRAKE_TIMEOUT;
template<typename ContainerAllocator>
constexpr uint32_t CanStatus_<ContainerAllocator>::DASH_BUTTONS_TIMEOUT;
template<typename ContainerAllocator>
constexpr uint32_t CanStatus_<ContainerAllocator>::DASH_FRONT_HALL_TIMEOUT;
template<typename ContainerAllocator>
constexpr uint32_t CanStatus_<ContainerAllocator>::AUX_PUMPS_FANS_TIMEOUT;
template<typename ContainerAllocator>
constexpr uint32_t CanStatus_<ContainerAllocator>::DASH_BOOLS_TIMEOUT;
template<typename ContainerAllocator>
constexpr uint32_t CanStatus_<ContainerAllocator>::EBS_TANK_PRESSURE_TIMEOUT;
template<typename ContainerAllocator>
constexpr uint32_t CanStatus_<ContainerAllocator>::AMI_SELECTED_MISSION_TIMEOUT;
template<typename ContainerAllocator>
constexpr uint32_t CanStatus_<ContainerAllocator>::SWA_STATUS_TIMEOUT;
template<typename ContainerAllocator>
constexpr uint32_t CanStatus_<ContainerAllocator>::EBS_SUPERVISOR_TIMEOUT;
template<typename ContainerAllocator>
constexpr uint32_t CanStatus_<ContainerAllocator>::EBS_SERVICE_BRAKE_TIMEOUT;
template<typename ContainerAllocator>
constexpr uint32_t CanStatus_<ContainerAllocator>::INVERTER_ADU_TIMEOUT;
template<typename ContainerAllocator>
constexpr uint32_t CanStatus_<ContainerAllocator>::ECU_PARAMS_ACTUAL_TIMEOUT;
template<typename ContainerAllocator>
constexpr uint32_t CanStatus_<ContainerAllocator>::COOLING_INFO_TIMEOUT;
template<typename ContainerAllocator>
constexpr uint32_t CanStatus_<ContainerAllocator>::ISABELLEN_TIMEOUT;
template<typename ContainerAllocator>
constexpr uint32_t CanStatus_<ContainerAllocator>::ECU_CONTROL_SYSTEMS_TIMEOUT;
template<typename ContainerAllocator>
constexpr uint32_t CanStatus_<ContainerAllocator>::ECU_ISABELLEN_TIMEOUT;
template<typename ContainerAllocator>
constexpr uint32_t CanStatus_<ContainerAllocator>::INV_LEFT_INFO_TIMEOUT;
template<typename ContainerAllocator>
constexpr uint32_t CanStatus_<ContainerAllocator>::INV_RIGHT_INFO_TIMEOUT;
template<typename ContainerAllocator>
constexpr int32_t CanStatus_<ContainerAllocator>::CAN_STATE_ERROR_ACTIVE;
template<typename ContainerAllocator>
constexpr int32_t CanStatus_<ContainerAllocator>::CAN_STATE_ERROR_WARNING;
template<typename ContainerAllocator>
constexpr int32_t CanStatus_<ContainerAllocator>::CAN_STATE_ERROR_PASSIVE;
template<typename ContainerAllocator>
constexpr int32_t CanStatus_<ContainerAllocator>::CAN_STATE_BUS_OFF;
template<typename ContainerAllocator>
constexpr int32_t CanStatus_<ContainerAllocator>::CAN_STATE_STOPPED;
template<typename ContainerAllocator>
constexpr int32_t CanStatus_<ContainerAllocator>::CAN_STATE_SLEEPING;
template<typename ContainerAllocator>
constexpr int32_t CanStatus_<ContainerAllocator>::CAN_STATE_MAX;

}  // namespace msg

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__CAN_STATUS__STRUCT_HPP_
