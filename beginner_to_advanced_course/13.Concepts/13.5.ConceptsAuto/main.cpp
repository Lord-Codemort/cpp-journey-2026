#include <iostream>
#include <concepts>

std::integral auto add(std::integral auto a, std::integral auto b)
{
  return a + b;
}

int main()
{
  std::floating_point auto result = add(5, 8);
  std::cout << result << std::endl;
}