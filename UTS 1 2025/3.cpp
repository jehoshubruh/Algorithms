#include <iostream>
#include <string>
using namespace std;

//user inputs 5 numbers; then bubble sorts in ascension.

void bubble(float ra[5]){

    float temp; // creates variable temp

    for (int i = 0; i < 5; i++) {

        for (int j = 0; j < 4 - i; j++){ // still a bit confused at this part but it does make sense somewhere in the back of my head.

            if (ra[j] > ra[j + 1]) { // if box #j is bigger than box #j+1; if it's not, skips if statement; j++

                temp = ra[j]; // then, value of temp = box #j
                ra[j] = ra[j + 1]; // next, value of box #j = box #j+1
                ra[j + 1] = temp; // finally, value of box #j+1 = temp

            }
        
        }
    
    }

}

int main() {
    
    float ra[5];

    cout << "First, let's make an array of 5 numbers!\n";

    for (int n = 0; n < 5; n++) {

        cout << "Input number #" << n + 1 << ": ";
        cin >> ra[n];

    }

    bubble(ra); // does the operations here

    cout << "\nHere's your sorted numbers: "; // will output the result of operation here

    for (int n = 0; n < 5; n++) {

        cout << ra[n] << " ";

    }

    return 0;
}