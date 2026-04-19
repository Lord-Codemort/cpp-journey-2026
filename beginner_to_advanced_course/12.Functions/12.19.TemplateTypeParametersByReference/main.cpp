#include <iostream>

template <typename T>
T maximum(T a, T b);

template <typename T>
const T &maximum1(const T &a, const T &b);

int main()
{
  double a{23.5};
  double b{42.7};

  auto result1 = maximum1(a, b);
  std::cout << "out - &a: " << &a << std::endl;
  std::cout << "out - &b: " << &b << std::endl;
  std::cout << "result1: " << result1 << std::endl;
}

template <typename T>
T maximum(T a, T b)
{
  std::cout << "in - &a: " << &a << std::endl;
  std::cout << "in - &b: " << &b << std::endl;
  return (a > b) ? a : b;
}

template <typename T>
const T &maximum1(const T &a, const T &b)
{
  std::cout << "in - &a: " << &a << std::endl;
  std::cout << "in - &b: " << &b << std::endl;
  return (a > b) ? a : b;
}