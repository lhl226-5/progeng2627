#include <iostream>
int main(){
    //This function continually receives a string input and displays
    //this output visibly back to the user similar to an echo
    //and repeats this process until "STOP" is entered
    std::string text;
    std::cin >> text;
    while (text != "STOP" && text != "Stop" && text != "stop"){
        std::cout << text << std::endl;
        std::cin >> text;
    }
    
}