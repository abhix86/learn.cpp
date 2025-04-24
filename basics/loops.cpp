#include <iostream>
using namespace std;

int main() {
    int n = 4;

    // Program 3 - Print increasing stars
    cout << "Program 3: \n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* "; // Print stars for each row
        }
        cout << endl;
    }

    // Program 4 - Print increasing stars with spaces before them
    cout << "\nProgram 4: \n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            cout << " "; // Print spaces before stars
        }
        for (int k = 0; k <= i; k++) {
            cout << "* "; // Print stars after spaces
        }
        cout << endl;
    }

    // Program 5 - Print reverse triangle with decreasing stars
    cout << "\nProgram 5: \n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout << " "; // Print spaces before stars
        }
        for (int k = 0; k < n - i; k++) {
            cout << "* "; // Print stars after spaces
        }
        cout << endl;
    }

    // Program 6 - Prints diamond
    cout << "\nProgram 6: \n";
    for (int i = 1; i < 4; i++) {
        for(int j = 1; j <= 5-i; j++){
            cout<<" ";
        }
        for(int k = 1; k <= i; k++){
            cout<<"* ";
        }
    cout<<endl;
    }
    for(int i = 1; i <= 4; i++){
        for(int j = 2; j <= i; j++){
            cout<<" ";
        }
        for(int k = 1; k <= 5-i; k++){
            cout<<" *";
        }
    cout<<endl;
    }
    // program 7: idk what to name this, maybe diamond container... ?
    cout<<"\nProgram 7: \n";
    for(int i = 1; i <= 5; i++){
        for(int j =1; j <=6 - i; j++){
            cout<<"* ";
        }
        for(int k = 2; k<=i; k++){
            cout<<"  ";
        }
        for(int l = 2; l <= i; l++){
            cout<<"  ";
        }
        for(int m = 1; m<= 6-i; m++){
            cout<<"* ";
        }
    cout<<endl;
    }
    for(int i = 1; i<=5;i++){
        for(int j = 1; j <=i; j++){
            cout<<"* ";
        }
        for(int k = 1; k <= 5-i; k++){
            cout<<"  ";
        }
        for(int l =1; l <= 5 - i; l++){
            cout<<"  ";
        }
        for(int m = 1; m <= i; m++){
            cout<<"* ";
        }
    cout<<endl;
    }
    return 0;
}
