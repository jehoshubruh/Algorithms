#include <iostream>
#include <string>
#include <vector>
using namespace std;
//use ascend merge sort, input array, output sorted array




void start(vector<int> &arr) {

    int ra;
    int x;

    cout << "How many numbers do you have?\n";
    cout << "Input: ";
    cin >> ra;
    cout << endl;

    for (int i = 1; i <= ra; i++) {

        cout << "Enter number " << i << "/" << ra << ": "; 
        cin >> x;
        arr.push_back(x);

    }

}




void print(const vector<int> &arr) { 

    for (int num : arr)

        cout << num << " ";

    cout << endl;

}





void merge(vector<int> &arr, int left, int mid, int right) { // Merge two sorted halves

    vector<int> L(arr.begin() + left, arr.begin() + mid + 1);
    vector<int> R(arr.begin() + mid + 1, arr.begin() + right + 1);

    int i = 0;
    int j = 0;
    int k = left;

    while (i < L.size() && j < R.size()) {

        if (L[i] >= R[j]) {

            arr[k] = L[i];
            i++;

        } else {

            arr[k] = R[j];
            j++;
        }

        k++;

    }

    while (i < L.size()) {

        arr[k] = L[i];
        i++;
        k++;

    }

    while (j < R.size()) {

        arr[k] = R[j];
        j++;
        k++;

    }

}




void sort(vector<int> &arr, int left, int right) { 

    if (left < right) {

        int mid = left + (right - left) / 2;
        sort(arr, left, mid);
        sort(arr, mid + 1, right);
        merge(arr, left, mid, right);

    }

}




int main() {

    vector<int> arr;

    system("cls");

    start(arr);
    cout << endl;

    cout << "Original array: ";
    print(arr);
    cout << endl;

    sort(arr, 0, arr.size() - 1);
    cout << "Sorted array: ";
    print(arr);
    cout << endl;

    return 0;

}
