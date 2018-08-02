#ifndef _LOAD // ask compiler to check if _LOAD already exists
#define _LOAD // if _LOAD doesn't already exist, then define _LOAD (tell compiler this is a class for load??)

#include <stdio.h> // include pre-built functions such as int and double??

typedef struct load {
  int tag; // each load object must contain unique tag identifier
  double coord[2]; // identify location of load in 2D model
  double force[3]; // at a given node, describe magnitude of forces along the 3 DOFs
  struct load *next; // each load object must contain a pointer feature
} Load; // replace "struct load" with "Load" for future initializations

void loadPrint(Load *); // declare print function for load object??
void loadSetup(Load *, int tag, double crd1, double crd2, double force1, double force2, double force3); // declare main method for creating instance of object with some input coordinates??

#endif // end if statement for compiler
