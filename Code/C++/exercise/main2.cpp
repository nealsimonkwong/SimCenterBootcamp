#include <iostream>
using namespace std;

#include "Program.h" // load program class from FMK
// #include "Add2.h"
#include "Mult2.h"

int main(int argc, char **argv) {
  Program p1; // create instance of program obj
  Mult2 t1(2,6); // create task obj
  p1.addTask(&t1);
  p1.runTasks(cout);

/*
  Add2 task1(1,2);
  p1.addTask(&task1);
  p1.runTasks(cout);

  Add2 task2(2,3);
  p1.addTask(&task2);
  p1.runTasks(cout);
*/

  return 0;
}
