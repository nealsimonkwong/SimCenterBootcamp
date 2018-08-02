#include <iostream>
#include "Mult2.h"

// constructor method for Mult2 obj
Mult2::Mult2(double a, double b)
  :Task(), num1(a), num2(b), c(0) // would a and b alone suffice (instead of num1, num2)?
{
// c = 0;
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
int
Mult2::RunTask(void) {
  c = num1 * num2;
//  return c; // return c or return 0 here?
  return 0;
}

// output method for this obj
void 
Mult2::Print(ostream &s) {
  s << num1 << "\n";
  s << num2 << "\n";
  s << c << "\n";
}


