// For each block, remember: 
// Every curly brackets must be in a pair so that they are closed.
// i.e. every opening brace '{' must have a closing brace '}' 
// and every closing brace '}' must have an opening brace '{'. 
// So please don't forget to close them.

#include <iostream>
using namespace std;
	
int main() { // opening brace for main function
	// Program won't execute because we're missing a closing '}' brace. 
	// There are 2 opening '{' brackets, but only 1 closing '}'  
	
	{ // 1st opening brace	
		{ // 2nd opening brace	
			cout << "Hello World!";
		} // 1st closing brace
	// Missing the 2nd closing brace!
	
} // closing brace for main function.
