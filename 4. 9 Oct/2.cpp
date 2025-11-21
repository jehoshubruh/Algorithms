#include <iostream>
using namespace std;

// two int, one float, print add, sub, yk. use int and double data.

int main (){

    int x;
    int y;
    double z;

    cout << "Enter an integer: ";
    cin >> x;

    cout << "Enter a second integer: ";
    cin >> y;

    cout << "Enter a rational number: ";
    cin >> z;

    double ans = (x / y / z);

    cout << "\n\n\nResults:\n";
        cout << "   addition: " << (x + y + z) <<endl;
        cout << "   subtraction: " << (x - y - z) <<endl;
        cout << "   multiplication: " << (x * y * z) <<endl;
        cout << "   division: " << ans <<endl;


    return 0;
}