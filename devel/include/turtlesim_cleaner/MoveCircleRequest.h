// Generated by gencpp from file turtlesim_cleaner/MoveCircleRequest.msg
// DO NOT EDIT!


#ifndef TURTLESIM_CLEANER_MESSAGE_MOVECIRCLEREQUEST_H
#define TURTLESIM_CLEANER_MESSAGE_MOVECIRCLEREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace turtlesim_cleaner
{
template <class ContainerAllocator>
struct MoveCircleRequest_
{
  typedef MoveCircleRequest_<ContainerAllocator> Type;

  MoveCircleRequest_()
    : s(0.0)
    , r(0.0)  {
    }
  MoveCircleRequest_(const ContainerAllocator& _alloc)
    : s(0.0)
    , r(0.0)  {
  (void)_alloc;
    }



   typedef float _s_type;
  _s_type s;

   typedef float _r_type;
  _r_type r;





  typedef boost::shared_ptr< ::turtlesim_cleaner::MoveCircleRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::turtlesim_cleaner::MoveCircleRequest_<ContainerAllocator> const> ConstPtr;

}; // struct MoveCircleRequest_

typedef ::turtlesim_cleaner::MoveCircleRequest_<std::allocator<void> > MoveCircleRequest;

typedef boost::shared_ptr< ::turtlesim_cleaner::MoveCircleRequest > MoveCircleRequestPtr;
typedef boost::shared_ptr< ::turtlesim_cleaner::MoveCircleRequest const> MoveCircleRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::turtlesim_cleaner::MoveCircleRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::turtlesim_cleaner::MoveCircleRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::turtlesim_cleaner::MoveCircleRequest_<ContainerAllocator1> & lhs, const ::turtlesim_cleaner::MoveCircleRequest_<ContainerAllocator2> & rhs)
{
  return lhs.s == rhs.s &&
    lhs.r == rhs.r;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::turtlesim_cleaner::MoveCircleRequest_<ContainerAllocator1> & lhs, const ::turtlesim_cleaner::MoveCircleRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace turtlesim_cleaner

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::turtlesim_cleaner::MoveCircleRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::turtlesim_cleaner::MoveCircleRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::turtlesim_cleaner::MoveCircleRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::turtlesim_cleaner::MoveCircleRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::turtlesim_cleaner::MoveCircleRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::turtlesim_cleaner::MoveCircleRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::turtlesim_cleaner::MoveCircleRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6d766f6a2db01255c7ae96df4f8888c5";
  }

  static const char* value(const ::turtlesim_cleaner::MoveCircleRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6d766f6a2db01255ULL;
  static const uint64_t static_value2 = 0xc7ae96df4f8888c5ULL;
};

template<class ContainerAllocator>
struct DataType< ::turtlesim_cleaner::MoveCircleRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "turtlesim_cleaner/MoveCircleRequest";
  }

  static const char* value(const ::turtlesim_cleaner::MoveCircleRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::turtlesim_cleaner::MoveCircleRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 s\n"
"float32 r\n"
;
  }

  static const char* value(const ::turtlesim_cleaner::MoveCircleRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::turtlesim_cleaner::MoveCircleRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.s);
      stream.next(m.r);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MoveCircleRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::turtlesim_cleaner::MoveCircleRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::turtlesim_cleaner::MoveCircleRequest_<ContainerAllocator>& v)
  {
    s << indent << "s: ";
    Printer<float>::stream(s, indent + "  ", v.s);
    s << indent << "r: ";
    Printer<float>::stream(s, indent + "  ", v.r);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TURTLESIM_CLEANER_MESSAGE_MOVECIRCLEREQUEST_H
