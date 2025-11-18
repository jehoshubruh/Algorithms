#include <iostream>
using namespace std;

//rectangle

int main() {
    float x;
    float y;

    cout << "Area of a rectangle calculator\n";

    cout << "Enter the width: ";
    cin >> x;

    cout << "Enter the length: ";
    cin >> y;

    cout << "Your area is: " << (x * y);

    return 0;
}