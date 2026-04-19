#include <iostream>
#include "cylinder.h"

int main()
{
  Cylinder c1(10, 2);

  std::cout << "Volume of cylinder: " << c1.volume() << std::endl;

  Cylinder *c2 = new Cylinder(11, 20);
  std::cout << "Volume of cylinder: " << (*c2).volume() << std::endl;
  std::cout << "Volume of cylinder: " << c2->volume() << std::endl;

  delete c2;

  Cylinder *p_c1 = &c1;
  std::cout << "Volume of cylinder: " << p_c1->volume() << std::endl;

  std::cout << p_c1->get_base_radius() << std::endl;

  return 0;
}