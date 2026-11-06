#include <iostream>
#include <vector>

//Not an efficient function
double sum_vector(std::vector<double> vin){
    double sum = 0;
    for (int i = 0; i < vin.size(); i++){
        sum = sum + vin[i];
    }
    return sum;
}

int main(){
    std::vector<double> v;
    int number_of_elements;
    double submitted_value;
    std::cout << "Enter the number of values you would like to enter: " << std::endl;
    std::cin >> number_of_elements;
    for (int j = 0; j < number_of_elements; j++){
        std::cout << "Please enter a number: " << std::endl;
        std::cin >> submitted_value;
        v.push_back(submitted_value);
    }

    std::cout << "The sum is: " << sum_vector(v) << std::endl;

}