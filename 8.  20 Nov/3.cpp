// user inputs a sentence/operation and it'll detect if it's valid or not by the use of brackets

#include <iostream>
#include <string>
#include <stack>
using namespace std;



void a(string &sentence, bool &valid){

    stack <char> brackets;

    for (char character : sentence){ // a line of characters (aka sentence) gets checked one by one...

        if (character == '(' || character == '[' || character == '{'){ // if one of them are either these opening brackets, then

            brackets.push(character); // puts them into the stack line

        } // if it's not, then...

        if (character == ')' || character == ']' || character == '}'){ // checks if it's either these closing brackets instead...

            if (brackets.empty() || (character == ')' && brackets.top() != '(') || (character == ']' && brackets.top() != '[') 
            || (character == '}' && brackets.top() != '{') ){ // if the stack line is empty, OR... 
            // the character is a closing bracket but the recent character in the stack line isn't an opening of the same type, then...

                valid = false; // it turns the operation invalid
                break; // stops the looping cus it's invalid already

            } else { // if it's not, then...

                brackets.pop(); // the recent character in the stack line gets sent to the shadow realm.

            }

        } 

    } // loop ends here

    if (!brackets.empty()){ // there are probably some left over opening brackets inside the stack not sent to the sahdow realm
        // bc there weren't any closing brackets to do that...

        valid = false; // we'll make the operation invalid bc of that

    }

}



int main() {
    
    system ("cls");
    string sentence;
    bool valid = true;

    cout << "Enter a sentence/mathematical operation with brackets! We'll check if it's valid or invalid.\nInput: ";
    getline (cin, sentence);


    a(sentence, valid);

    if (!valid) {

        cout << "\nIt's invalid!";

    } else {

        cout << "\nIt's valid!";

    }
    
    return 0;
}