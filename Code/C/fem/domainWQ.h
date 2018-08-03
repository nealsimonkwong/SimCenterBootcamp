#include "node.h" // load library for node obj

typedef struct struct_domain {
  Node *theNodes; // each domain obj contains a node pointer??
} Domain;

void domainPrint(Domain *theDomain); // declare func for printing info from domain obj
void domainAddNode(Domain *theDomain, int tag, double crd1, double crd2); // declare func for adding nodes to domain obj; for each node, supply tag and coord
void domainPrintNodes(Domain *theDomain); // declare func for printing nodes from domain obj
Node *domainGetNode(Domain *, int nodeTag); // ??

