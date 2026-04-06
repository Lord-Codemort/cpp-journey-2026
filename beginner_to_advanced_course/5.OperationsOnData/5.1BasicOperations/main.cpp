#include <iostream>

int main()
{
  // addition
  int num1 = 2;
  int num2 = 5;

  int result = num1 + num2;
  std::cout << "Result: " << result << std::endl;

  // subtraction
  result = num1 - num2;
  std::cout << "Result: " << result << std::endl;
  result = num2 - num1;
  std::cout << "Result: " << result << std::endl;

  // multiplication
  result = num1 * num2;
  std::cout << "Result: " << result << std::endl;

  // division
  result = num2 / num1;
  std::cout << "Result: " << result << std::endl;

  // modulo
  result = num2 % num1;
  std::cout << "Result: " << result << std::endl;

  result = 31 % 10;

  std::cout << "Result: " << result << std::endl;
}