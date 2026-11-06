#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

int main(){
    //This function allows the user to enter the corresponding input
    //and output file names and subsequently the program navigates through
    //the input file, copying each element constituting the input file into a vector
    //and uses a decrement mechanism to implement the text "elements" (words)
    //into the named output file ultimately
    
    std::string inputfilename;
    //as usual not a special name
    std::cout << "Enter the name of an input file: " << std::endl;
    std::cin >> inputfilename;
    std::ifstream infile;
    infile.open(inputfilename);

    if (!infile.is_open()){
        std::cout << "Error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    std::vector<std::string> text_file_vector;
    std::string next_text_string;
    while (infile >> next_text_string){
        text_file_vector.push_back(next_text_string);
    }
    infile.close();

    std::string output_file_name;
    std::cout << "Enter the name of the output file: " << std::endl;
    std::cin >> output_file_name;
    std::ofstream output_file;
    output_file.open(output_file_name);

    if (!output_file.is_open()){
        std::cout << "Error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    for (int index = (text_file_vector.size() - 1); index >= 0; index--){
        output_file << text_file_vector[index] << std::endl;
    }
}