#ifndef _CONSTRAINTS // ask compiler to check if _CONSTRAINTS already exists??
#define _CONSTRAINTS // if _CONSTRAINTS doesn't already exist, then define _CONSTRAINTS (tell compiler this is a class for constraints??)

#include <stdio.h> // include pre-built functions such as int and double??

typedef struct constraints {
  double constraintIDs[3]; // at a given node, describe magnitude of forces along the 3 DOFs
  struct constraints *next; // each constraints object must contain a pointer feature
} Constraints; // replace "struct constraints" with "Constraints" for future initializations

void constraintsPrint(Constraints *); // declare print function for constraints object??
void constraintsSetup(Constraints *, double constraintIDs); // declare main method for creating instance of object

#endif // end if statement for compiler
