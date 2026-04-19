#include <iostream>

template <typename T>
const T &maximum(const T &a, const T &b);

template <typename T>
T maximum(T a, T b);

int main()
{
  double a{23.5};
  double b{42.7};

  std::cout << "Out - &a: " << &a << " - &b: " << &b << std::endl;
  auto result = maximum(a, b);
  std::cout << "Out - &a: " << &a << " - &b: " << &b << std::endl;

  return 0;
}

template <typename T>
const T &maximum(const T &a, const T &b)
{
  std::cout << "In - &a: " << &a << " - &b: " << &b << std::endl;
  return (a > b) ? a : b;
}

template <typename T>
T maximum(T a, T b)
{
  std::cout << "In - &a: " << &a << " - &b: " << &b << std::endl;
  return (a > b) ? a : b;
}