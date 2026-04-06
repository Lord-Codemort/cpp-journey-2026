#include <iostream>

int main()
{
 int value {5};

 value = value + 1;
 std::cout << value << std::endl;

 value = 5;
 value = value - 1;
 std::cout << value << std::endl;

 std::cout << "------------------" << std::endl;
 value = 5;
 std::cout << value++ << std::endl;
 std::cout << value << std::endl;

 std::cout << "------------------" << std::endl;
 value = 5;
 std::cout << value-- << std::endl;
 std::cout << value << std::endl;

 std::cout << "Prefix" << std::endl;
 value = 5;
 std::cout << ++value << std::endl;
 std::cout << value << std::endl;

 std::cout << "------------------" << std::endl;
 value = 5;
 std::cout << --value << std::endl;
 std::cout << value << std::endl;
}