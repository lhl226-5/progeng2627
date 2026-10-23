#include <iostream>
int main(){
    //This function allows a natural number to be submitted and consequently tests the Collatz conjecture on the value
    //by initially determining whether it is odd or even and then applying the relevant procedure depending on the status
    //identified, this process is continuously applied until the number descends to 1 and a sequence is generated
    //Additionally, the highest number that is attended to is displayed, along with the number of evaluations required before
    //the value 1 is encountered ultimately
    int current_value, maximum_number, number_of_tests;
    number_of_tests = 0;
    std::cout << "Enter a number: " << std::endl;
    std::cin >> current_value;
    maximum_number = current_value;
    //Starting value would assume the initial threshold
    while (current_value != 1){
        //The Collatz conjecture concludes when 1 is obtained
        if (current_value % 2 == 0){
            //If the current value is even, hence remainder 0 when divided by 2
            current_value = current_value / 2;
        }
        else {
            //The alternative case would inevitably be an odd number result
            current_value = (current_value * 3) + 1;
        }
        std::cout << current_value << " ";
        number_of_tests = number_of_tests + 1;
        if (current_value > maximum_number){
            maximum_number = current_value;
        }
    }
    std::cout << std::endl << "The number of tests required to reach 1: " << number_of_tests << std::endl;
    std::cout << "The maximum number generated in the process: " << maximum_number << std::endl;
}