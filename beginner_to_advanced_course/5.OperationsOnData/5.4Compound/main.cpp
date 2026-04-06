#include <iostream>

int main()
{
  int value = 45;

  value += 5;
  std::cout << "the value is: " << value << std::endl;

  value -= 14;
  std::cout << "the value is: " << value << std::endl;

  value *= 2;
  std::cout << "the value is: " << value << std::endl;

  value /= 8;
  std::cout << "the value is: " << value << std::endl;

  value %= 8;
  std::cout << "the value is: " << value << std::endl;

  return 0;
}