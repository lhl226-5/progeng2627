#include <iostream>
int main(){
    //This is a function which allows the user to enter an amount in
    //pounds and the corresponding exchange rate between pounds and euros
    //before converting the submitted monetary value into euros
    double pounds, exchange_rate, euros;
    std::cout << "Enter an amount in pounds: " << std::endl;
    std::cin >> pounds;
    std::cout << "Enter the current pound to euro exchange rate: " << std::endl;
    std::cin >> exchange_rate;
    euros = pounds * exchange_rate;
    std::cout << "Entered amount in euros: " << euros << std::endl;

}