#include <iostream>
int main(){
    //This function receives an integer value and calculates its corresponding factorial
    //by using a for loop and subsequently returns the final result clearly
    int number, factorial = 1;
    //This accounts for the situation where 0! = 1
    std::cout << "Enter a number to calculate its factorial: " << std::endl;
    std::cin >> number;
    for (int value = 1; value <= number; value++){
        factorial = factorial * value;
    }
    std::cout << number << " factorial is: " << factorial << std::endl;
}