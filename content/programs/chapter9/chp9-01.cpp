#include <iostream>
#include <string>
using namespace std;

string hello();
int age();
void output();

int main() {
	output();
}

string hello() {
	string name;
	cout << "Oh, hello! What's your name? ";
	cin >> name;
	cout << "Okay. So your name is " << name << "!" << endl;
	return name;
}

int age() {
	cout << "By the way, how old are you? ";
	int age;
	cin >> age;
	cout << "Oh, okay. So you are " << age << " years old" << endl << endl;
	return age;
}

void output () {
	string yourName = hello();
	int yourAge = age();

	cout << "Got it. So let me recap what I've learned so far: " << endl;
	cout << "Your name is " << yourName << " and you are " << yourAge << " years old.";
}
