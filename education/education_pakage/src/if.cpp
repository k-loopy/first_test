#include <ros/ros.h>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "if_node");
  ros::NodeHandle nh;

  int box_1 = 3;

  if(box_1 == 0)
  {
    std::cout << "box_1 is 0" << std::endl;
  }
  else if(box_1 == 1)
  {
    std::cout << "box_1 is 1" << std::endl;
  }
  else
  {
    std::cout << "box_1 is " << box_1 << std::endl;
  }

  return 0;
}
