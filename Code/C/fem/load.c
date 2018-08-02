#include <stdio.h>
#include "load.h" // load class file

void loadPrint(Load *theLoad){
  printf("Load : %d ", theLoad->tag);
  printf("Crds: %f %f ", theLoad->coord[0], theLoad->coord[1]);
  printf("Disp: %f %f %f \n", theLoad->disp[0], theLoad->disp[1], theLoad->disp[2]);
}

void nodeSetup(Load *theLoad, int tag, double crd1, double crd2) {
  theLoad->tag = tag;
  theLoad->coord[0] = crd1;
  theLoad->coord[1] = crd2;
  theLoad->next = NULL;
}
