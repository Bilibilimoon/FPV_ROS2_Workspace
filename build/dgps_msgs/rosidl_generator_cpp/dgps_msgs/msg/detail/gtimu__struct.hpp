// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dgps_msgs:msg/Gtimu.idl
// generated code does not contain a copyright notice

#ifndef DGPS_MSGS__MSG__DETAIL__GTIMU__STRUCT_HPP_
#define DGPS_MSGS__MSG__DETAIL__GTIMU__STRUCT_HPP_

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
# define DEPRECATED__dgps_msgs__msg__Gtimu __attribute__((deprecated))
#else
# define DEPRECATED__dgps_msgs__msg__Gtimu __declspec(deprecated)
#endif

namespace dgps_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Gtimu_
{
  using Type = Gtimu_<ContainerAllocator>;

  explicit Gtimu_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gtimu = "";
      this->gyro_x = 0.0;
      this->gyro_y = 0.0;
      this->gyro_z = 0.0;
      this->acc_x = 0.0;
      this->acc_y = 0.0;
      this->acc_z = 0.0;
      this->tpr = 0.0;
    }
  }

  explicit Gtimu_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    gtimu(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gtimu = "";
      this->gyro_x = 0.0;
      this->gyro_y = 0.0;
      this->gyro_z = 0.0;
      this->acc_x = 0.0;
      this->acc_y = 0.0;
      this->acc_z = 0.0;
      this->tpr = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _gtimu_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _gtimu_type gtimu;
  using _gyro_x_type =
    double;
  _gyro_x_type gyro_x;
  using _gyro_y_type =
    double;
  _gyro_y_type gyro_y;
  using _gyro_z_type =
    double;
  _gyro_z_type gyro_z;
  using _acc_x_type =
    double;
  _acc_x_type acc_x;
  using _acc_y_type =
    double;
  _acc_y_type acc_y;
  using _acc_z_type =
    double;
  _acc_z_type acc_z;
  using _tpr_type =
    double;
  _tpr_type tpr;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__gtimu(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->gtimu = _arg;
    return *this;
  }
  Type & set__gyro_x(
    const double & _arg)
  {
    this->gyro_x = _arg;
    return *this;
  }
  Type & set__gyro_y(
    const double & _arg)
  {
    this->gyro_y = _arg;
    return *this;
  }
  Type & set__gyro_z(
    const double & _arg)
  {
    this->gyro_z = _arg;
    return *this;
  }
  Type & set__acc_x(
    const double & _arg)
  {
    this->acc_x = _arg;
    return *this;
  }
  Type & set__acc_y(
    const double & _arg)
  {
    this->acc_y = _arg;
    return *this;
  }
  Type & set__acc_z(
    const double & _arg)
  {
    this->acc_z = _arg;
    return *this;
  }
  Type & set__tpr(
    const double & _arg)
  {
    this->tpr = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dgps_msgs::msg::Gtimu_<ContainerAllocator> *;
  using ConstRawPtr =
    const dgps_msgs::msg::Gtimu_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dgps_msgs::msg::Gtimu_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dgps_msgs::msg::Gtimu_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dgps_msgs::msg::Gtimu_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dgps_msgs::msg::Gtimu_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dgps_msgs::msg::Gtimu_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dgps_msgs::msg::Gtimu_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dgps_msgs::msg::Gtimu_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dgps_msgs::msg::Gtimu_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dgps_msgs__msg__Gtimu
    std::shared_ptr<dgps_msgs::msg::Gtimu_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dgps_msgs__msg__Gtimu
    std::shared_ptr<dgps_msgs::msg::Gtimu_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Gtimu_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->gtimu != other.gtimu) {
      return false;
    }
    if (this->gyro_x != other.gyro_x) {
      return false;
    }
    if (this->gyro_y != other.gyro_y) {
      return false;
    }
    if (this->gyro_z != other.gyro_z) {
      return false;
    }
    if (this->acc_x != other.acc_x) {
      return false;
    }
    if (this->acc_y != other.acc_y) {
      return false;
    }
    if (this->acc_z != other.acc_z) {
      return false;
    }
    if (this->tpr != other.tpr) {
      return false;
    }
    return true;
  }
  bool operator!=(const Gtimu_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Gtimu_

// alias to use template instance with default allocator
using Gtimu =
  dgps_msgs::msg::Gtimu_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dgps_msgs

#endif  // DGPS_MSGS__MSG__DETAIL__GTIMU__STRUCT_HPP_
