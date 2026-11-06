#include <iostream>
#include <fstream>
#include <cstdlib>
//cstdlib header is necessitated for EXIT_FAILURE

int main(){
    std::ifstream infile;
    std::string file_name;
    std::cout << "Enter the name of a file: " << std::endl;
    std::cin>> file_name;
    infile.open(file_name);

    if(!infile.is_open()){ //note the !: "if the file is not open"....
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
        //...after which we print an error message and we use the return to terminate function main
        //with code EXIT_FAILURE that represents an error with the file

    }
    //if the return is executed above and the program enters the if then the following
    //statements are not executed (the identical construct observed previously when no error occurs)
    int tmp;
    while(infile >> tmp){
        std::cout << tmp << std::endl;
    }
    infile.close();
}