#include <iostream>
#include <string_view>

class Dog
{
public:
  Dog() = default;
  Dog(std::string_view name_param, std::string_view breed_param, int p_age_param);
  ~Dog();

  void print_info()
  {
    std::cout << "Dog (" << this << "): " << name << ", " << breed << ", " << *p_age << " years old" << std::endl;
  }
  // Dog *set_dog_name(std::string_view name)
  // {
  //   this->name = name;
  //   return this;
  // }

  // Dog *set_dog_breed(std::string_view breed)
  // {
  //   this->breed = breed;
  //   return this;
  // }

  // Dog *set_dog_age(int age)
  // {
  //   *(this->p_age) = age;
  //   return this;
  // }

  Dog &set_dog_name(std::string_view name)
  {
    this->name = name;
    return *this;
  }

  Dog &set_dog_breed(std::string_view breed)
  {
    this->breed = breed;
    return *this;
  }

  Dog &set_dog_age(int age)
  {
    *(this->p_age) = age;
    return *this;
  }

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
  std::cout << "Dog constructor called for " << name << " at " << this << std::endl;
}

Dog::~Dog()
{
  delete p_age;
  p_age = nullptr;
  std::cout << "Destructor called for " << name << " at " << this << std::endl;
}

int main()
{
  Dog dog1("Fido", "Labrador", 3);

  dog1.print_info();
  // dog1.set_dog_name("Fluffy");
  // dog1.set_dog_breed("Poodle");
  // dog1.set_dog_age(10);
  // dog1.set_dog_name("Fluffy")->set_dog_breed("Poodle")->set_dog_age(10);

  dog1.set_dog_name("Fluffy").set_dog_breed("Poodle").set_dog_age(10);
  dog1.print_info();
  return 0;
}