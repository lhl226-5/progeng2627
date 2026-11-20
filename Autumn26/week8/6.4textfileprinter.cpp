#include <iostream>
#include <vector>
#include <fstream>

//argc is the number of command line arguments
//argv is an array of C-style strings
//we will see that this means more in detail later on

int main(int argc, char* argv[]){
    std::ifstream input_file;
    std::string temp;
    argc = 2;
    input_file.open(argv[1]);
    while(input_file >> temp){
        std::cout << temp << std::endl;
    }
    input_file.close();
}

