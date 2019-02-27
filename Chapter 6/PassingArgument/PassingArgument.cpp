#include <iostream>
#include <iomanip>
using namespace std;

int squareByValue(int); // value pass
void squareByReference(int&); // reference pass

int main() {
    int x{2}; // initial x value
    int y{2}; // initial y value
    // value pass, won't modify argument
    cout << "x = " << x << " before squareByValue." << endl; // before function
    cout << "Value return from squareByValue is " << squareByValue(x) << endl; // return
    cout << "x = " << x << " after squareByValue." << endl; // after function

    // reference pass, will modify argumen
    cout << "\ny = " << y << " before squareByReference." << endl;
    squareByReference(y); // here, y is change
    cout << "y = " << y << " after squareByReference." << endl;
}

int squareByValue(int number) {
    return number *= number; // won't modify caller's argument
}

void squareByReference(int& number) {
    number *= number; // will modify caller's argument
}