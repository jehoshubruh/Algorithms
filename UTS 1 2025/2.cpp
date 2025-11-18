#include <iostream>
#include <string>
using namespace std;

int main() {
    
    float ra[10];
    float in;
    int out = -69420;

    cout << "Let's make an array of 10 numbers!\n";

    for (int n = 0; n < 10; n++) {

        cout << "Input number #" << n + 1 << ": ";
        cin >> ra[n];

    }

    cout << "\n\nSearch the number: ";
    cin >> in;

    for (int n = 0; n < 10; n++) { 

        if (ra[n] == in) {

            out = n + 1; 
            break;

        }

    }

    if (out != -69420){

        cout << "\n\nThat number exists and is found on Index #" << out;

    } else {

        cout << "\n\nThat number doesn't exist!";

    }

    return 0;
}