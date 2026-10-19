#include <iostream>
int main(){
    for (int i = 0; i < 7; i++){
        std::cout << i << std::endl;
    }
}
//My expectation of the program is that it will output each of the integers from 0 to 6 (excluding 7)
//as the value of i continuously increments until the condition is no longer satisfied (the upper bound of 7)