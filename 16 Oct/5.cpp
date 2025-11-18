#include <iostream>
using namespace std;

//find the average score of 5 students

struct st{

    string name;
    float score;

};


void input(st &st){

    cout << "Enter score: ";
    cin >> st.score;

    cin.ignore();

}


int main(){

    float final;
    st st1;
    int counter = 1;

    for (int loop = 0; loop < 5; ++loop){

        cout << "\nEnter name #" << counter << ": ";
        cin >> st1.name;

        input(st1);
        
        ++counter;

        final += st1.score;

    }

    cout << "\n\n\nAverage score: " << final/5;


    return 0;
}