#include <iostream>

int main()
{
  std::cout << "Hello, World!" << std::endl;

  // run time error
  int value = 8/0;

  std::cout << value << std::endl;
  return 0;
}