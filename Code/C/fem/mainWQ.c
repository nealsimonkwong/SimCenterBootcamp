#include "node.h" // load library for node object
#include "domain.h" // load library for domain object

int main(int argc, char **argv) {
  Domain theDomain; // create instance of domain object
  theDomain.theNodes = 0; // new line by FMK; set node pointer (theNodes) of domain instance to 0
  domainAddNode(&theDomain, 1, 0.0, 0.0); // call function 
  domainAddNode(&theDomain, 2, 0.0, 2.0);
  domainAddNode(&theDomain, 3, 1.0, 1.0);
  
  domainPrint(&theDomain);

  // get and print singular node
  printf("\nsingular node:\n");
  Node *theNode = domainGetNode(&theDomain, 2);
  nodePrint(theNode);
}
