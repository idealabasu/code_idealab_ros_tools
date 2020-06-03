// Generated by gencpp from file tracking/marker.msg
// DO NOT EDIT!


#ifndef TRACKING_MESSAGE_MARKER_H
#define TRACKING_MESSAGE_MARKER_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace tracking
{
template <class ContainerAllocator>
struct marker_
{
  typedef marker_<ContainerAllocator> Type;

  marker_()
    : color()
    , x(0.0)
    , y(0.0)  {
    }
  marker_(const ContainerAllocator& _alloc)
    : color(_alloc)
    , x(0.0)
    , y(0.0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _color_type;
  _color_type color;

   typedef float _x_type;
  _x_type x;

   typedef float _y_type;
  _y_type y;





  typedef boost::shared_ptr< ::tracking::marker_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tracking::marker_<ContainerAllocator> const> ConstPtr;

}; // struct marker_

typedef ::tracking::marker_<std::allocator<void> > marker;

typedef boost::shared_ptr< ::tracking::marker > markerPtr;
typedef boost::shared_ptr< ::tracking::marker const> markerConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tracking::marker_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tracking::marker_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::tracking::marker_<ContainerAllocator1> & lhs, const ::tracking::marker_<ContainerAllocator2> & rhs)
{
  return lhs.color == rhs.color &&
    lhs.x == rhs.x &&
    lhs.y == rhs.y;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::tracking::marker_<ContainerAllocator1> & lhs, const ::tracking::marker_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace tracking

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::tracking::marker_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tracking::marker_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tracking::marker_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tracking::marker_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tracking::marker_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tracking::marker_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tracking::marker_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9eab6da5b2968819e8b305355e8d814c";
  }

  static const char* value(const ::tracking::marker_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9eab6da5b2968819ULL;
  static const uint64_t static_value2 = 0xe8b305355e8d814cULL;
};

template<class ContainerAllocator>
struct DataType< ::tracking::marker_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tracking/marker";
  }

  static const char* value(const ::tracking::marker_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tracking::marker_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string color\n"
"float32 x\n"
"float32 y\n"
;
  }

  static const char* value(const ::tracking::marker_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tracking::marker_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.color);
      stream.next(m.x);
      stream.next(m.y);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct marker_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tracking::marker_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tracking::marker_<ContainerAllocator>& v)
  {
    s << indent << "color: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.color);
    s << indent << "x: ";
    Printer<float>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<float>::stream(s, indent + "  ", v.y);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TRACKING_MESSAGE_MARKER_H
