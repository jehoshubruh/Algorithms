#include <iostream>
using namespace std;

int main(){

    int ra[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(ra) / sizeof(ra[0]);
    int x;
    
    int q = 0;

    cout << "Enter number: ";
    cin >> x;

    while (q < n && ra[q] != x){ // Sort seq start

        q++; 
    
    } // Sort seq end



    if (q < n){

        cout << "Number found on index: " << q << endl;
    } 
    else {

        cout << "Number not found.\n";

    } 

    return 0;

}