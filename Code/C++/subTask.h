#ifndef _SUBTASK
#define _SUBTASK

#include <iostream> // facilitate output to console
#include "Task.h" // load library from FMK
using namespace std; // ??

// create subclass from Task class
class subTask: public Task { 
 public:  
  subTask(double a, double b); // constructor method
  ~subTask(); // destructor method
  double RunTask(void); // no input but double is output
  void Print(ostream &s);  

 protected:

 private:
  double num1, num2; // number fields
//  static int numSubTasks;
};

#endif
