#include <iostream>

int main()
{
  bool a = true;
  bool b = false;
  bool c = true;

  std::cout << std::boolalpha;
  std::cout << "a && b = " << (a && b) << std::endl;
  std::cout << "a || b = " << (a || b) << std::endl;
  std::cout << "!a = " << !a << std::endl;
  std::cout << "a && c = " << (a && c) << std::endl;
  std::cout << "b || c = " << (b || c) << std::endl;

  int d = 10;
  int e = 20;
  int f = 30;

  std::cout << "(d > e) && (e < f) = " << ((d > e) && (e < f)) << std::endl;
  return 0;
}