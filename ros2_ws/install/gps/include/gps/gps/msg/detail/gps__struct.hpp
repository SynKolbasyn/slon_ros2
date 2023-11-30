// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gps:msg/GPS.idl
// generated code does not contain a copyright notice

#ifndef GPS__MSG__DETAIL__GPS__STRUCT_HPP_
#define GPS__MSG__DETAIL__GPS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__gps__msg__GPS __attribute__((deprecated))
#else
# define DEPRECATED__gps__msg__GPS __declspec(deprecated)
#endif

namespace gps
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GPS_
{
  using Type = GPS_<ContainerAllocator>;

  explicit GPS_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lat = 0.0f;
      this->lon = 0.0f;
    }
  }

  explicit GPS_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lat = 0.0f;
      this->lon = 0.0f;
    }
  }

  // field types and members
  using _lat_type =
    float;
  _lat_type lat;
  using _lon_type =
    float;
  _lon_type lon;

  // setters for named parameter idiom
  Type & set__lat(
    const float & _arg)
  {
    this->lat = _arg;
    return *this;
  }
  Type & set__lon(
    const float & _arg)
  {
    this->lon = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gps::msg::GPS_<ContainerAllocator> *;
  using ConstRawPtr =
    const gps::msg::GPS_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gps::msg::GPS_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gps::msg::GPS_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gps::msg::GPS_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gps::msg::GPS_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gps::msg::GPS_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gps::msg::GPS_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gps::msg::GPS_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gps::msg::GPS_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gps__msg__GPS
    std::shared_ptr<gps::msg::GPS_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gps__msg__GPS
    std::shared_ptr<gps::msg::GPS_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GPS_ & other) const
  {
    if (this->lat != other.lat) {
      return false;
    }
    if (this->lon != other.lon) {
      return false;
    }
    return true;
  }
  bool operator!=(const GPS_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GPS_

// alias to use template instance with default allocator
using GPS =
  gps::msg::GPS_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace gps

#endif  // GPS__MSG__DETAIL__GPS__STRUCT_HPP_
