#include <iostream>

int main()
{
 short int var1 = 10;
 short int var2 = 20;

 char var3 = 40;
 char var4 = 50;

 std::cout << "sizeof var1: " << sizeof(var1) << std::endl;
 std::cout << "sizeof var2: " << sizeof(var2) << std::endl;
 std::cout << "sizeof var3: " << sizeof(var3) << std::endl;
 std::cout << "sizeof var4: " << sizeof(var4) << std::endl;


 auto res1 = var1 + var2;
 auto res2 = var3 + var4;
 std::cout << "sizeof res1: " << sizeof(res1) << std::endl;
 std::cout << "sizeof res2: " << sizeof(res2) << std::endl;
 return 0;
}