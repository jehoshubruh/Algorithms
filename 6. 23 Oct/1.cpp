#include <iostream>
#include <string>
using namespace std;

void bubble(int arr[], int n) {
bool swapped;
for (int i = 0; i < n - 1; i++) {
swapped = false;
for (int j = 0; j < n - i - 1; j++) {
if (arr[j] > arr[j + 1]) {
int temp = arr[j];
arr[j] = arr[j +1];
arr[j + 1] = temp;
swapped = true;
}
cout << "Langkah " << i + 1 << ", Iterasi " << j + 1 << ": ";
for (int k = 0; k < n; k++)
cout << arr[k] << " ";
cout << endl;
}
if (!swapped)
break;
}}



void sel(int ra[], int n) {

    for (int i = 0; i < n - 1; ++i) {

        int minIndex = i;

        for (int j = i + 1; j < n; ++j) {

            if (ra[j] < ra[minIndex]) {

                minIndex = j;

            }

        }

        if (minIndex != i) {
        
            swap(ra[i], ra[minIndex]);

        }

        cout << "Langkah " << i + 1 << ": ";

        for (int k = 0; k < n; ++k) {

            cout << ra[k] << " ";

        }

        cout << endl;

    }

}



int main() {

    int ra[5];
    int n = sizeof(ra) / sizeof(ra[0]);
    int c;

    system ("cls");

    for (int i = 0; i < n; i++){

        cout << "Input numbers: ";
        cin >> ra[i];

    }

    cout << "\n1 for bubble sort, 2 for selection sort: ";
    cin >> c;

    if (c == 1){

    cout << "Array before: ";

    for (int i = 0; i < n; i++){

        cout << ra[i] << " ";

    }

    cout << endl;

    bubble(ra, n);

    cout << endl;

    cout << "Array after: ";

    for (int i = 0; i < n; i++){

        cout << ra[i] << " ";

    }

    cout << endl;

        
    } else if (c == 2) {

    cout << "Array before: ";
    for (int i = 0; i < n; ++i) {
        cout << ra[i] << " ";
    }
    cout << endl;

    cout << "Proses Selection Sort:\n";
    sel(ra, n);

    cout << "\nArray after: ";
    for (int i = 0; i < n; ++i) {
        cout << ra[i] << " ";
    }

    cout << endl;


    } 



    return 0;
}