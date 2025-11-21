#include <iostream>
using namespace std;

//create a struct of a strudent; Name, NIM, Score; make a variable from the struct and display it

struct Student{

    string Name;
    string NIM;
    float Score;

};


int main(){

    Student student;

    student.Name = "Jehoshua Deron Lokaputra";
    student.NIM = "20250803030";
    student.Score = 100;

    cout << "Name: " << student.Name << endl;
    cout << "NIM: " << student.NIM << endl;
    cout << "Score: " << student.Score << endl;


    return 0;

}