#include <iostream>
int main(){
    int number;
    std::cin >> number;
    while ((number > -11) && (number < 11)){
        std::cout << number << std::endl;
        std::cin >> number;
    }
    
}