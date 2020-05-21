#include <iostream>
#include <string>
using namespace std;
	
int main() {
	if (true && true) {
		cout << "1st Statement";
	}
		
	if (true && false) {
		cout << "2nd Statement";
	}
	
	if (false && true) {
		cout << "3rd Statement";
	}
	
	if (false && false) {
		cout << "4th Statement";
	}
}
