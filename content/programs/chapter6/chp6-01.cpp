#include <iostream>
using namespace std;
	
int main() { 
	// Program won't execute because we're missing a closing '}' brace. 
	// There are 2 opening '{' brackets, but only 1 closing '}'  
	
	{ // 1st opening brace	
		{ // 2nd opening brace	
			cout << "Hello World!";
		} // 1st closing brace
	// Missing the 2nd closing brace!
}
