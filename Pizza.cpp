#include <iostream>
#include <string>
#include "Pizza.h"
using namespace std;

// Default Constructor
Pizza::Pizza() {

}

// Overloaded Constructor
Pizza::Pizza(string size, int numCheese, int numPepperoni, int numVeggie) {
  m_size = size;
  m_numCheese = numCheese;
  m_numPepperoni = numPepperoni;
  m_numVeggie = numVeggie;
}

// Copy Constructor
Pizza::Pizza(const Pizza& p) {
  m_size = p.m_size;
  m_numCheese = p.m_numCheese;
  m_numPepperoni = p.m_numPepperoni;
  m_numVeggie = p.m_numVeggie;
}

// Destructor
Pizza::~Pizza() {

}

// Accessors - Get Attributes
string Pizza::getSize() const {
  return m_size;
}
int Pizza::getNumCheese() const {
  return m_numCheese;
}
int Pizza::getNumPepperoni() const {
  return m_numPepperoni;
}
int Pizza::getNumVeggie() const {
  return m_numVeggie;
}

// Mutators - Set Attributes
void Pizza::setSize(const string& size) {
  m_size = size;
}
void Pizza::setNumCheese(const int& numCheese) {
  m_numCheese = numCheese;
}
void Pizza::setNumPepperoni(const int& numPepperoni) {
  m_numPepperoni = numPepperoni;
}
void Pizza::setNumVeggie(const int& numVeggie) {
  m_numVeggie = numVeggie;
}

// Other Methods
double Pizza::calcCost(){ // Calculates Cost of Pizza Based On Size and Toppings
  double total = 0.0;
  if (m_size == "Small") { // Small Pizza is $10
    total += 10.0;
  }
  else if (m_size == "Medium") { // Medium Pizza is $12
    total += 12.0;
  }
  else if (m_size == "Large") { // Large Pizza is $14
    total += 14.0;
  }

  // Add Up Number of Toppings
  int numToppings = m_numCheese + m_numPepperoni + m_numVeggie;
  double toppingTotal = 2.0 * numToppings; // Cost of All Toppings
  total += toppingTotal; // Cost of Pizza Size with Toppings

  return total;
}
string Pizza::toString() { // Puts Pizza Specifications into Single String
  string rep = "";
  rep += "Pizza Size: " + m_size;
  rep += "\n" + to_string(m_numCheese) + " cheese toppings.";
  rep += "\n" + to_string(m_numPepperoni) + " pepperoni toppings.";
  rep += "\n" + to_string(m_numVeggie) + " veggie toppings.";
  rep += "\nPizza cost: $" + to_string(calcCost()) + "\n\n";

  return rep;
}
bool Pizza::equals(const Pizza& p) { // Checks to See if Two Pizzas are the Same
  return ( (this->getSize() == p.getSize() ) &&
           (this->getNumCheese() == p.getNumCheese() ) &&
           (this->getNumPepperoni() == p.getNumPepperoni() ) &&
           (this->getNumVeggie() == p.getNumVeggie() ) );
}
