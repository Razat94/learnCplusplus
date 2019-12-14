#include <iostream>
#include <string>
using namespace std;

int main() {
	int size = 3;
	int arr[3] = { 1, 2, 3};
	for (int i = 0; i < size; i++ ) {
		cout << "[" << i << "]: ";
		cout << arr[i] << endl;
	}	
}
