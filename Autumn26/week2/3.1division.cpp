#include <iostream>
int main(){
    //This function calculates the quotient and remainder of an
    //integer division procedure between two numbers by conducting
    //a repeated subtraction mechanism and outputs the corresponding components
    //of the operation as aforementioned
    int divisor, dividend, quotient = 0, remainder;
    std::cout << "Enter a number: " << std::endl;
    std::cin >> dividend;
    std::cout << "Enter a number to divide the first number by: " << std::endl;
    std::cin >> divisor;
    while (dividend >= divisor){
        dividend = dividend - divisor;
        quotient = quotient + 1;
    }
    remainder = dividend;
    std::cout << "Result of the integer division calculation: " << quotient << " with remainder " << remainder << std::endl;

}