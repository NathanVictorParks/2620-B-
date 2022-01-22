#include "Restaurant_g.h"

RestaurantGuide::RestaurantGuide() {
  Name = "Unkown";
  Cuisine = "Unknown";
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

void RestaurantGuide::setCuisine(std::string newCusine) {
  Cuisine = newCusine;
}

void RestaurantGuide::addCustomerRating(int num) {
  // precondition checks if given num falls within the array.
  if (num > 0 && num < 6) {
    CustomerRating[num - 1]++;  // [num - 1] because the array starts at 0.
  }
}

float RestaurantGuide::getAverage() {
  float n, d = 0;
    for (int i = 0; i < OPTIONSIZE; i++) {
      n += CustomerRating[i] * (i + 1);
      d += CustomerRating[i];
    }
  if (d > 0) {  // cannot divide by zero.
    return n/d;
  }
  return 0;
  // in the advent that d = 0 return zero because there are no ratings.
}
