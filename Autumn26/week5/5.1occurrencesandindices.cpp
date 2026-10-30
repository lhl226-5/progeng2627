#include <iostream>
#include <vector>

int main(){
    //This program allows a vector of a particular size that has been clarified
    //to be constructed with numbers that have been entered by the user and subsequently
    //enables the user to then search the completed vector structure by submitting a target
    //value; the vector is then searched and the number of collective instances
    //of the target value are output along with the index positions they are located at
    //within the vector if present within the established vector
    std::vector <int> collection_of_numbers;
    //This vector is utilised to actually contain the numbers, being progressively and systematically formulated
    std::vector <int> target_index_positions;
    //Additional vector which is necessitated in order to store any located instances
    //of the selected number to be assessed for
    int vector_size, required_number, submitted_value, frequency = 0;
    std::cout << "Please enter the size of the vector (n): " << std::endl;
    std::cin >> vector_size;
    for(int i = 0; i < vector_size; i++){
        std::cout << "Please enter a number to be added to the vector: " << std::endl;
        std::cin >> submitted_value;
        collection_of_numbers.push_back(submitted_value);
    }
    std::cout << "Please enter a number to be located: " << std::endl;
    std::cin >> required_number;
    for(int index = 0; index < collection_of_numbers.size(); index++){
        if(required_number == collection_of_numbers[index]){
            frequency = frequency + 1;
            target_index_positions.push_back(index);
        }
    }
    if (frequency == 0){
        std::cout << "There are no occurrences of " << required_number;
    }
    else{
        std::cout << "There are " << frequency << " occurrences of " << required_number << " at indices:" << std::endl;
        for (int i = 0; i < target_index_positions.size(); i++){
            std::cout << target_index_positions[i] << std::endl;
        }
    }
}