#include <ros/ros.h>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "while_node");
  ros::NodeHandle nh;

  int box_1 = 0;

  while (box_1 < 10)
  {
    std::cout << "box_1 : " << box_1 << std::endl;
    box_1++;
  }

  return 0;
}
