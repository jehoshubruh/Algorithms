#include <iostream>
using namespace std;

//create an array of struct to store 3 student's data; display it in a table in the terminal

struct Student{

    string name;
    string num;
    float score;

};


int main(){

    Student stu[3];

    stu[0].name = "Luz Noceda";
    stu[0].num = "001";
    stu[0].score = 100;

    stu[1].name = "Amity Blight";
    stu[1].num = "002";
    stu[1].score = 100;

    stu[2].name = "Hunter";
    stu[2].num = "003";
    stu[2].score = 100;

    cout << "Student Data 1\n";
    cout << "   Name: " << stu[0].name <<endl;
    cout << "   Number: " << stu[0].num <<endl;
    cout << "   Score: " << stu[0].score <<endl;

    cout << "\nStudent Data 2\n";
    cout << "   Name: " << stu[1].name <<endl;
    cout << "   Number: " << stu[1].num <<endl;
    cout << "   Score: " << stu[1].score <<endl;

    cout << "\nStudent Data 3\n";
    cout << "   Name: " << stu[2].name <<endl;
    cout << "   Number: " << stu[2].num <<endl;
    cout << "   Score: " << stu[2].score <<endl;


    return 0;
}