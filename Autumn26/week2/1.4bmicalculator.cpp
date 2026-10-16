#include <iostream>
int main(){
    //This function receives a height in metres and a mass
    //in kilograms and calculates the relevant BMI evaluation from these metrics
    double height, mass, result;
    std::cout << "Enter your height (in metres): ";
    std::cin >> height;
    std::cout << "Enter your mass (in kilograms): ";
    std::cin >> mass;
    result = mass / (height * height);
    std::cout << "Your BMI score is: " << result;
}