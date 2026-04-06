#include <iostream>
#include <iomanip>

int main()
{
  float number1 = {1.1234567890f};
  double number2 = {1.12345678901234567890};
  long double number3 = {1.123456789012345678901234567890L};

  std::cout << "sizeof float:" << sizeof(float) << std::endl;
  std::cout << "sizeof double:" << sizeof(double) << std::endl;
  std::cout << "sizeof long double:" << sizeof(long double) << std::endl;

  // precision
  std::cout << std::setprecision(20);
  std::cout << "number1: " << number1 << std::endl;
  std::cout << "number2: " << number2 << std::endl;
  std::cout << "number3: " << number3 << std::endl;

  double number4 {192400023.0};

  std::cout << "number4: " << number4 << std::endl;

  double number5 {192400023};
  double number6 {1.92400023e8};

  std::cout << "number5: " << number5 << std::endl;
  std::cout << "number6: " << number6 << std::endl;

  // infinity and nan
  double number11 {50};
  double number12 {};

  double number13 {number11 / number12};
  std::cout << "number13: " << number13 << std::endl;

  std::cout << "0/0: " << (0 / 0) << std::endl;
}