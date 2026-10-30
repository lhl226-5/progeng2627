#include <iostream>
#include <vector>

int main(){
    //This is a function which allows a vector to be defined with a specified dimension;
    //subsequently the function repeatedly acquires numerical inputs until the number of requested
    //elements have been entered as aligned with the vector dimension or size
    //The function subsequently allows a secondary value to be entered and displays every
    //value that does not exceed the value entered (exclusive bound)
    int number_of_elements, next_input, threshold;
    std::vector <int> vector_of_numbers;
    std::cout << "Enter the size of the vector (n): " << std::endl;
    std::cin >> number_of_elements;
    for(int i = 0; i < number_of_elements; i++){
        std::cout << "Enter a number: " << std::endl;
        std::cin >> next_input;
        vector_of_numbers.push_back(next_input);
    }
    std::cout << "Enter an exclusive upper bound: " << std::endl;
    std::cin >> threshold;
    std::cout << "The numbers previously entered that are less than " << threshold << " are:" << std::endl;
    for(int i = 0; i < vector_of_numbers.size(); i++){
        if (vector_of_numbers[i] < threshold){
            std::cout << vector_of_numbers[i] << std::endl;
        }
    }


}