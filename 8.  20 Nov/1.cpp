#include <iostream>
#include <string>
#include <stack>
using namespace std;

// Stacks. must have push, pop, peek, isempty, size, exit options. 
// user defines the size of stack, 
// gives a message when the stack is full

void menu(stack <float> &n, int &size){

    int c;
    float x;

    while (true) {

        cout << "What would you like to do to the stack?\n[1] Add an element\n[2] Remove recent element\n[3] Checks recent element\n[4] Checks if the stack is empty\n[5] Shows the size of the stack\n\n[0] Exit program\n\n\nInput: ";
        cin >> c;

        switch (c) {

            case 0:
                return;

            case 1:
                cout << "Enter value: ";
                cin >> x;
                n.push(x);
                break;
        
            case 2:
                cout << n.top() << "was removed!";
                n.pop();
                break;

            case 3:
                cout << n.top();
                break;

            case 4:
                if (n.empty()) {

                    cout << "Stack is empty";

                } else {

                    cout << "Not empty, carry on...";

                }
                break;

            case 5:
                cout << size;
                break;

            default:
                cout << "Invalid option! Try again!";
                break;

        }

        cout << "Goodbye!";

    }

}

int main() {
    
    system ("cls");
    int size;

    cout << "How big do you want the stack to be?\nInput: ";
    cin >> size;

    stack <float> n;

    menu(n, size);

    
    return 0;
}