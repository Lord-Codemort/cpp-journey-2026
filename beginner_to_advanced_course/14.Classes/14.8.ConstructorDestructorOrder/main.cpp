#include <iostream>
#include <string_view>

class Dog
{
public:
  Dog() = default;
  Dog(std::string_view name_param, std::string_view breed_param, int p_age_param);
  ~Dog();

private:
  std::string name;
  std::string breed;
  int *p_age{nullptr};
};

Dog::Dog(std::string_view name_param, std::string_view breed_param, int p_age_param)
{
  name = name_param;
  breed = breed_param;
  p_age = new int;
  *p_age = p_age_param;
  std::cout << "Dog constructor called for " << name << std::endl;
}

Dog::~Dog()
{
  delete p_age;
  p_age = nullptr;
  std::cout << "Destructor called for " << name << std::endl;
}

int main()
{
  Dog dog1("Buddy", "Golden Retriever", 5);
  Dog dog2("Max", "Labrador Retriever", 3);
  Dog dog3("Charlie", "Poodle", 2);
  Dog dog4("Rocky", "Bulldog", 4);
  return 0;
}