#ifndef _MULT2
#define _MULT2

#include <iostream> // facilitate output to console
#include "Task.h" // load library from FMK
using namespace std; // ??

// create subclass from Task class
class Mult2: public Task { 
 public:  
  Mult2(double a, double b); // constructor method
  ~Mult2(); // destructor method
  double RunTask(void); // no input but double is output
  void Print(ostream &s);  

 protected:

 private:
  double num1, num2; // number fields
};

#endif
