#ifndef PIZZAORDER_H
#define PIZZAORDER_H
#include "Pizza.h"
#include <array>
#include <string>
using namespace std;

class PizzaOrder {

private:
  Pizza* m_order; // Array of Pizza Objects
  int m_numPizzas; // Number of Pizza Objects in Order
  int m_count; // How Many Pizzas Added to Order So Far

public:
  // Default Constructor
  PizzaOrder();
  // Overloaded Constructor
  PizzaOrder(int numPizzas);
  // Destructor
  virtual ~PizzaOrder();

  int addPizza(Pizza pizza); // Adds a Pizza to Order
  double calcTotal(); // Adds Up Total of All Pizzas
  string toString();  /* Puts Whole Order into
                         Single String (Receipt) */

};

#endif
