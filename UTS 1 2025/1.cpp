#include <iostream>
#include <string>
using namespace std;

int main() {
    
    float x;
    float y;
    float z;
    float output;

    cout << "Give me three numbers, I'll choose the biggest one you have!";
    cout << "\nFirst number: ";
    cin >> x;

    cout << "Second number: ";
    cin >> y;

    cout << "Third number: ";
    cin >> z;

    if (x > y && x > z){

        output = x;

    } else if (y > x && y > z) {

        output = y;

    } else {

        output = z;
    }

    cout << endl << endl << output << " is the biggest number!";
    
    return 0;
}