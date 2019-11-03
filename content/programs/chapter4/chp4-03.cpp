// CS 575, w2Rectangle, Bob Hart

/*
    Type         values
    unsigned     0  1  2  4294967295
    int          0  1  2  -47  -2147483648  2147483647
    double       12.34  5.0  -1.2  4.7e5  4.7e-5  -4.7e5  -4.7e-5
    bool         false  true
    string       "kibbles and bits"  ""  "A"
    char         'A'  'a'

*/

#include <iostream> // cout endl cin
using namespace std;

int main(){
    double width; // declaration
    cout <<"width: ";
    cin >>width;

    double height;
    cout <<"height: ";
    cin >>height;

    double area;
    area = width * height; // assignment statement
    cout <<"area is " <<area <<endl;

    return 0; // fine, unnecessary
} // main
