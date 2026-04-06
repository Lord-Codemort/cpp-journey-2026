#include <iostream>

int main()
{
  int a {6};
  int b {5};
  int c {3};
  int d {9};
  int e {7};
  int f {4};
  int g {8};

  int result = a + b * c - d/e - f + g;
  std::cout << result << std::endl;

  result = (a + (b * c)) - ((d/e) - (f + g));
  std::cout << result << std::endl;

  return 0;
}