#include <ros/ros.h>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "for_node");
  ros::NodeHandle nh;

  int box_1 = 0;

  for (int i=0; i<10; i++)
  {
    std::cout << "box_1 : " << box_1 << std::endl;
    box_1++;
  }

  return 0;
}
