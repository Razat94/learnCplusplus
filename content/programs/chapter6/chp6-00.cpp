#include <iostream>
using namespace std;

int main() { // opening brace for main function
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
} // closing brace for main function.
