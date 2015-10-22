#include <iostream>
#include "ex2Person.h"

using std::cout;
using std::endl;

int main() {
  Person one; // use default constructor
  Person two("Smythecraft"); // use #2 with one default argument
  Person three("Dimwiddy", "Sam"); // use #2, no defaults
  one.Show();
  cout << endl;
  one.FormalShow();
  // etc. for two and three
  two.Show();
  two.FormalShow();
  
  cout << endl;
  three.Show();
  three.FormalShow();
  cout << endl;

  return 0;
}
