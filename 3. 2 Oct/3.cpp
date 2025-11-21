#include <iostream>
using namespace std;

int main(){

    int ra[7] = {1, 3, 5, 7, 9, 11, 15};
    int n = sizeof(ra) / sizeof(ra[0]);
    int x;

    int low = 0;
    int high = n -1 ;

    cout << "Another lone database of numbers...\n" << "Please input a number again: ";
    cin >> x;


    while (low <= high){ // BINARY SEARCH
        int mid = low + (high - low) / 2; // finds the middle position

        if (ra[mid] == x){ 

            cout << "Number found on index: " << mid << endl;
            return 0;
            
        }

        if (ra[mid] < x){

            low = mid + 1;

        }
        else{

            high = mid - 1;

        } 
    } // end of BINARY SEARCH

    cout << "Number not found.\n";



    return 0;

}
    
    
    
    
    
    
    
    
    
