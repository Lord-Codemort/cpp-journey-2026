#include <iostream>

int main()
{
  // int elephant_count;

  // int lion_count {};

  // int dog_count {10};

  // int cat_count {15};

  // int domesticated_animal {dog_count + cat_count};


  // std::cout << "elephant count: " << elephant_count << std::endl;

  // int apple_count (5);
  // int orange_count (10);
  // int fruit_count (apple_count + orange_count);

  // int narrowing_conversion (2.9);

  // std::cout << "Fruit count: " << fruit_count << std::endl;
  // std::cout << "Narrowing conversion: " << narrowing_conversion << std::endl;

  int bike_count = 2;
  int truck_count = 7;
  int vehicle_count = bike_count + truck_count;
  int narrowing_conversion = 2.9;

  std::cout << "Vehicle count: " << vehicle_count << std::endl;
  std::cout << "Narrowing conversion: " << narrowing_conversion << std::endl;


  std::cout << "sizeof int: "<< sizeof(int) << std::endl;
  std::cout << "sizeof truck_count: " << sizeof(truck_count) << std::endl;
}