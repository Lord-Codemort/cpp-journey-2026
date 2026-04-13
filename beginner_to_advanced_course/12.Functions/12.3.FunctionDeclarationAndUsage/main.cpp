#include <iostream>

int max(int, int);
int min(int, int);
int inc_mult(int, int);

int main()
{
  int x{5};
  int y{2};

  int result = min(x, y);
  std::cout << "min : " << result << std::endl;

  result = inc_mult(6, 6);
  std::cout << "inc_mult : " << result << std::endl;
}

int max(int a, int b)
{
  if (a > b)
  {
    return a;
  }
  else
  {
    return b;
  }
}

int min(int a, int b)
{
  if (a < b)
  {
    return a;
  }
  else
  {
    return b;
  }
}

int inc_mult(int a, int b)
{
  return ((++a) * (++b));
}