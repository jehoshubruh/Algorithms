#include <iostream>
using namespace std;

int main(){

    int ra[5] = {5, 10, 15, 20, 25};
    int n = sizeof(ra) / sizeof(ra[0]); //sizeof = BYTES not value, each value is 4 bytes. so it's 5(4) / 1(4). 0 is still a value so it still represents 4 bytes.
    int x;
    int result = -69420; // placeholder value for the if statement to run


    cout << "A lone database of numbers...\n" << "Please input a number: ";
    cin >> x;


    for (int q = 0; q < n; q++){ // THE SEARCH

        if (ra[q] == x){
            result = q; // value of result changes to x here
            break;
        }
    }

    if (result != -69420){ // okay wait i'm kinda confused here...
        // the if statement needs a value to run, and since reseult is no longer that said number; this code will run
        // != means not equal to

        cout << "\nThat number exists!\nIts index number is " << result;

        } 
        else{

        cout << "\nThat number doesn't exist in this database.";
        }



    return 0;
}