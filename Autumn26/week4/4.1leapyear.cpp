#include <iostream>
//we can define a function that returns a Boolean value
bool leap_year(int year){
    bool ly;
    if (year % 4 == 0){
        if (year % 100 == 0 && year % 400 != 0){
            ly = 0;
        }
        else{
            ly = 1;
        }
    }
    else{
        ly = 0;
    }
    return ly;
}

int main(){
    int input_year;
    std::cout << "Please enter a year" << std::endl;
    std::cin >> input_year;

    //a function returning a bool data type
    //can be directly used in the condition of an if statement

    if(leap_year(input_year)){
        std::cout << "It's a leap year" << std::endl;
    }
    else{
        std::cout << "It's not a leap year" << std::endl;
    }
}
