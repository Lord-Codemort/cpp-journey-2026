#include <iostream>

int main()
{
 int num1 = 45;
 int num2 = 60;

 std::cout << "Comparing variables" << std::endl;

 std::cout << std::boolalpha;
 std::cout << (num1 < num2) << std::endl;
 std::cout << (num1 <= num2) << std::endl;
 std::cout << (num1 > num2) << std::endl;
 std::cout << (num1 >= num2) << std::endl;
 std::cout << (num1 == num2) << std::endl;
 std::cout << (num1 != num2) << std::endl;

 bool result = (num1 == num2);
 std::cout << "Result of comparison: " << result << std::endl;
}