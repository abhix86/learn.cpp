#include <iostream>

using namespace std;

// switch function made easier the use of else-if function

int main(){
    // declaration
    int month;
    cout << "Enter the Month (1-12): ";
    cin >> month;

    // initialization

    switch(month){
        case 1:
            cout << "It is january!";
            break;
        case 2:
            cout << "It is February!";
            break;
        case 3:
            cout << "It is March!";
            break;
        case 4:
            cout << "It is April!";
            break;
        case 5:
            cout << "It is May!";
            break;
        case 6:
            cout << "It is June!";
            break;
        case 7:
            cout << "It is July!";
            break;
        case 8:
            cout << "It is August!";
            break;
        case 9:
            cout << "It is September!";
            break;
        case 10:
            cout << "It is October!";
            break;
        case 11:
            cout << "It is November!";
            break;
        case 12:
            cout << "It is December!";
            break;
        default:
        cout << "Please write the correct value (in, 1-12)";
    }


    return 0;
}