/*
  Function example taken from: 
  https://courses.washington.edu/css342/zander/css332/passby.html 
*/

#include <iostream>
using namespace std;

void swapThemByRef(int& num1, int& num2) {
  int temp = num1;
  num1 = num2;
  num2 = temp;
}

int main () {
	int i = 10; 
	int j = 20;
	
	// Pass by Reference
	cout << "Pass by Reference: \n";
	cout << "Values of i & j BEFORE swapping: \n";
	cout << i << "\t" << j << endl;     // displays 10  20
	swapThemByRef(i, j);
	cout << "Values of i & j AFTER swapping: \n";
	cout << i << "\t" << j << endl;     // displays 20  10	
}
