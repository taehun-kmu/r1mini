// Generated by gencpp from file omo_r1mini_bringup/SaveColorRequest.msg
// DO NOT EDIT!


#ifndef OMO_R1MINI_BRINGUP_MESSAGE_SAVECOLORREQUEST_H
#define OMO_R1MINI_BRINGUP_MESSAGE_SAVECOLORREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace omo_r1mini_bringup
{
template <class ContainerAllocator>
struct SaveColorRequest_
{
  typedef SaveColorRequest_<ContainerAllocator> Type;

  SaveColorRequest_()
    : red(0)
    , green(0)
    , blue(0)  {
    }
  SaveColorRequest_(const ContainerAllocator& _alloc)
    : red(0)
    , green(0)
    , blue(0)  {
  (void)_alloc;
    }



   typedef int64_t _red_type;
  _red_type red;

   typedef int64_t _green_type;
  _green_type green;

   typedef int64_t _blue_type;
  _blue_type blue;





  typedef boost::shared_ptr< ::omo_r1mini_bringup::SaveColorRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::omo_r1mini_bringup::SaveColorRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SaveColorRequest_

typedef ::omo_r1mini_bringup::SaveColorRequest_<std::allocator<void> > SaveColorRequest;

typedef boost::shared_ptr< ::omo_r1mini_bringup::SaveColorRequest > SaveColorRequestPtr;
typedef boost::shared_ptr< ::omo_r1mini_bringup::SaveColorRequest const> SaveColorRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::omo_r1mini_bringup::SaveColorRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::omo_r1mini_bringup::SaveColorRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::omo_r1mini_bringup::SaveColorRequest_<ContainerAllocator1> & lhs, const ::omo_r1mini_bringup::SaveColorRequest_<ContainerAllocator2> & rhs)
{
  return lhs.red == rhs.red &&
    lhs.green == rhs.green &&
    lhs.blue == rhs.blue;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::omo_r1mini_bringup::SaveColorRequest_<ContainerAllocator1> & lhs, const ::omo_r1mini_bringup::SaveColorRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace omo_r1mini_bringup

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::omo_r1mini_bringup::SaveColorRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::omo_r1mini_bringup::SaveColorRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::omo_r1mini_bringup::SaveColorRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::omo_r1mini_bringup::SaveColorRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::omo_r1mini_bringup::SaveColorRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::omo_r1mini_bringup::SaveColorRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::omo_r1mini_bringup::SaveColorRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8b210d51c86d003e1192527182de7381";
  }

  static const char* value(const ::omo_r1mini_bringup::SaveColorRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8b210d51c86d003eULL;
  static const uint64_t static_value2 = 0x1192527182de7381ULL;
};

template<class ContainerAllocator>
struct DataType< ::omo_r1mini_bringup::SaveColorRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "omo_r1mini_bringup/SaveColorRequest";
  }

  static const char* value(const ::omo_r1mini_bringup::SaveColorRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::omo_r1mini_bringup::SaveColorRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int64 red\n"
"int64 green\n"
"int64 blue\n"
;
  }

  static const char* value(const ::omo_r1mini_bringup::SaveColorRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::omo_r1mini_bringup::SaveColorRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.red);
      stream.next(m.green);
      stream.next(m.blue);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SaveColorRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::omo_r1mini_bringup::SaveColorRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::omo_r1mini_bringup::SaveColorRequest_<ContainerAllocator>& v)
  {
    s << indent << "red: ";
    Printer<int64_t>::stream(s, indent + "  ", v.red);
    s << indent << "green: ";
    Printer<int64_t>::stream(s, indent + "  ", v.green);
    s << indent << "blue: ";
    Printer<int64_t>::stream(s, indent + "  ", v.blue);
  }
};

} // namespace message_operations
} // namespace ros

#endif // OMO_R1MINI_BRINGUP_MESSAGE_SAVECOLORREQUEST_H