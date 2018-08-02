#include <iostream>
#include "subTask.h"

using namespace std;

int main(int argc, char **argv) {
  subTask st1(1.,2.);

//  Shape *s2 = new Rectangle(1.0, 2.0);
//  Rectangle s2(1., 2.); // why create pointer and not instance like this?
  
  st1.runTask(cout);
  st1.Print(cout);

  return 0;
}

/*
Shape::~Shape() {
  cout << "Shape Destructor\n";
}

void
Shape::PrintArea(ostream &s) {
  s << "UNKOWN area: " << this->GetArea() << "\n";
}
*/  

// int Rectangle::numRect = 0;
subTask::subTask(double a, double b)
  :Shape(), num1(a), num2(b) // what is this syntax??
{
//  numRect++;
}

subTask::~subTask() {
//  numRect--;
  cout << "subTask Destructor\n";
}


double
subTask::RunTask(void) {
  return num1 + num2;
}

/*
void 
subTask::Print(ostream &s) {
//  s << "Rectangle: " << width * height << " numRect: " << numRect << "\n"; // to be modified
}
*/

/*
Circle::~Circle() {
  cout << "Circle Destructor\n";
}

Circle::Circle(double d) {
  diameter = d;
}

double
Circle::GetArea(void) {
  return this->GetPI() * diameter * diameter/4.0;
}

double
Circle::GetPI(void) {
  return 3.14159;
}
*/
