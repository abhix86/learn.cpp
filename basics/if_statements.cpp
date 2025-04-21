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


    return 0;
}