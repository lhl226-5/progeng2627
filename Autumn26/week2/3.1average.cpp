#include <iostream>
int main(){
    //This function allows the user to enter multiple integers
    //as individual inputs and calculates a running average (mean)
    //of every integer retrieved from input values which is revised
    //and output after each new integer until 0 is entered to conclude
    //the iterative structure
    int next_number;
    double mean, total = 0, values_entered = 0;
    std::cout << "Enter a number: " << std::endl;
    std::cin >> next_number;
    while (next_number != 0){
        total = total + next_number;
        values_entered = values_entered + 1;
        mean = total / values_entered;
        std::cout << "The average (mean) so far is: " << mean << std::endl;
        std::cout << "Enter a number: " << std::endl;
        std::cin >> next_number;
    }
}