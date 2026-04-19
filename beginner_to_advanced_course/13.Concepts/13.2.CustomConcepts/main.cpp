#include <iostream>
#include <concepts>

// template <typename T>
// concept MyIntegral = std::is_integral_v<T>;

// MyIntegral auto add(MyIntegral auto a, MyIntegral auto b)
// {
//   return a + b;
// }

template <typename T>
concept Multipliable = requires(T a, T b) {
  a * b;
};

template <typename T>
concept Incrementable = requires(T a) {
  a++;
  ++a;
  a += 1;
};

template <typename T>
  requires Incrementable<T>
T add(T a, T b)
{
  return a + b;
}

int main()
{
  double x{6};
  double y{7};

  // std::string x{"Hello"};
  // std::string y{" World"};

  add(x, y);

  std::cout << "Result: " << add(x, y) << std::endl;

  std::cout << "Done!" << std::endl;

  return 0;
}