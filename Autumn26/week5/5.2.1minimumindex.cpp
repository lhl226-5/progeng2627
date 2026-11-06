#include <iostream>
#include <vector>

int min_vector_element(const std::vector<double>& vin){
    //function which iterates through a vector and extracts the index number
    //of the smallest value present within the vector, otherwise returning -1
    //if the vector is empty
    if (vin.size() == 0){
        //this results in an early return in this exception instance
        return -1;
    }
    //else statement is redundant due to the early return mechanism
    int minimum_index = 0;
    for (int index = 0; index < vin.size(); index++){
        if (vin[index] < vin[minimum_index]){
            minimum_index = index;
        }
    }
    return minimum_index;
}  

int main(){
    //Function which contains pre-determined test cases
    std::vector<double> v;
    v = {2, 3, -5, 4, 3};
    //Expected output would be 2
    std::cout << (min_vector_element(v)) << std::endl;
    v = {-3, 9.2, 13, -8.4, -15.2, -16.4};
    //Expected output would be 5
    std::cout << (min_vector_element(v)) << std::endl;
    v = {0.4, 0.2, 1.4, 5.4, 9.5};
    //Expected output would be 1
    std::cout << (min_vector_element(v)) << std::endl;
    v = {};
    //Expected output would be -1 (empty vector requirement)
    std::cout << (min_vector_element(v)) << std::endl;
    v = {3, 5, 3.1, 3.25, 3.01};
    //Expected output would be 0
    std::cout << (min_vector_element(v)) << std::endl;

}