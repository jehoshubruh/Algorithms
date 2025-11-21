#include <iostream>
using namespace std;

// enter first and last name  > combine both into a sentence >  hello name, happy learning

int main(){

    string first;
    string last;

    cout << "Enter your first name: ";
    cin >> first;

    cout << "Enter your last name: ";
    cin >> last;

    cout << "Hello " << first + " " + last << ", " << "happy learning!";



    return 0;
}