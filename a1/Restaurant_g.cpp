#include "Restaurant_g.h"

RestaurantG::RestaurantG() {
  Name = "Unkown";
  Cuisine = "Unknown";
  for (int i = 0; i < OPTION_SIZE/*equals 5 and is defined in .h*/; i++) {
    CustomerRating[i] = 0;
  }
}

RestaurantG::RestaurantG(std::string s1, std::string s2) {
  Name = s1;
  Cuisine = s2;
  for (int i = 0; i < OPTION_SIZE/*equals 5 and is defined in .h*/; i++) {
    CustomerRating[i] = 0;
  }
}

std::string RestaurantG::getName() {
  return Name;
}

void RestaurantG::setName(std::string newName) {
  Name = newName;
}

std::string RestaurantG::getCuisine() {
  return Cuisine;
}

void RestaurantG::setCuisine(std::string newCusine) {
  Cuisine = newCusine;
}

void RestaurantG::addCustomerRating(int num) {
  // precondition checks if given num falls within the array.
  if (num > 0 && num < 6) {
    CustomerRating[num - 1]++;  // [num - 1] because the array starts at 0.
  }
}

float RestaurantG::getAverage() {
  float n = 0, d = 0;  // n(numerator), d(denominator).
    for (int i = 0; i < OPTION_SIZE; i++) {
      n += CustomerRating[i] * (i + 1);
      d += CustomerRating[i];
    }
  if (d > 0) {  // cannot divide by zero.
    return n/d;
  }
  return 0;
  // in the advent that d = 0 return zero because there are no ratings.
}
