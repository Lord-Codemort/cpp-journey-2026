#include <iostream>

class Dog
{
public:
  Dog() = default;
  void print_info() const
  {
    std::cout << "Leg count: " << leg_count << std::endl;
    std::cout << "Arm count: " << arm_count << std::endl;
  }

  void do_something() {}

private:
  size_t leg_count;
  size_t arm_count;
  int *p_age;
};

int main()
{
  Dog dog1;
  std::cout << "sizeof(size_t): " << sizeof(size_t) << std::endl;
  std::cout << "sizeof(int*):" << sizeof(int *) << std::endl;
  std::cout << "sizeof(Dog): " << sizeof(Dog) << std::endl;

  std::string name{"Hello World and new people there"};
  std::cout << "sizeof(name): " << sizeof(name) << std::endl;
}