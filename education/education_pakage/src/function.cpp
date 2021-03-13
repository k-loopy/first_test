#include <ros/ros.h>

int DoMinus(int value_1, int value_2)
{
  return value_1-value_2;
}

int DoPlus(int value_1, int value_2)
{
  return value_1+value_2;
}

int Domake(int value_1, int value_2, int value_3)
{
  return value_1+value_2+value_3;
}
int main(int argc, char **argv)
{
  ros::init(argc, argv, "function_node");
  ros::NodeHandle nh;

  int box_1 = 1;
  int box_2 = 3;
  int box_3 = 2;
  int box_4 = 4;

  std::cout << "box_1 + box_2 = " << DoPlus(box_1, box_2) << std::endl;
  std::cout << "box_1 - box_2 = " << DoMinus(box_1, box_2) << std::endl;
  std::cout << "box_4 + box_3 + box_2 = " << Domake(box_4, box_3, box_2) << std::endl;
}
