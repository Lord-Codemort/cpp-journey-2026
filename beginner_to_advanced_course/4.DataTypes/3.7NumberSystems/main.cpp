#include <iostream>

int main()
{
  int number1 = 15; // decimal
  int number2 = 017; // octal
  int number3 = 0x0F; // hexadecimal
  int number4 = 0b00001111;

  std::cout << "Decimal: " << number1 << std::endl;
  std::cout << "Octal: " << number2 << std::endl;
  std::cout << "Hexadecimal: " << number3 << std::endl;
  std::cout << "Binary: " << number4 << std::endl;

  return 0;
}