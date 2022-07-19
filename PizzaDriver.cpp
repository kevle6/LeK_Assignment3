/* Full Name: Kevin T Le

Student ID: 2406054

Chapman Email: kevle@chapman.edu

Course Number and Section: CPSC 298-06

Programming Assignment 3

Purpose: This program utilizes two classes: Pizza and Pizza Order. Each pizza object has a size
and specific number of toppings. The PizzaDriver will create a dynamically allocated array that
will store a certain number of pizzas per order. Once the order is full, it will output a -1.
The program will output the total cost of the order, the costs of each individual pizzas, and
each pizza specifications. */

#include <iostream>
#include <string>
#include <array>
#include "Pizza.h"
#include "PizzaOrder.h"
using namespace std;

int main() {

  Pizza pizza1("Small", 1, 0, 1); // Creating a small pizza, 1 cheese, 1 veggie
  Pizza pizza2("Large", 2, 2, 0); // Creating a large pizza, 2 cheese, 2 pepperoni
  Pizza pizza3(pizza2); // Same as pizza 2, used copy constructor
  Pizza pizza4(pizza1); // Same as pizza 1, used copy constructor

  PizzaOrder order(3); // Create an order of THREE pizzas

  cout << order.addPizza(pizza1) << endl; // Add pizza1 to the order
  cout << order.addPizza(pizza2) << endl; // Add pizza2 to the order
  cout << order.addPizza(pizza3) << endl; // Add pizza3 to the order
  cout << order.addPizza(pizza4) << endl; // Add pizza4 to the order – does not add pizza4

  cout << pizza1.equals(pizza3) << endl; // Checks to see if pizza3 is the same as pizza1
  cout << pizza4.equals(pizza1) << endl << endl; // Checks to see if pizza4 is the same as pizza1

  cout << order.toString(); // Outputs receipt

  return 0;
}
