#include <iostream>
using namespace std;

int main() {
    float score;

    cout << "Enter your score: ";
    cin >> score;

    if (score >= 60){
        cout << "You passed!\n";
    } 
    else {
        cout << "Failure.\n";
    }

    return 0;
}