#include <iostream>
#include "cylinder.h"

int main()
{
  Cylinder cylinder1(2, 5);
  auto result = (10 <=> 20) > 0;
  std::cout << result << std::endl;
}