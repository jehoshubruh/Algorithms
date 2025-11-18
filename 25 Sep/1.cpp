#include <iostream>
using namespace std;

int main() {
    int x;

    cout << "Give me a number: ";
    cin >> x;

    if(x % 2 == 0){

        cout << "It's an even number!";

    }else{

        cout << "It's an odd number!";
    }

    return 0;

}