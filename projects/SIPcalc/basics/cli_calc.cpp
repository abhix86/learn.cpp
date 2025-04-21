#include <iostream>
#include <cstdlib>  // Needed for exit()


using namespace std;

int main() {
    // declaration

    char op;
    double num1;
    double num2;
    double result;

    // initialization
    cout << "************CALCULATOR************";
    cout << "\n************************************";
    cout << "\nEnter either (+, -, *, /): ";
    cin >> op;
    if(op != '+' && op != '-' && op != '*' && op != '/' ){
        cout << "\n\nERROR: Cheack your value\nEnding the process...";
        exit(0);
    }
    cout << "Enter your first digit: ";
    cin >> num1;
    if(cin.fail()){
        cout << "\n\nERROR: Cheack your value\nEnding the process...";
        exit(1);
    }
    cout << "Enter your second digit: ";
    cin >> num2;
    if(cin.fail()){
        cout << "\n\nERROR: Cheack your value\nEnding the process...";
        exit(1);
    }

    switch(op){
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
        if (num2 == 0) {
            cout << "\n\nERROR: Whatcha tynna do here, huh ?";
            exit(1);
        }
            result = num1 / num2;
            break;
        default:
            cout << "\n\nERROR: Cheack your value\nEnding the process...";
    }
    // result output
    cout << num1 << op << num1 << "=" << result; 
    cout << "\n\nYour result is: " << result;
    return 0;
}

// okay, smartass i'm doing that 'cheack' mistake intentionally