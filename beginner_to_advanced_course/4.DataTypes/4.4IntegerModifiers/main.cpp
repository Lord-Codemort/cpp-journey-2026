#include <iostream>

int main()
{
  signed int value1 {10};
  signed int value2 {-300};

  std::cout << "Value 1: " << value1 << std::endl;
  std::cout << "Value 2: " << value2 << std::endl;
  std::cout << "Size value1: " << sizeof(value1) << " bytes" << std::endl;
  std::cout << "Size value2: " << sizeof(value2) << " bytes" << std::endl;

  unsigned int value3 {4};
  unsigned int value4 {44};
  std::cout << "Value 3: " << value3 << std::endl;
  std::cout << "Value 4: " << value4 << std::endl;
  std::cout << "Size value3: " << sizeof(value3) << " bytes" << std::endl;
  std::cout << "Size value4: " << sizeof(value4) << " bytes" << std::endl;
  return 0;
}