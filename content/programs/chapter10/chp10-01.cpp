/*
  Taken from:
  https://www.w3schools.com/cpp/showcpp.asp?filename=demo_reference
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
  string originalVar = "Pizza";
  string &referenceVar = originalVar;
  
  // The memory address of both variables are the same.
  cout << &originalVar << "\n";
  cout << &referenceVar << "\n";
  
  cout << originalVar << "\n";
  cout << referenceVar << "\n";
  
  originalVar = "Tacos";
  cout << originalVar << "\n";
  cout << referenceVar << "\n";
  
  referenceVar = "Ice Cream";
  cout << originalVar << "\n";
  cout << referenceVar;
  cout << endl;
  
  return 0;
}
