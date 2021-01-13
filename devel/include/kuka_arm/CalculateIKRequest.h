// Generated by gencpp from file kuka_arm/CalculateIKRequest.msg
// DO NOT EDIT!


#ifndef KUKA_ARM_MESSAGE_CALCULATEIKREQUEST_H
#define KUKA_ARM_MESSAGE_CALCULATEIKREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose.h>

namespace kuka_arm
{
template <class ContainerAllocator>
struct CalculateIKRequest_
{
  typedef CalculateIKRequest_<ContainerAllocator> Type;

  CalculateIKRequest_()
    : poses()  {
    }
  CalculateIKRequest_(const ContainerAllocator& _alloc)
    : poses(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::geometry_msgs::Pose_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Pose_<ContainerAllocator> >::other >  _poses_type;
  _poses_type poses;





  typedef boost::shared_ptr< ::kuka_arm::CalculateIKRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kuka_arm::CalculateIKRequest_<ContainerAllocator> const> ConstPtr;

}; // struct CalculateIKRequest_

typedef ::kuka_arm::CalculateIKRequest_<std::allocator<void> > CalculateIKRequest;

typedef boost::shared_ptr< ::kuka_arm::CalculateIKRequest > CalculateIKRequestPtr;
typedef boost::shared_ptr< ::kuka_arm::CalculateIKRequest const> CalculateIKRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kuka_arm::CalculateIKRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kuka_arm::CalculateIKRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kuka_arm::CalculateIKRequest_<ContainerAllocator1> & lhs, const ::kuka_arm::CalculateIKRequest_<ContainerAllocator2> & rhs)
{
  return lhs.poses == rhs.poses;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kuka_arm::CalculateIKRequest_<ContainerAllocator1> & lhs, const ::kuka_arm::CalculateIKRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kuka_arm

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::kuka_arm::CalculateIKRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kuka_arm::CalculateIKRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kuka_arm::CalculateIKRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kuka_arm::CalculateIKRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kuka_arm::CalculateIKRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kuka_arm::CalculateIKRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kuka_arm::CalculateIKRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "db8ce58a1deaf0d1f2e7fdd257963e81";
  }

  static const char* value(const ::kuka_arm::CalculateIKRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdb8ce58a1deaf0d1ULL;
  static const uint64_t static_value2 = 0xf2e7fdd257963e81ULL;
};

template<class ContainerAllocator>
struct DataType< ::kuka_arm::CalculateIKRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kuka_arm/CalculateIKRequest";
  }

  static const char* value(const ::kuka_arm::CalculateIKRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kuka_arm::CalculateIKRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/Pose[] poses\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::kuka_arm::CalculateIKRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kuka_arm::CalculateIKRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.poses);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CalculateIKRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kuka_arm::CalculateIKRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kuka_arm::CalculateIKRequest_<ContainerAllocator>& v)
  {
    s << indent << "poses[]" << std::endl;
    for (size_t i = 0; i < v.poses.size(); ++i)
    {
      s << indent << "  poses[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "    ", v.poses[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // KUKA_ARM_MESSAGE_CALCULATEIKREQUEST_H
