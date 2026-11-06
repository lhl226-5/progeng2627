#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>

int main(){
    std::ifstream infile;
    infile.open("test.txt");
    //This file name has been amended to account for a different file to test
    //this approach with strings (hence increasing the available scope)
    std::vector<std::string> v;
    if(!infile.is_open()){
        std::cout << "Error opening file: " << std::endl;
        return EXIT_FAILURE;
    }
    std::string tmp;

    while(infile >> tmp){
        v.push_back(tmp);
        //instead of printing the values as previously encountered, the extracted
        //digit strings (integers) are stored in a vector

    }
    infile.close();
    for (int index = (v.size() - 1); index >= 0; index--){
        //selects a designated interval spanning the entire interval of the vector indices
        std::cout << v[index] << std::endl;
    }
}