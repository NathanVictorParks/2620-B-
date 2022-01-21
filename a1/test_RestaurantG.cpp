#include "Restaurant_g.h"
#include <iostream>

int main() {
  RestaurantGuide RG("Name", "Cuisine");
  RG.setName("Nathan");
  std::cout << RG.getName();
}
