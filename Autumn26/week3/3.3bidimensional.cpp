#include <iostream>
int main(){
    //This function obtains an input (integer) specifying the dimensions of a two-dimensional figure
    //constructed using asterisks where the length and the width of the structure established are identical
    //meaning that it should be approximately reminiscent of a square and that this is completed using while loops
    int dimension_size, length = 0, width = 0;
    std::cout << "Enter a dimension size: ";
    std::cin >> dimension_size;
    while (width < dimension_size){
        while(length < dimension_size){
            std::cout << "*"; //this procedure considers one row individually and fully forms each constituting row before focusing on the next collection of asterisks
            length = length + 1;
        }
        std::cout << std::endl; //transitions and proceeds to the subsequent row
        length = 0; //resets the counter to zero for the following row to allow asterisks to be inserted accordingly
        width = width + 1;
    }
}