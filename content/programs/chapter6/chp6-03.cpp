#include <iostream>
#include <string>
using namespace std;
	
int main() {
	if (true) {
		if (true) {
			cout << "1st Statement";
		}
	}	
	if (true) {
		if (false) {
			cout << "2nd Statement";
		}
	}
	if (false) {
		if (true) {
			cout << "3rd Statement";
		}
	}
	if (false) {
		if (false) {
			cout << "4th Statement";
		}
	}
}
