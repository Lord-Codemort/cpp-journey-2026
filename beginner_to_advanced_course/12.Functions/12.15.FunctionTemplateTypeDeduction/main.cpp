#include <iostream>
#include <string>

template <typename T>
T maximum(T a, T b)
{
  return (a > b) ? a : b;
}

int main()
{
  int a{10};
  int b{23};
  double c{34.7};
  double d{12.5};
  std::string e{"Hello"};
  std::string f{"World"};

  auto max = maximum<double>(c, d);
  std::cout << "max: " << max << std::endl;
}