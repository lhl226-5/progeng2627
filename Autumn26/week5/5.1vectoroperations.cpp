#include <iostream>
#include <vector>

int main(){
    //This program demonstrates an assortment of some of the most fundamental principles
    //that are feasible when handling vectors in C++
    std::vector <int> new_vector;
    int calculation;
    new_vector.push_back(4);
    new_vector.push_back(49);
    new_vector.push_back(32);
    calculation = new_vector[0] * (new_vector[1] + new_vector[2]);
    std::cout << calculation << std::endl;
    //This resultant calculation is equivalent to the following expression:
    //first element multiplied by the sum of the second and third elements
}