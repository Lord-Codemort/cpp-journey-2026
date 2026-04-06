#include <iostream>

int main()
{
  int var1 {123};
  std::cout << var1 << std::endl;

  var1 = 55;
  std::cout << var1 << std::endl;

  std::cout << std::endl;

  double var2 {456.789};
  std::cout << var2 << std::endl;

  var2 = 123.456;
  std::cout << var2 << std::endl;

  std::cout << std::endl;

  bool var3 {true};
  std::cout << std::boolalpha;
  std::cout << var3 << std::endl;

  var3 = false;
  std::cout << std::boolalpha;
  std::cout << var3 << std::endl;

  std::cout << std::endl;

  // auto type deduction
  auto var4 {333u};
  std::cout << var4 << std::endl;

  var4 = -22;
  std::cout << var4 << std::endl;
  return 0;
}