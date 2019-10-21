#include <iostream>
using namespace std;
	
int main() {

	if ( true ) {
		cout << "Hello, World!" << endl;
	}
	if ( false ) {
		cout << "Second Hello World Statement!" << endl; 
	}

	// code outside of if blocks still gets executed, 
	// regardless of whether the condition was true or not.
	cout << "I hope you have a great day today!";
	
}
