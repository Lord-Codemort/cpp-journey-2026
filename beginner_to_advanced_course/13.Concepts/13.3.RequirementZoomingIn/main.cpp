#include <iostream>
#include <concepts>

template <typename T>
concept TinyType = requires(T t) {
  sizeof(T) <= 4; // only enforces syntax
  requires sizeof(T) <= 4;
};

template <typename T>
concept Addable = requires(T a, T b) {
  { a + b } noexcept -> std::convertible_to<int>;
};

Addable auto add(Addable auto a, Addable auto b)
{
  return a + b;
}

int main()
{
  // double x{67};
  // double y{56};

  std::string x{"hello"};
  std::string y{"world"};

  auto result = add(x, y);

  std::cout << "Result: " << result << std::endl;
  std::cout << "sizeof(result): " << sizeof(result) << std::endl;

  return 0;
}
