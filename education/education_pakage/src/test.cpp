#include <stdio.h>
#include <iostream>

int main()
{
  int count = 0;

  std::cout << "값 입력 : ";
  std::cin >> count;

  if(count > 5)
  {
    for (int i =0;i <10;i++)
    {
      std::cout << "Hello Wolrd!" << std::endl;
    }
  }
  else
  {
    for (int i =0;i <5;i++)
    {
      std::cout << "Hello Wolrd!" << std::endl;
    }
  }

  return 0;
}
