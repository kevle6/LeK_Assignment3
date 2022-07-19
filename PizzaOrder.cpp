#include "PizzaOrder.h"
#include <array>
#include <string>
#include <iostream>
using namespace std;

// Default Constructor
PizzaOrder::PizzaOrder() {
  m_order = new Pizza [1]; // Pizza array of size 1
  Pizza p("Small", 1, 0, 0); // One Small Cheese Pizza
  m_order[0] = p; // Index 0 of new Pizza array is One Small Cheese Pizza
}
// Overloaded Constructor
PizzaOrder::PizzaOrder(int numPizzas) {
  m_count = 0; // counts how many pizzas have been added
  m_numPizzas = numPizzas; // member variable assigned
  m_order = new Pizza[m_numPizzas]; // creates array with size based on parameter
}
// Destructor
PizzaOrder::~PizzaOrder() {
  delete[] m_order; // deletes array
}
// Adds a Pizza to Order
int PizzaOrder::addPizza(Pizza pizza) {
  if (m_count < m_numPizzas) {
    m_order[m_count++] = pizza; // counter used to indicate which index does not have pizza
    return 1;                   // parameter pizza will be added to index
    }
  return -1; // returns -1 if no more indexes can be filled
}
// Adds Up Total of All Pizzas
double PizzaOrder::calcTotal() {
  double total = 0.0;
  for (int i = 0; i < m_numPizzas; ++i) {
    total += m_order[i].calcCost(); // Iterates and adds cost of each pizza to total variable
  }
  return total;
}
// Puts Whole Order into Single String (Receipt)
string PizzaOrder::toString() {
  string rep = "The total price of the order is: $" + to_string(calcTotal()) + "\n\n";
  for (int i = 0; i < m_numPizzas; ++i) {
    rep += m_order[i].toString();
  }
  return rep;
}
