#ifndef RESTAURANTGUIDE_H
#define RESTAURANTGUIDE_H
#define OPTION_SIZE 5  // Size of CustomerRating.
#include <string>

class RestaurantG {
private:
  std::string Name, Cuisine;
  int CustomerRating[OPTION_SIZE];
public:
  RestaurantG();
  // Intiates values in CustomerRating to 0, sets Name to "" and Cuisine to "".
  RestaurantG(std::string s1, std::string s2);
  // Intiates values in CustomerRating to 0, Name to s1 and Cuisine to s2.
  std::string getName();
  // Returns Name.
  void setName(std::string newName);
  // Sets Name to newName.
  std::string getCuisine();
  // Returns Cuisine.
  void setCuisine(std::string newCusine);
  // Sets Cuisine to newCusine. Not sure why he had us spell it Cusine (^.^).
  void addCustomerRating(int num);
  // Precondition: num is between 1 and 5.
  // Increments the rating chosen by the user.
  float getAverage();
  // Iterates through CustomerRating and calculates the average.
};
#endif
