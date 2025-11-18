#include <iostream>
using namespace std;

//enumeration, asks what type of account; displays the account chosen.

int main(){

    int c;

    enum acctype{

        Teacher,
        Student

    };

    acctype acc;

    cout << "1. Teacher\n2. Student\n\nChoose your account type: ";
    cin >> c;


    if (c == 1)
    {
        acc = Teacher;
    }

    else if (c == 2)
    {
        acc = Student;
    }

    else 
    {
        cout << "No account";
        return 0;
    }


    if (acc == Teacher)
    {
        cout << "\nAccount type: Teacher";
    }
    else if (acc == Student)
    {
        cout << "\nAccount type: Student";
    }


    return 0;
}