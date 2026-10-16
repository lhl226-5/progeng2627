#include <iostream>
int main(){
    int number;
    std::cout << "please enter a number: " << std::endl;
    std::cin >> number;
    if (number % 3 == 0){
        std::cout << "this number is a multiple of 3" << std::endl;
    }
    else {
        std::cout << "this number is not a multiple of 3" << std::endl;
    }
}