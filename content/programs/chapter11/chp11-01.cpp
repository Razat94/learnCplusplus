// Taken from w3schools:
// https://www.w3schools.com/cpp/showcpp.asp?filename=demo_array_change

#include <iostream>
#include <string>
using namespace std;

int main() {
  string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
  cout << "cars[0] before change: " << cars[0] << endl;
  cars[0] = "Opel";
  cout << "cars[0] after change: " << cars[0];
  return 0;
}
