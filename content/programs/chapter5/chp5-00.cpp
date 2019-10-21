#include <iostream>
using namespace std;

int main() {
	// Before going over if statements, remember: 
	// A block of code is literally just some code written inside of { } brackets.
	
	{
		// some code
		cout << "Hello World!" << endl;
	}
	
	{
		// some more code
		cout << "Hello World x2!" << endl;
	}

	// You can have nested block statements
	// i.e. a block of code within another block of codes.
	{
		cout << "Statement 1 \t";
		{ 
			cout << "Statement 2";
		}
	}
}
