#include <iostream>
using namespace std;

// Buatlah fungsi bernama tampilData() yang menerima parameter bertipe struct Mahasiswa dan menampilkan isi datanya ke layar.
// Gunakan fungsi tersebut di dalam main() untuk menampilkan data dari satu mahasiswa yang diinput sebelumnya.

struct stu{

    string name;
    string nim;
    float score;

};

void tampilData(stu &stu){

    cout << "\nYOUR DATA:\n";
    cout << "   Name: "<<stu.name <<endl;
    cout << "   NIM: "<<stu.nim<<endl;
    cout << "   Score: "<<stu.score<<endl;

}


int main(){

    stu stu1;

    for (int loop = 0; loop < 2; ++loop){

    cout << "\nEnter your data:\n";
    cout << "   Enter name: ";
    cin >> stu1.name;
    cout << "   Enter NIM: ";
    cin >> stu1.nim;
    cout << "   Enter score: ";
    cin >> stu1.score;
    tampilData(stu1);

    }


    return 0;
}