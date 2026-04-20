#include <iostream>

class Dog
{
public:
  std::string m_name;
};

struct Cat
{
public:
  std::string m_name;
};

struct Point
{
  double x;
  double y;
};

void print_point(const Point &point)
{
  std::cout << "Point coordinates: (" << point.x << ", " << point.y << ")" << std::endl;
}

int main()
{
  Dog dog1;
  Cat cat1;
  Point point1;

  dog1.m_name = "Rover";

  cat1.m_name = "Andy";

  std::cout << "Cat's name: " << cat1.m_name << std::endl;
  std::cout << "Dog's name: " << dog1.m_name << std::endl;

  point1.x = 3.5;
  point1.y = 4.5;
  print_point(point1);

  point1.x = 33.5;
  point1.y = 1.5;
  print_point(point1);
}