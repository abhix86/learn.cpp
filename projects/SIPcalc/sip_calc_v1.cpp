#include <iostream>
#include <cmath> // for math like the one i used, 'pow'
#include <iomanip>  // To use fixed and setprecision
#include <cstdlib> // For exit()

int main() {
    // variables assignment
    int monthlyInvestment; // Monthly investment like: 1000
    int yearlyInterestRate; // Yearly interest rate
    int years; // Number of years for SIP

    // Input
    std::cout << "Enter the Monthly Investment Amount:  ";
    std::cin >> monthlyInvestment;
    std::cout << "Entered value: " << monthlyInvestment << std::endl;
    // if program to check for integer value
    if(std::cin.fail()) {
        std::cout << "Check your Fu**ing value, you dumb fuck" << std::endl;
        exit(1);
    }

    std::cout << "Enter the Yearly Interest Rate:  ";
    std::cin >> yearlyInterestRate;
    std::cout << "Entered value: " << yearlyInterestRate << "%" << std::endl;
    // if program again, note that it could be easier but I DON'T KNOW... not now least
    if(std::cin.fail()) {
        std::cout << "Check your Fu**ing value, you dumb fuck" << std::endl;
        exit(1);
    }

    std::cout << "Enter the years for the SIP:  ";
    std::cin >> years;
    std::cout << "Entered value: " << years << "years" << std::endl;
    // if
    if(std::cin.fail()) {
        std::cout << "Check your Fu**ing value, you dumb fuck" << std::endl;
        exit(1);
    }

    // for better visual. again, i don't know c++ completely yet, so...
    std::cout << "\n";
    std::cout << "\n";
    std::cout << "\n";
    std::cout << "Your result here: \n";

    // sip Calculation
    int months = years * 12;  // Number of months
    double monthlyInterestRate = (yearlyInterestRate / 100.0) / 12; // Monthly interest rate as a decimal

    /* SIP formula(got from google. so if any mistake on output or differ output from somewhere, blame the google :)
    formula: A = P * [(1 + r)^n - 1] / r * (1 + r)
    */
    double sip = monthlyInvestment * (pow(1 + monthlyInterestRate, months) - 1) / monthlyInterestRate * (1 + monthlyInterestRate);

    // Output the result in lakhs
    double sipInLakhs = sip / 100000;  // Convert SIP to lakhs
    // Output the result with fixed format and 2 decimal places
    std::cout << std::fixed << std::setprecision(2); // Set precision to 2 decimal places
    std::cout << "Total Value: " << sip << "(" << sipInLakhs << " lakhs)" << std::endl;

    // extra details
    std::cout << "\n";
    std::cout << "\n";
    std::cout << "Additional details: " << std::endl;
    int a = monthlyInvestment * months;
    int b = sip - a;
    double lakhsA = a / 100000;
    double lakhsB = b / 100000;
    std::cout << "Total Invested in " << years << "years " << "(" << months << " months) " << lakhsA << "lakhs" << " (" << a << ")" << std::endl;
    std::cout << "Estimated returns: " << lakhsB << "lakhs" << " (" << b << ")";


    return 0;
}