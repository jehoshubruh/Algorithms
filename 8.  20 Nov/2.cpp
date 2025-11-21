// user inputs a sentence, output reverses it

#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    
    system ("cls");
    string sentence; 
    stack <char> inverse; //creates a stack of chars named inverse

    cout << "Input a sentence: ";
    getline(cin, sentence); 

    cout << "Output: "; 

    for (char character : sentence) { // creates variable character, which then has the data of sentence

        inverse.push(character); // the characters are now sotred on the stack

    }

    while (!inverse.empty()){ // loops while the stack isn't empty (if it is, it'll stop)

        cout << inverse.top(); // outputs the last character 
        inverse.pop(); // removes the last character

    }

    cout << endl;
    
    return 0;
}