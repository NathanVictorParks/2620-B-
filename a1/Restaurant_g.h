#ifndef RESTAURANTGUIDE_H
#define RESTAURANTGUIDE_H
#define OPTIONSIZE 5  // size of CustomerRating
#include <string>

class RestaurantGuide {
private:
  std::string Name, Cuisine;
  int CustomerRating[OPTIONSIZE];
public:
  RestaurantGuide();
    // Intiates values in CustomerRating to 0, sets Name to "" and Cuisine to "".
  RestaurantGuide(std::string s1, std::string s2);
  // Intiates values in CustomerRating to 0, Name to s1 and Cuisine to s2.
  std::string getName();  // returns Name.
  void setName(std::string newName);  // Sets Name to newName.
  std::string getCuisine();  // returns Cuisine.
  void setCuisine(std::string newCusine);
   // sets Cuisine to newCusine. Not sure why he had us spell it Cusine (^.^).
};
#endif
