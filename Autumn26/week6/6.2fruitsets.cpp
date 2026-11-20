#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <string>

int search_vector(std::string s, const std::vector<std::string> & vin){
    for (int element_index = 0; element_index < vin.size(); element_index++){
        if(vin[element_index] == s){
            //Utilises an early return procedure, ensuring the function concludes
            //immediately after this condition is satisfied and fulfilled
            return element_index;
        }
    }
    return -1;
}

void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    for (int element_position = 0; element_position < vin1.size(); element_position++){
        vout.push_back(vin1[element_position]);
        //This writes every element in the first vector into the union set vector systematically
        //by delivering each value into the variable that represents the previously established vector
    }
    for (int element_location = 0; element_location < vin2.size(); element_location++){
        //the interval used for this iteration already accounts for zero-indexing of vectors by offseting
        //the boundaries by 1 by including the lower boundary of 0 but excluding the upper boundary yielded by
        //using the size function and hence the corresponding indices of the vector are aligned and can be accessed without error
        if ((search_vector(vin2[element_location], vin1)) == -1){
            vout.push_back(vin2[element_location]);
            //For every element or value present in the second vector that is not already
            //incorporated in the union set by being present in the first vector, the transfer
            //of these remaining values into the union set vector occurs, and this prevents any
            //values that are present in both vectors being duplicated or inserted twice into the eventual union file
            //hence completing the collection of values necessitated
        }
    }
    std::ofstream outfile;
    //associates a stated file name as required with the variable referred to as outfile
    outfile.open("union.txt");
    for (int i = 0; i < vout.size(); i++){
        outfile << vout[i] << std::endl;
        //Individually writes each union set value into the file using this iterative structure
    }
    outfile.close();
}

void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    for(int i = 0; i < vin1.size(); i++){
        //Any values that are present in the first vector (and hence first file) and can additionally
        //be located in the second vector (and by extension corresponding file) are appended
        //to the intersection vector
        if(search_vector(vin1[i], vin2) != -1){
            vout.push_back(vin1[i]);
        }
    //The aforementioned iterative structure is not repeated for the second vector due to the condition
    //that a value must exist in both vectors to be included and hence every possible eligible value has already
    //been evaluated through its presence in the first vector, which is a necessary condition for being
    //implemented into the intersection vector (any further inspection would lead to redundant results
    //as the identified values would simply be identical and hence by omitting this process it avoids copied results)
    }
    std::ofstream outfile;
    outfile.open("intersection.txt");
    for (int j = 0; j < vout.size(); j++){
        outfile << vout[j] << std::endl;
    }
}



int main(){
    std::string file_name_one;
    std::string file_name_two;
    std::cout << "Enter the name of the first input file: " << std::endl;
    std::cin >> file_name_one;
    std::cout << "Enter the name of the second input file: " << std::endl;
    std::cin >> file_name_two;

    std::ifstream infile1;
    std::ifstream infile2;
    infile1.open(file_name_one);
    infile2.open(file_name_two);
    if (!infile1.is_open() || !infile2.is_open()){
        std::cout << "Error opening files" << std::endl;
        return EXIT_FAILURE;
    }
    std::vector<std::string> vector_file_one;
    std::vector<std::string> vector_file_two;
    std::vector<std::string> union_vector_created;
    std::vector<std::string> intersection;
    std::string element_located;
    while (infile1 >> element_located){
        vector_file_one.push_back(element_located);
    }
    infile1.close();
    while(infile2 >> element_located){
        vector_file_two.push_back(element_located);
    }
    infile2.close();
    
    union_vector(vector_file_one, vector_file_two, union_vector_created);
    intersection_vector(vector_file_one, vector_file_two, intersection);
}