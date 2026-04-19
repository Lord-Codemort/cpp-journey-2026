#include <iostream>
#include <cstring>

template <typename T>
T maximum(T a, T b)
{
  return (a > b) ? a : b;
}

template <>
const char *maximum<const char *>(const char *a, const char *b);

int main()
{
  // int a{10};
  // int b{20};
  // double c{34.5};
  // double d{23.4};
  // std::string e{"Hello"};
  // std::string f{"World"};

  // int maxInt = maximum(a, b);
  // auto maxDouble = maximum(c, d);
  // auto maxString = maximum(e, f);

  const char *g{"wild"};
  const char *h{"animal"};

  const char *result = maximum(g, h);

  std::cout << "max(const char*): " << result << std::endl;

  // std::cout << "max_int: " << maxInt << std::endl;
  // std::cout << "max_double: " << maxDouble << std::endl;
  // std::cout << "max_string: " << maxString << std::endl;
}

template <>
const char *maximum<const char *>(const char *a, const char *b)
{
  return (std::strcmp(a, b) > 0) ? a : b;
}