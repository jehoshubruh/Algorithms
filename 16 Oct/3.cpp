#include <iostream>
using namespace std;

//create an address struct then a student struct; input data and display

struct Student{

    string Name;
    string NIM;
    string address;

};


struct address{

    string city;
    string province;

};


void data(Student &stu){

    cout << "   Enter Name: ";
    cin >> stu.Name;

    cout << "   Enter NIM: ";
    cin >> stu.NIM;

    cin.ignore();

}

void data1(address &ad){

    cout << "   Enter City: ";
    cin >> ad.city;

    cout << "   Enter Province: ";
    cin >> ad.province;

    cin.ignore();

}

void output(Student &stu1, address &ad1){

    cout << "\n\n\nYour data: \n";
    cout << "   Name: " << stu1.Name << endl;
    cout << "   NIM: " << stu1.NIM << endl;
    cout << "   Address: " << ad1.province + ", " + ad1.city;

    cin.ignore();

}

int main(){

    Student stu1;
    address ad1;

    cout << "Input Data\n";
    data(stu1);

    cout << "\nInput Address \n";
    data1(ad1);

    cout << " \n";
    output(stu1, ad1);


    return 0;

}