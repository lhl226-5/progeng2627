#include <iostream>
#include <vector>

int search_vector(int n, const std::vector<int>& vin){
    //This function traverses through a vector received as a constant parameter and identifies
    //the index location of the first instance of a submitted value also supplied as an argument
    //A linear search implementation has been used due to the fact that there are no
    //scalability requirements and that exclusively the first instance is required, 
    //albeit with a larger assortment of values this function may progressively become inefficient intrinsically
    //Additionally, the early return optimises the efficiency where possible
    for (int i = 0; i < vin.size(); i++){
        if (vin[i] == n){
            return i;
        }
    }
    return -1;
}

int main(){
    //Function tests particular cases extensively and automatically
    std::vector<int> new_vector;
    new_vector = {3, 5, -4, 7, 12, 3, 0, 5, 1, 14, 10, -3, 7, 3, 2, 15};
    //Expected output: 0 (and no other values)
    std::cout << search_vector(3, new_vector) << std::endl;
    //Expected output: -1
    std::cout << search_vector(23, new_vector) << std::endl;
    //Expected output: 3 (and no other values)
    std::cout << search_vector(7, new_vector) << std::endl;
    //Expected output: 11
    std::cout << search_vector(-3, new_vector) << std::endl;
    //Expected output: -1
    std::cout << search_vector(4, new_vector) << std::endl;
    //Expected output: 15
    std::cout << search_vector(15, new_vector) << std::endl;
}