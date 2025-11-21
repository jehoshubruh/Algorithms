#include <iostream>
using namespace std;

// odd or even, boolean, use %

int main(){

    int x;
    bool tof;

    cout << "0 : FALSE\n1 : TRUE\n\n\nThis is an even number: ";
    cin >> x;

    if (x % 2 == 0){
        tof = true;
    }

    else{
        tof = false;
    }

    cout << "The council has decided: " << tof;


    
    return 0;
}