#include <iostream>
#include <string>

template <typename T, typename A>
T maximum(T a, A b)
{
  return a > b ? a : b;
}

int main()
{
  // std::string x{"Hello"};
  // std::string y{"World"};
  // auto result = maximum(x, y);
  // std::cout << result << std::endl;
  double x{5.3};
  int y{10};
  // auto result = maximum(x, y);
  // std::cout << result << std::endl;

  auto result = maximum(x, y);
  std::cout << result << std::endl;
}