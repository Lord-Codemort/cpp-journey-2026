#include <iostream>

int main()
{
  int max {};
  int a {2};
  int b {560};

   max = (a > b) ? a : 22.5f;
  std::cout << "The maximum value is: " << max << std::endl;
  return 0;
}