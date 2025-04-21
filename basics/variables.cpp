#include <iostream>
#include <vector>

/* COVERED TOPIC:
1.) Variables type: int, char, boolean, double, and string
2.) const, it prevents values from further change
3.) namespace, is a method of creating a value with same variables in diff container 
4.) typedef and it's aliases (meaning typedef's 2 more diff ways to use it, but make sure you have <vector> included)
    what does typedef do ? it creates the aliases for your function
*/

typedef std::vector<std::pair<std::string, int>> name_t; // performed on line number: 53
typedef std::string text_t;
using nick_t = std::string;

namespace idkWhatToName{
    const int age = 26;
    const std::string name = "Abhishek Kumar singh";
    const bool realBrother = true;
    const bool student = false;
}
int main() {
    // integer value
    const int age = 21; // const prevents your value being changed after once assigned
    int year = 2025;
    int days = 7.5;

    // single character
    const char grade = 'A';
    char initial = 'C';
    char dollarSign = '$';

    // Boolean (true false)
    const bool student = false;
    bool power = true;
    const bool forSale = true;

    // double is better option to store decimal digits
    double gpa = 8.5; // never in my life I've ever got gpa like this... the sad life of mine
    double weight = 75.2; // not true.. um.. wh- nvm

    // string object are those which represents a sequence of code text
    const std::string firstName = "Abhinash";
    const std::string lastName = " Singh";

    // print
    std::cout << "\n" << std::endl;
    std::cout << firstName << lastName << ", My age: "<< age << ", Am I a student? : " << student << " what was my grade in 10th: " << grade << std::endl;
    std::cout << "Am i for sale ?... well that depends on how much you can spend on buying me " << "(" << forSale << ")" << std::endl;
    std::cout << "\n" << std::endl;
    std::cout << "Brother's name: " << idkWhatToName::name << ", Age: " << idkWhatToName::age << ", Is he my real brother? " << idkWhatToName::realBrother;
    std::cout << "\n" << std::endl;


    name_t school = {
        {"Spring Dale sr sec", 2014-2020},
        {"Kamla Lohatia", 2020-2024}
    };
    for (const auto& entry : school) {
        std::cout << "School Name: " << entry.first << ", Year: " << entry.second << std::endl;
    } // to print 
    text_t okay = "okay";
    text_t notOkay = "Overwhelming shit... not this but entire c++";
    std::cout << okay << ", This is a " << notOkay << std::endl;

    nick_t myNick = "Never got one";
    std::cout << "My nick name: " << myNick;

    
    return 0;

}