#include <iostream>

int main() {
    // integer value
    int age = 21;
    int year = 2025;
    int days = 7.5;

    // single character
    char grade = 'A';
    char initial = 'C';
    char dollarSign = '$';

    // Boolean (true false)
    bool student = false;
    bool power = true;
    bool forSale = true;

    // double is better option to store decimal digits
    double gpa = 8.5; // never in my life I've ever got gpa like this... the sad life of mine
    double weight = 75.2; // not true.. um.. wh- nvm

    // string object are those which represents a sequence of code text
    std::string firstName = "Abhinash";
    std::string lastName = " Singh";
    std::cout << firstName << lastName << ", My age: "<< age << ", Am I a student? : " << student << " what was my grade in 10th: " << grade << std::endl;
    std::cout << "Am i for sale ?... well that depends on how much you can spend on buying me " << "(" << forSale << ")"; 
    return 0;

}