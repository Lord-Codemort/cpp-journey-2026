#include <iostream>

void enterBar(size_t age)
{
  if (age >= 18)
  {
    std::cout << "You are " << age << " and can enter the bar." << std::endl;
  }
  else
  {
    std::cout << "You are " << age << " and not old enough to enter the bar. No offense!" << std::endl;
  }
}

int max(int a, int b)
{
  if (a > b)
    return a;
  else
    return b;
}

// int max(int c, int d)
// {
//   if (c > d)
//     return c;
//   else
//     return d;
// }

void say_hello()
{
  std::cout << "Hello, World!" << std::endl;
}

int lucky_number()
{
  return 99;
}

double increment_multiply(double a, double b)
{
  double result = ((++a) * (++b));

  std::cout << "Incremented values: " << a << ", " << b << std::endl;
  return result;
}

int main()
{
  // enterBar(20);
  // enterBar(16);

  // for (size_t i{1}; i < 20; ++i)
  // {
  //   enterBar(i);
  // }

  // int x = 22;
  // int y = 44;
  // int result = max(500, 10);
  // result = max(x, y);
  // std::cout << "The maximum value is: " << result << std::endl;

  // say_hello();
  // int result{};
  // result = lucky_number();
  // std::cout << "Your lucky number is: " << result << std::endl;

  double a = 3.0;
  double b = 4.0;
  double result = increment_multiply(a, b);
  std::cout << "The result is: " << result << std::endl;
  std::cout << "outside the function: " << a << ", " << b << std::endl;
  return 0;
}