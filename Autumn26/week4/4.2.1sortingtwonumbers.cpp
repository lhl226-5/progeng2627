#include <iostream>

void myswap(double&a, double& b){
    //Function which automatically swaps the contents of two variables
    //by using a temporary variable to allow one value to be overwritten
    //while preserving the other value
    double temp;
    temp = a;
    a = b;
    b = temp;
}

void sort_two_numbers(double& s1, double& s2){
    //Function which sorts two numbers entered into ascending order
    if(s1 > s2){
        //If the first element is more significant comparatively, then the former value will be shifted
        //to a higher index position (no further swaps are necessary)
        myswap(s1, s2);
    }
}

int main(){
    double n1, n2;
    std::cout << "Please enter two numbers: " << std::endl;
    std::cin >> n1 >> n2;
    sort_two_numbers(n1, n2);
    std::cout << n1 << " " << n2 << std::endl;
}