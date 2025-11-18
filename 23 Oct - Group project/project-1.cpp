#include <iostream>
#include <string>
using namespace std;

    // cin >> whatever struct has; cout << total price, and discount status with bool
    // i rember i can array to store data by group. very important !!!

struct shop {

    string name;
    int quantity;
    float price; // the way i'm forced to use float and not double...

};


    // this is like a global thingy. if i put them in main or void, the other functions cant use it
shop items[50];    // gonna make it store max 50 arrays
int q = 1;  // ts starts at 1 bc the arrays at the bottom will start the group at 1 (also a global thingy cus display will use it too)


void start();   // i have to call these first because c++ is silly
void checkout();


void start() {

    int c;

    system("cls");  // the only thing i probably remember from coding courses bc it makes it look C L E A N

    cout << "=== MINI CASHIER SYSTEM ===\n";

    do {

        cout << "Enter item " << q << "/50 details...\n";   // q as a counter

        cout << "Item name: ";
        cin >> items[q].name;   // so the q groups the items. this is like q = group 1

        cout << "Enter price: D$ ";
        cin >> items[q].price;

        cout << "Enter quantity: ";
        cin >> items[q].quantity;

        q++;    // and when the loop starts again, q will add 1 so the next item will be stored in q = 2

        cout << "\nAnything else? (1 to add more itmes, otherwise checkout): ";
        cin >> c;

    } while (c == 1);

    checkout();

}



void checkout() {

    bool discount = false;  // the way this isn't THAT important but ok
    float check = 0;
    int c;

    system("cls");

    cout << "=== ITEMS IN CART ===\n";

    for (int i = 1; i < q; i++) {   // int i [creates a LOCAL variable that starts at 1]
                                    // i < q [the loop will run as long as i is less than q]
                                    // i++ [add 1 to i each time the loop runs]

        cout << items[i].name << " - $" << items[i].price << " x" << items[i].quantity << endl;  // so when i = 1, it will display the items at q = 1
        check += items[i].price * items[i].quantity;

    }

    if (check >= 100) { 

        discount = true;
        cout << "\nYou got a (10%) off discount!";
        cout << "\nFinal price: D$ " << check << " -> D$ " << check * 0.9;
        check *= 0.9;

    } else {

        cout << "\nFinal price: D$ " << check;

    }

    cout << "\n\nForgot something? (1 to add more items, otherwise pay): ";
    cin >> c;

    if (c == 1) {

        start();

    } else {    // i could've void here, oh well

        system("cls");

        if (discount == true) { // i knew i could if/else on an if/else !

        cout << "Discount applied! You saved D$ " << check / 0.9 - check;
        cout << "\nFinal price: D$ " << check;
        cout << "\nThank you for shopping!\n ";

        } else {

        cout << "Final price: D$ " << check;
        cout << "\nThank you for shopping!";
        cout << "\n\nTip: Spend more than D$ 100 for a discount next time!\n ";

        }

    }

}



int main() {

    start();

    return 0;

}