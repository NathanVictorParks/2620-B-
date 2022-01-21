#include "Restaurant_g.h"
#include <iostream>

int main() {
  RestaurantGuide RG("Name", "Cuisine");
  RG.setCuisine("Food");
  std::cout << RG.getCuisine();
}
