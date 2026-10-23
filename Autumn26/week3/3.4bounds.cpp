#include <iostream>
int main(){
    //This function allows numbers to be repeatedly entered and displays the current maximum value and minimum
    //value (the boundary or peripheral values) that has been registered respectively after each new input
    //and thus maintains a running observation regarding these attributes
    int n, current_maximum, current_minimum;
    std::cout << "Please enter a number:" << std::endl;
    std::cin >> n;
    //since the first value entered is the sole value accounted for initially, the value is subsequently
    //initialised as the starting threshold for both the minimum and maximum values, and thus allowing coherence
    //as other values will eventually cause these recorded values to decrease and increase accordingly
    //this is preferable to setting a pre-determined value (like 0) since this allows for full compatibility
    //with negative numbers likewise
    current_maximum = n;
    current_minimum = n;
    std::cout << "Maximum so far: " << current_maximum << std::endl;
    std::cout << "Minimum so far: " << current_minimum << std::endl;
    while (n != 0){
        std::cout << "Please enter a number: " << std::endl;
        std::cin >> n;
        if (n > current_maximum){
            current_maximum = n;
        }
        if (n < current_minimum){
            current_minimum = n;
        }
        std::cout << "Maximum so far: " << current_maximum << std::endl;
        std::cout << "Minimum so far: " << current_minimum << std::endl;
        //The iteration then repeats, continuing to repeat the prompt until 0 has been received
    }
}