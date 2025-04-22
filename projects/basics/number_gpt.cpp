// This project is given by aiko, aka chatgpt
#include <iostream>
#include <stdlib.h>
#include <cstdlib>
using namespace std;

int main() {
    //declaration

    string mssg = "Your given number is: ";
    int num1;
    string cmmnd;
    double temp;
    char unit;


    while(true){
    cout << "\nAvailable Commands: \n";
    cout << "Change farehnheit to celsius (fcalc)";
    cout << "\nNumber to word (nword)"; // when i come up with this 'nword' i didn't thought about it so.. 💀
    cout << "\nTo exit the Program (exit)\n";
    cout << "\n\nWrite what action you want to perform: ";
    cin >> cmmnd;

    if(cmmnd == "Exit" || cmmnd == "exit"){
        cout << "\n\nEnding the Program...";
        exit(0);
    }
    //
    if(cmmnd == "fcalc"){
        cout << "**********Temperature Conversion**********\n";
        cout << "F = Fahrenheit\nC = Celsius\n";
        cout << "What unit would you like to conver to: ";
        cin >> unit;

        if(unit == 'F' || unit == 'f'){
            cout << "Enter the temperature in Celsius: ";
            cin >> temp;
            if(cin.fail()){
                cout << "\n\nEntered value: " << temp;
                cout << "\nTYPE_ERROR - 0: Invalid Type: ";
                cout << "\nERROR MESSAGE: Wanna ruin my program or what you dumb fuck ?\n\n";
                cin.clear();              // clears the error flag
                cin.ignore(10000, '\n');  // clears the buffer
                continue;

            }
            temp = (1.8 * temp) + 32.0;
            cout << "\n\nTemperature in F(fahrenheit) is: "<< temp << "F";

            
        }
    
        else if(unit == 'C' || unit == 'c'){
            cout << "Enter the temperature in Fahrenheit: ";
            cin >> temp;
            if(cin.fail()){
                cout << "\n\nEntered value: " << temp;
                cout << "\nTYPE_ERROR - 0: Invalid Type: ";
                cout << "\nERROR MESSAGE: Wanna ruin my program or what you dumb fuck ?";
                cin.clear();              // clears the error flag
                cin.ignore(10000, '\n');  // clears the buffer
                continue;
            }

            temp = (temp - 32) / 1.8;
            cout << "\n\nTemperature in C(celsius) is: " << temp << "C";
        }
        else{
            cout << "\nTYPE_ERROR - 0: Invalid Type: \n\n";
            cin.clear();              // clears the error flag
            cin.ignore(10000, '\n'); 
            continue;
            
        }

    }

    if(cmmnd == "nword"){
    cout << "Write any number between 1-20 (and '0' to exit): ";
    cin >> num1;
    cout << "\n\n";

    //initialization
    if(num1 == 0){
        cout << "\n\nExit initialized...";
        exit(0);
    }
    {
        (num1 == 1) ? cout << mssg << "ONE": 
        (num1 == 2) ? cout << mssg << "TWO": 
        (num1 == 3) ? cout << mssg << "THREE":
        (num1 == 4) ? cout << mssg << "FOUR":
        (num1 == 5) ? cout << mssg << "FIVE":
        (num1 == 6) ? cout << mssg << "SIX":
        (num1 == 7) ? cout << mssg << "SEVEN":
        (num1 == 8) ? cout << mssg << "EIGHT":
        (num1 == 9) ? cout << mssg << "NINE":
        (num1 == 10) ? cout << mssg << "TEN":
        (num1 == 11) ? cout << mssg << "ELEVEN (from stanger things ?)":
        (num1 == 12) ? cout << mssg << "TWELVE":
        (num1 == 13) ? cout << mssg << "THIRTEEN":
        (num1 == 14) ? cout << mssg << "FOURTEEN":
        (num1 == 15) ? cout << mssg << "FIFTEEN":
        (num1 == 16) ? cout << mssg << "SIXTEEN":
        (num1 == 17) ? cout << mssg << "SEVENTEEN":
        (num1 == 18) ? cout << mssg << "EIGHTEEN":
        (num1 == 19) ? cout << mssg << "NINETEEN":
        (num1 == 20) ? cout << mssg << "TWENTY":
        cout << "\n\nEntered value: " << num1 << "\nOOR ERROR: Given number is out of range\nEnding Process...";
    }
        
    cin.ignore(10000, '\n'); // flush buffer just in case
    cout << "\n\nPress Enter to continue...";
    cin.get(); // waits for Enter
    system("cls"); // then clears screen

    }
    else{
        cout << "\nType error: Entered value is not recognized\n\n";
        continue;
    }

}
    return 0;
}