#include <iostream>
#include "Mult2.h"

// constructor method for Mult2 obj
Mult2::Mult2(double a, double b)
  :Task(), num1(a), num2(b) // would a and b alone suffice?
{
/*
num1 = a; // alt way of initializing num1 and num2 for later based on inputs a and b
num2 = b;
*/
}

// destructor method for Mult2 obj
Mult2::~Mult2() {
  cout << "Mult2 Destructor\n";
}

// key method for this obj
double
Mult2::RunTask(void) {
  return num1 * num2;
}

