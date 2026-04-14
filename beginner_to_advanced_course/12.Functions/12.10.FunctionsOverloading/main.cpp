#include <iostream>

int max(int a, int b)
{
  std::cout << "int overload called" << std::endl;
  return (a > b) ? a : b;
}

double max(double a, double b)
{
  std::cout << "double overload called" << std::endl;
  return (a > b) ? a : b;
}

double max(int a, double b)
{
  std::cout << "int-double overload called" << std::endl;
  return (a > b) ? a : b;
}

double max(double a, int b)
{
  std::cout << "double-int overload called" << std::endl;
  return (a > b) ? a : b;
}

double max(double a, int b, int c)
{
  std::cout << "double-int-int overload called" << std::endl;
  return (a > b && a > c) ? a : (b > c) ? b
                                        : c;
}

std::string max(const std::string &a, const std::string &b)
{
  std::cout << "string overload called" << std::endl;
  return (a > b) ? a : b;
}

std::string_view max(std::string_view a, std::string_view b)
{
  std::cout << "string_view overload called" << std::endl;
  return (a > b) ? a : b;
}

int main()
{
  int x{4};
  int y{9};
  double a{5.4};
  double b{3.2};
  std::string str1{"Hello"};
  std::string str2{"World"};
  std::string_view sv1{str1};
  std::string_view sv2{str2};

  auto res = max(sv1, sv2);

  return 0;
}