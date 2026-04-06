#include <iostream>

int main()
{
  char character1 {'A'};
  char character2 {'B'};
  char character3 {'C'};
  char character4 {'D'};

  std::cout << character1 << std::endl;
  std::cout << character2 << std::endl;
  std::cout << character3 << std::endl;
  std::cout << character4 << std::endl;

  std::cout << std::endl;

  char value = 65;

  std::cout << value << std::endl;
  std::cout << static_cast<int>(value) << std::endl;

  return 0;
}