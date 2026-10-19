#include <iostream>
int main(){
    //This function calculates the nth power of a given value x and outputs the final result
    //whilst utilising a for loop to carry out the index operation x^n
    int x, n, value = 1;
    std::cout << "Enter a value (x) to be raised to a power: " << std::endl;
    std::cin >> x;
    std::cout << "Enter the index (power) to be applied to the value (x): " << std::endl;
    std::cin >> n;
    for (int i = 0; i < n; i++){
        value = value * x; //Since the actual value n is excluded from the iteration, it offsets the initialisation at i = 0 (zero-indexed count)
    }
    std::cout << "Result of " << x << "^" << n << ": " << value << std::endl;
}