#include <stdio.h>
#include <stdlib.h> // for func sizeof??
#include "domain.h"
#include "node.h"

void domainPrint(Domain *theDomain) {
  printf("The Nodes:\n"); // display what this func is doing
  domainPrintNodes(theDomain); // call the print nodes func
}

void domainAddNode(Domain *theDomain, int tag, double crd1, double crd2) {
  Node *theNextNode = (Node *)malloc(sizeof(Node)); // create empty node pointer 
  nodeSetup(theNextNode, tag, crd1, crd2); // 

  if (theDomain->theNodes != NULL) {
    theNextNode->next = theDomain->theNodes;
  } else {
    theNextNode->next = NULL;
  }
  theDomain->theNodes = theNextNode;
}

void domainPrintNodes(Domain *theDomain) {
  Node *theCurrentNode = theDomain->theNodes;
  while (theCurrentNode != NULL) {
    nodePrint(theCurrentNode);
    theCurrentNode = theCurrentNode->next;
  };
}

Node *domainGetNode(Domain *theDomain, int nodeTag) {
  Node *theCurrentNode = theDomain->theNodes;
  while (theCurrentNode != NULL) {
    if (theCurrentNode->tag == nodeTag) {
      return theCurrentNode;
    } else {
      theCurrentNode = theCurrentNode->next;
    }
  };
  return NULL;
}
