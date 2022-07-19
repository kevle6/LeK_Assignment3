#ifndef PIZZA_H
#define PIZZA_H
#include <string>
using namespace std; /* Not considered good coding practice.
                      Only used for the purpose of creating
                      classes */
class Pizza {

private:
  string m_size; // Size of Pizza
  int m_numCheese; // Number of Cheese Toppings
  int m_numPepperoni; // Number of Pepperoni Toppings
  int m_numVeggie; // Number of Veggie Toppings

public:
  // Default Constructor
  Pizza();
  // Overloaded Constructor
  Pizza(string size, int numCheese, int numPepperoni, int numVeggie);
  // Copy Constructor
  Pizza(const Pizza& p);
  // Destructor
  virtual ~Pizza();

  // Accessors - Get Attributes
  string getSize() const;
  int getNumCheese() const; // won't change the class
  int getNumPepperoni() const;
  int getNumVeggie() const;

  // Mutators - Set Attributes
  void setSize(const string& size);
  void setNumCheese(const int& numCheese);
  void setNumPepperoni(const int& numPepperoni);
  void setNumVeggie(const int& numVeggie);

  // Other Methods
  double calcCost(); // Calculates Cost of Pizza Based On Size and Toppings
  string toString(); // Puts Pizza Specifications into Single String
  bool equals(const Pizza& p); // Checks to See if Two Pizzas are the Same

};

#endif
