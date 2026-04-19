#include <iostream>
#include <concepts>

template <typename T>
concept TinyType = requires(T t) {
  sizeof(T) <= 4;
  requires sizeof(T) <= 4;
};

template <typename T>
// requires std::integral<T> || std::floating_point<T>
// requires std::integral<T> && TinyType<T>
  requires std::integral<T> && requires(T t) {
    sizeof(T) <= 4;
    requires sizeof(T) <= 4;
  }
T add(T a, T b)
{
  return a + b;
}

int main()
{
  long long int x{5};
  long long int y{10};

  add(x, y);

  // std::cout << sizeof(long long int) << std::endl;
}