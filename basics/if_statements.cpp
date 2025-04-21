#include <iostream>

using namespace std;

// the if statement checks a condition.
// if it's true, it runs the code inside.
// if it's false, the else part runs instead.
// it's like: if (condition is true) { do this } else { do that }
// easy way for if-else is ternary operator, donated as: ?:(performed on line 31)


int main(){
    int age;
    cout << "Write your age: ";
    cin >> age;

    /*
    if(age >= 100){
        cout << "Oh, Man! How's your back doing, old man ?";
    }
    else if (age >= 18) {
        cout << "Welcome, you've hit the adulthood!"; // changed word 'poverty' to adulthood coz sm1 said it's not right uff
    }
    else if(age < 0){
        cout << "um.. gLitch in the matrix ? YOU HAVEN'T BEEN BORN YET DUDEE!!";
    }
    else{
        cout << "Aww, you're still a baby right now";
    } */

    age >= 100 
    ? cout << "Oh, Man! How's your back doing, old man ?" : age >= 18 ? cout << "Welcome, you've hit the adulthood!" : cout << "You're still a baby, kiddo!";
    /*: age >= 18 
        ? cout << "Welcome, you've hit the adulthood!" 
        : cout << "You're still a baby, kiddo!";*/
    if(age >= 18){
    int num1;
    cout << "\nWrite any digit between (1-10): ";
    cin >> num1;

    (num1 == 1) ? (cout << "The number is One"):
    (num1 == 2) ? (cout << "The number is Two"):
    (num1 == 3) ? (cout << "The number is Three"):
    (num1 == 4) ? (cout << "The number is Four"):
    (num1 == 5) ? (cout << "The number is Five"):
    (num1 == 6) ? (cout << "The number is Six"):
    num1 == 7 ? cout << "The number is Seven":
    num1 == 8 ? cout << "The number is Eight":
    num1 == 9 ? cout << "The number is Nine":
    num1 == 10 ? cout << "The number is Ten":
    (cout << "The number is not recognized");
    }   

    return 0;
}