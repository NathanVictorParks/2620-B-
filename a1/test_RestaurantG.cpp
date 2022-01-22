#include "Restaurant_g.h"
#include <iostream>

int main() {
  using namespace std;

  cout << "RestaurantGuide Test" << endl
       << "--------------------" << endl << endl;

  cout << "Creating RestaurantGuide object with Default Constructor:" << endl;
  RestaurantGuide r;
  cout << "Name: " << r.getName() << endl
       << "Cuisine: " << r.getCuisine() << endl
       << "Average Rating:" << r.getAverage() << endl;
  cout << "Setting Name to \"Marco's Pizza\" and Cuisine to \"Italian\"."
       << endl << "Giving Marco's Pizza 5 ratings [1, 2, 3, 4, 5]" << endl;
  r.setName("Marco's Pizza");
  r.setCuisine("Italian");
  for (int i = 0; i < OPTIONSIZE; i++) {
    r.addCustomerRating(i+1);
  }
  cout << "Name: " << r.getName() << endl
       << "Cuisine: " << r.getCuisine() << endl
       << "Average Rating:" << r.getAverage() << endl << endl;
/////////////////////////////////////////////////////////////////////////////
  cout << "Creating RestaurantGuide(\"Santiago Pequeno\", \"Mexican\"):"
       << endl;
  RestaurantGuide r1("Santiago Pequeno", "Mexican");
  cout << "Name: " << r1.getName() << endl
      << "Cuisine: " << r1.getCuisine() << endl
      << "Average Rating:" << r1.getAverage() << endl;
  cout << "Setting Name to \"Don Quijote\" and Cuisine to \"Spanish\"."
      << endl << "Giving Marco's Pizza 5 ratings [5, 5, 5, 5, 5]" << endl;
  r1.setName("Don Quijote");
  r1.setCuisine("Spanish");
  for (int i = 0; i < OPTIONSIZE; i++) {
    r1.addCustomerRating(5);
  }
  cout << "Name: " << r1.getName() << endl
      << "Cuisine: " << r1.getCuisine() << endl
      << "Average Rating:" << r1.getAverage() << endl << endl;
///////////////////////////////////////////////////////////////////////////
  cout << "Creating RestaurantGuide(\"Chaana Masala aachaa he\", \"Indian\"):"
       << endl;
  RestaurantGuide r2("Chaana Masala aachaa he", "Indian");
  cout << "Name: " << r2.getName() << endl
      << "Cuisine: " << r2.getCuisine() << endl
      << "Average Rating:" << r2.getAverage() << endl;
  cout << "Setting Name to \"Wo hai ni\" and Cuisine to \"Chinese\"."
      << endl << "Giving Marco's Pizza 5 ratings [4, 4, 4, 5, 5]" << endl;
  r2.setName("Wo hai ni");
  r2.setCuisine("Chinese");
  r2.addCustomerRating(2);
  r2.addCustomerRating(5);
  r2.addCustomerRating(2);
  r2.addCustomerRating(5);
  r2.addCustomerRating(5);
  cout << "Name: " << r2.getName() << endl
      << "Cuisine: " << r2.getCuisine() << endl
      << "Average Rating:" << r2.getAverage() << endl << endl;
///////////////////////////////////////////////////////////////////////////
  cout << "End Of Test" << endl;
}
