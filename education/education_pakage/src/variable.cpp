#include <ros/ros.h>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "variable_node");
  ros::NodeHandle nh;

  int box_1;
  double box_2;
  std::string name_box;

  box_1 = 1;
  box_2 = 1.1;
  name_box = "pigeon";

  std::cout << "box_1 : " << box_1 << std::endl;
  std::cout << "box_2 : " << box_2 << std::endl;
  std::cout << "name_box : " << name_box << std::endl;

  return 0;
}
