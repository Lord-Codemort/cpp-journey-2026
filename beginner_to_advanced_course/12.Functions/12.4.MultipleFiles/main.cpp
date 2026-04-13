#include <iostream>
#include "compare.h"
#include "operations.h"

int main()
{
  int maximum = max(34, 56);
  std::cout << " max : " << maximum << std::endl;

  int minimum = min(156, 33);
  std::cout << " min : " << minimum << std::endl;

  int result = incr_mult(5, 10);
  std::cout << " incr_mult : " << result << std::endl;

  return 0;
}
