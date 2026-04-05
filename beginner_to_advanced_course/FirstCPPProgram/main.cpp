#include <iostream>

consteval int get_value() {
  return 3;
}

int main()
{
  std::cout << "Number1" << std::endl;
  std::cout << "Number2" << std::endl;
  return 0;
}