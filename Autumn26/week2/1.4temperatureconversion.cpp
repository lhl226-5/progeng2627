#include <iostream>
int main(){
    //This is a function which accepts a temperature in degrees
    //Celsius and outputs the corresponding temperature in Fahrenheit
    //utilising the standard formula
    double celsius, fahrenheit;
    std::cout << "Enter a temperature in degrees Celsius: ";
    std::cin >> celsius;
    fahrenheit = (celsius * (9/5.0)) + 32;
    std::cout << "Temperature in degrees Fahrenheit: " << fahrenheit;
    
}