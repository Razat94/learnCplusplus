#include <iostream>
using namespace std;
	
int main() {
	int x = 6;
	x += 4; // Same as: x = x + 4
	cout << x << endl;
	
	int y = 9;
	y -= 3; // Same as: y = y - 3
	cout << y << endl;
	
	int z = x;
	z *= y; // Same as: z = z * y
	cout << z << endl;
}
