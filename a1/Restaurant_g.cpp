#include "Restaurant_g.h"

RestaurantG::RestaurantG() {
  Name = "Unkown";
  Cuisine = "Unknown";
  for (int i = 0; i < OPTION_SIZE/*equals 5*/; i++) {
    CustomerRating[i] = 0;  // Initializes all values to 0.
  }
}

RestaurantG::RestaurantG(std::string s1, std::string s2) {
  Name = s1;
  Cuisine = s2;
  for (int i = 0; i < OPTION_SIZE/*equals 5*/; i++) {
    CustomerRating[i] = 0;  // Initializes all values to 0.
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
  // Precondition: checks if given num falls within the array.
  if (0 < num && num <= OPTION_SIZE) {
    CustomerRating[num - 1]++;  // [num - 1] because the array starts at 0.
  }
}

float RestaurantG::getAverage() {
  float sumRatings = 0, ratings = 0;
  for (int i = 0; i < OPTION_SIZE; i++) {
    sumRatings += CustomerRating[i] * (i + 1);  // Sums all the ratings.
    ratings += CustomerRating[i];  // Counts the number of ratings.
  }
  if (ratings) {  // Checks if you have any ratings.
    return sumRatings / ratings;
  }
  return 0;
  // If no ratings are present it returns 0.
}
