#include "Restaurant_g.h"

RestaurantGuide::RestaurantGuide() {
  Name = "";
  Cuisine = "";
  for (int i = 0; i < OPTIONSIZE/*equals 5 and is defined in .h*/; i++) {
    CustomerRating[i] = 0;
  }
}

RestaurantGuide::RestaurantGuide(std::string s1, std::string s2) {
  Name = s1;
  Cuisine = s2;
  for (int i = 0; i < OPTIONSIZE/*equals 5 and is defined in .h*/; i++) {
    CustomerRating[i] = 0;
  }
}

std::string RestaurantGuide::getName() {
  return Name;
}

void RestaurantGuide::setName(std::string newName) {
  Name = newName;
}

std::string RestaurantGuide::getCuisine() {
  return Cuisine;
}
