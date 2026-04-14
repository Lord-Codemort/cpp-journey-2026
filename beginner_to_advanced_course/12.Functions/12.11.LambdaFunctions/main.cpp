#include <iostream>

int main()
{
  // auto func = []()
  // {
  //   std::cout << "Hello, World!" << std::endl;
  // };

  // func();

  // []()
  // {
  //   std::cout << "Hello, World!" << std::endl;
  // }();

  // [](double a, double b)
  // {
  //   std::cout << "a + b = " << a + b << std::endl;
  // }(35.1, 3.5);

  // auto func1 = [](double a, double b)
  // {
  //   std::cout << "a + b = " << a + b << std::endl;
  // };

  // func1(35.1, 3.5);
  // func1(10.0, 20.0);
  // func1(5.5, 4.3);

  // auto result = [](double a, double b)
  // {
  //   return a + b;
  // }(35.1, 3.5);

  // // std::cout << "Result: " << result << std::endl;
  // std::cout << "Result: " << [](double a, double b)
  // {
  //   return a + b;
  // }(35.1, 3.5)
  //           << std::endl;

  // auto func1 = [](double a, double b)
  // {
  //   return a + b;
  // };

  // auto result1 = func1(35.1, 3.5);
  // auto result2 = func1(10.0, 20.0);
  // auto result3 = func1(5.5, 4.3);

  // std::cout << "Result 1: " << result1 << std::endl;
  // std::cout << "Result 2: " << result2 << std::endl;
  // std::cout << "Result 3: " << result3 << std::endl;

  auto func3 = [](double a, double b) -> int
  {
    return a + b;
  };

  auto func4 = [](double a, double b)
  {
    return a + b;
  };

  double a{6.9};
  double b{3.4};

  auto result3 = func3(a, b);
  auto result4 = func4(a, b);

  std::cout << "Result 3: " << result3 << std::endl;
  std::cout << "sizeof(result3): " << sizeof(result3) << std::endl;
  std::cout << "Result 4: " << result4 << std::endl;
  std::cout << "sizeof(result4): " << sizeof(result4) << std::endl;
}
