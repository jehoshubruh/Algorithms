#include <iostream>
#include <string>
using namespace std;


void push(string stack[], int &top, int capacity) {

    system ("cls");

    string value;

    if (top == capacity - 1) {

        cout << "Stack is FULL! Cannot push more data.\n\n";

    } else {

        cout << "Enter value to push: ";
        cin.ignore();
        getline(cin, value);

        top++;
        stack[top] = value;

        cout << "Pushed '" << value << "' into stack.\n\n";

    }

}



void pop(string stack[], int &top) {

    system("cls");

    if (top == -1) {

        cout << "Stack is EMPTY! Nothing to pop.\n\n";

    } else {

        cout << "Popped '" << stack[top] << "' from stack.\n\n";
        top--;
    }
}



void peek(string stack[], int top) {

    system("cls");

    if (top == -1) {

        cout << "Stack is EMPTY! No top element.\n\n";

    } else {

        cout << "Top element: " << stack[top] << endl<<endl;

    }
}



bool isEmpty(int top) {

    system("cls");

    return top == -1;

}



int size(int top) {

    system("cls");

    return top + 1;

}



void menu(string stack[], int &top, int capacity) {
    
    system("cls");    
    
    int c;

    do {

        cout << "What would you like to do with your stack?\n";
        cout << "[1] Push\n";
        cout << "[2] Pop\n";
        cout << "[3] Peek (top)\n";
        cout << "[4] IsEmpty\n";
        cout << "[5] Size\n\n";
        cout << "[0] Exit\n";
        cout << "Choose: ";
        cin >> c;

        switch (c) {

            case 1: 
                push(stack, top, capacity); 
                break;

            case 2: 
                pop(stack, top);
                break;

            case 3: 
                peek(stack, top); 
                break;

            case 4:
                if (isEmpty(top)) {

                    cout << "Stack is EMPTY.\n\n";

                } else {
                    
                    cout << "Stack is NOT empty.\n\n";

                }

                break;

            case 5:
                cout << "Stack size: " << size(top) << "/" << capacity << endl<<endl;
                break;

            case 0:
                cout << "Exiting program...\n\n";
                break;

            default:
                cout << "Invalid option. Try again.\n\n";

        }

    } while (c != 0);

}



int main() {

    system("cls");

    int capacity;
    string stack[100]; 
    int top = -1;      

    do {

        cout << "Enter stack capacity (min 1 - max 100): ";
        cin >> capacity;

        if (capacity > 100 || capacity <= 0){

            cout << "\nInvalid option! Try again...\n";

        }

    } while (capacity > 100 || capacity <= 0);

    menu(stack, top, capacity);

    return 0;

}