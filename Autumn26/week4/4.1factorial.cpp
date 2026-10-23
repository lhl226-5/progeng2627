#include <iostream>
int myfactorial (int in){
    //in is not a special name
    //just a regular parameter name
    int factorial = 1;
    //a variable that will store the result
    for (int i = 1; i <= in; i++){
        factorial = factorial * i;
    }
    return factorial;
    //return the result and do not print anything within the function
}

int main(){
    int n;
    std::cout << "Please enter a number: " << std::endl;
    std::cin >> n;
    std::cout << "factorial of " << n << ": " << myfactorial(n) << std::endl;
}
