#include <iostream>
#include <cmath>
//necessary to import this library in order to successfully utilise the exponential function

int main(){
    //This is a procedure which utilises the std::pow function in order to produce the sum of the indices of a base number
    //provided (x), up to and including the nth index (n); an extension of the standard library is necessitated in order
    //to access the corresponding dedicated function
    double x, n, accumulated_index_terms;
    accumulated_index_terms = 0;
    std::cout << "Enter a base number: " << std::endl;
    std::cin >> x;
    std::cout << "Enter a maximum index: " << std::endl;
    std::cin >> n;
    for (int i = 1; i <= n; i++){
        accumulated_index_terms = accumulated_index_terms + std::pow(x, i);
    }
    std::cout << "Sum of the indices of the base number up to the order " << n << " inclusive: " << accumulated_index_terms << std::endl;
}