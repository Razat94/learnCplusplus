#include <iostream>
#include <string>
using namespace std;

void helloWorld();
void hello(string name);
void age(int a);
void greetings (string name);
void output (string name, int age );
int outputInteger(int a);
double sum(double a, double b);
void showSquare( double x );
double square( double x );
double multiply(double a, double b);
double subtract(double a, double b);

int main() {
	// greetings("Mindy");
	helloWorld();
	output ( "Raza" , 23 );
	cout << "\n";
	cout << outputInteger(3);
	cout << endl;
	cout << sum(3,4);
	cout << endl;
	cout << multiply(3,4);
	cout << "\n";
	cout << subtract(4,3) << endl;
	cout << subtract(7,4);
}

void helloWorld() {
	cout << "Hello, World! I hope you have a great day!" << endl;
}

void hello(string name) {
	cout << "hello";
	cout << "My name is " << name << endl;
}

void age(int a) {
	cout << "You are" << a << "years old";
}

void greetings (string name) {
	cout << "Hello, my name is " << name;
}

void output ( string name, int age ) {
	cout << "Hi" << " " << name << ". ";
	cout << "You are " << age << " years old";
}

int outputInteger(int a){
	return a;
}

double sum(double a, double b) {
	return a + b;
}

void showSquare( double x ) {
	cout << x;
}


double multiply(double a, double b) {
	return a * b;
}

double subtract (double a, double b) {
	return a - b;
}
