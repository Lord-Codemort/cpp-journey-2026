#include <iostream>
#include "person.h"

double weight{};

double add(double a, double b);

struct Point
{
  double m_x{};
  double m_y{};
};

int main()
{
  Person p1("John Snow", 34);
  p1.print_info();
}
