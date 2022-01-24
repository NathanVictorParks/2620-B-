#include "Restaurant_g.h"
#include <iostream>

int main() {
  using namespace std;

  cout << "RestaurantG Test" << endl
       << "--------------------" << endl << endl;

  cout << "Creating RestaurantG object with Default Constructor:" << endl;

  RestaurantG r;

  cout << "Name: " << r.getName() << endl
       << "Cuisine: " << r.getCuisine() << endl
       << "Average Rating:" << r.getAverage() << endl;
  cout << "Setting Name to \"Marco's Pizza\" and Cuisine to \"Italian\"."
       << endl << "Giving Marco's Pizza 5 ratings [1, 2, 3, 4, 5]" << endl;

  r.setName("Marco's Pizza");
  r.setCuisine("Italian");

  for (int i = 0; i < OPTION_SIZE; i++) {
    r.addCustomerRating(i+1);
  }

  cout << "Name: " << r.getName() << endl
       << "Cuisine: " << r.getCuisine() << endl
       << "Average Rating:" << r.getAverage() << endl << endl;
/////////////////////////////////////////////////////////////////////////////
  cout << "Creating RestaurantG(\"Santiago Pequeno\", \"Mexican\"):"
       << endl;


  RestaurantG r1("Santiago Pequeno", "Mexican");

  cout << "Name: " << r1.getName() << endl
      << "Cuisine: " << r1.getCuisine() << endl
      << "Average Rating:" << r1.getAverage() << endl;
  cout << "Setting Name to \"Don Quijote\" and Cuisine to \"Spanish\"."
      << endl << "Giving Marco's Pizza 5 ratings [5, 5, 5, 5, 5]" << endl;

  r1.setName("Don Quijote");
  r1.setCuisine("Spanish");

  for (int i = 0; i < OPTION_SIZE; i++) {
    r1.addCustomerRating(5);
  }

  cout << "Name: " << r1.getName() << endl
       << "Cuisine: " << r1.getCuisine() << endl
       << "Average Rating:" << r1.getAverage() << endl << endl;
///////////////////////////////////////////////////////////////////////////
  cout << "Creating RestaurantG(\"Indian Kitchen's\", \"Indian\"):"
       << endl;

  RestaurantG r2("Indian Kitchen's", "Indian");

  cout << "Name: " << r2.getName() << endl
       << "Cuisine: " << r2.getCuisine() << endl
       << "Average Rating:" << r2.getAverage() << endl;
  cout << "Setting Name to \"Wo hai ni\" and Cuisine to \"Chinese\"."
      << endl << "Giving Wo hai ni 5 ratings [1, 1, 1, 1, 1]" << endl;

  r2.setName("Wo hai ni");
  r2.setCuisine("Chinese");
  r2.addCustomerRating(1);
  r2.addCustomerRating(1);
  r2.addCustomerRating(1);
  r2.addCustomerRating(1);
  r2.addCustomerRating(1);

  cout << "Name: " << r2.getName() << endl
       << "Cuisine: " << r2.getCuisine() << endl
       << "Average Rating:" << r2.getAverage() << endl << endl;
///////////////////////////////////////////////////////////////////////////
  cout << "Creating RestaurantG(\"Burger King\", \"American\"):"
       << endl << "Giving Burger King 5 ratings [4, 1, 3, 3, 5]"
       << endl;

  RestaurantG r3("Burger King", "American");

  r3.addCustomerRating(4);
  r3.addCustomerRating(1);
  r3.addCustomerRating(3);
  r3.addCustomerRating(3);
  r3.addCustomerRating(5);

  cout << "Name: " << r3.getName() << endl
       << "Cuisine: " << r3.getCuisine() << endl
       << "Average Rating:" << r3.getAverage() << endl << endl;
///////////////////////////////////////////////////////////////////////////
cout << "Creating RestaurantG(\"Wendy's\", \"American\"):"
<< endl << "Giving Wendy's 5 ratings [3, 3, 3, 3, 5]"
<< endl;

RestaurantG r4("Wendy's", "American");

r4.addCustomerRating(3);
r4.addCustomerRating(3);
r4.addCustomerRating(3);
r4.addCustomerRating(3);
r4.addCustomerRating(5);

cout << "Name: " << r4.getName() << endl
     << "Cuisine: " << r4.getCuisine() << endl
     << "Average Rating:" << r4.getAverage() << endl << endl;
///////////////////////////////////////////////////////////////////////////
cout << "Creating RestaurantG(\"Mango Tree\", \"Indian\"):"
<< endl << "Giving Mango Tree 5 ratings [5, 4, 4, 5, 5]"
<< endl;

RestaurantG r5("Mango Tree", "Indian");

r5.addCustomerRating(5);
r5.addCustomerRating(4);
r5.addCustomerRating(4);
r5.addCustomerRating(5);
r5.addCustomerRating(5);

cout << "Name: " << r5.getName() << endl
     << "Cuisine: " << r5.getCuisine() << endl
     << "Average Rating:" << r5.getAverage() << endl << endl;
///////////////////////////////////////////////////////////////////////////
cout << "Creating RestaurantG(\"Thon Hua\", \"Vietnamese\"):"
<< endl << "Giving Thon Hua 5 ratings [1, 1, 3, 5, 5]"
<< endl;

RestaurantG r6("Thon Hua", "Vietnamese");

r6.addCustomerRating(1);
r6.addCustomerRating(1);
r6.addCustomerRating(3);
r6.addCustomerRating(5);
r6.addCustomerRating(5);

cout << "Name: " << r6.getName() << endl
     << "Cuisine: " << r6.getCuisine() << endl
     << "Average Rating:" << r6.getAverage() << endl << endl;
///////////////////////////////////////////////////////////////////////////
cout << "Creating RestaurantG(\"Pizza Hut\", \"Italian\"):"
<< endl << "Giving Pizza Hut 5 ratings [2, 1, 3, 5, 2]"
<< endl;

RestaurantG r7("Pizza Hut", "Italian");

r7.addCustomerRating(2);
r7.addCustomerRating(1);
r7.addCustomerRating(3);
r7.addCustomerRating(5);
r7.addCustomerRating(2);

cout << "Name: " << r7.getName() << endl
     << "Cuisine: " << r7.getCuisine() << endl
     << "Average Rating:" << r7.getAverage() << endl << endl;
///////////////////////////////////////////////////////////////////////////
cout << "Creating RestaurantG(\"Red Dragon\", \"Chinese\"):"
<< endl << "Giving Red Dragon 5 ratings [2, 2, 2, 5, 2]"
<< endl;

RestaurantG r8("Thon Hua", "Vietnamese");

r8.addCustomerRating(2);
r8.addCustomerRating(2);
r8.addCustomerRating(2);
r8.addCustomerRating(5);
r8.addCustomerRating(2);

cout << "Name: " << r8.getName() << endl
     << "Cuisine: " << r8.getCuisine() << endl
     << "Average Rating:" << r8.getAverage() << endl << endl;
///////////////////////////////////////////////////////////////////////////
cout << "Creating RestaurantG(\"Pita Pit\", \"Turkish\"):"
<< endl << "Giving Pita Pit 5 ratings [2, 4, 3, 4, 5]"
<< endl;

RestaurantG r9("Pit Pit", "Turkish");

r9.addCustomerRating(2);
r9.addCustomerRating(4);
r9.addCustomerRating(3);
r9.addCustomerRating(4);
r9.addCustomerRating(5);

cout << "Name: " << r9.getName() << endl
     << "Cuisine: " << r9.getCuisine() << endl
     << "Average Rating:" << r9.getAverage() << endl << endl;
///////////////////////////////////////////////////////////////////////////
cout << "Creating Default RestaurantG:"
<< endl << "Giving Default RestaurantG five ratings [1, 4, 1, 4, 1]"
<< endl;

RestaurantG r10;

r10.addCustomerRating(1);
r10.addCustomerRating(4);
r10.addCustomerRating(1);
r10.addCustomerRating(4);
r10.addCustomerRating(1);

cout << "Name: " << r10.getName() << endl
     << "Cuisine: " << r10.getCuisine() << endl
     << "Average Rating:" << r10.getAverage() << endl
     << "Changing Name to Round Robin and Cuisine to Food." << endl;

r10.setName("Round Robin");
r10.setCuisine("Food");

cout << "Name: " << r10.getName() << endl
     << "Cuisine: " << r10.getCuisine() << endl
     << "Average Rating:" << r10.getAverage() << endl << endl;

///////////////////////////////////////////////////////////////////////////
  cout << "End Of Test" << endl;
}
