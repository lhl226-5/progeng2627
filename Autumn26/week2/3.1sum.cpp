#include <iostream>
int main(){
    //This function allows multiple integers to be entered
    //and maintains a running total of the accumulated value
    //of every number submitted so far which is updated and
    //output on each occasion each integer response is registered
    //until the user enters 0
    int next_number, total = 0;
    std::cout << "Enter a number: " << std::endl;
    std::cin >> next_number;
    while (next_number != 0){
        total = total + next_number;
        std::cout << "The sum so far is: " << total << std::endl;
        std::cout << "Enter a number: " << std::endl;
        std::cin >> next_number;
    }
}