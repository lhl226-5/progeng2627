#include <iostream>
void text_swap(std::string& first_string, std::string& second_string){
    std::string temp;
    temp = first_string;
    first_string = second_string;
    second_string = temp;
}

int main(){
    //Function which obtains two variables containing text and swaps their respective contents
    std::string first_string, second_string;
    std::cout << "Please enter two strings of text (separate the strings with a space): " << std::endl;
    std::cin >> first_string >> second_string;
    std::cout << "You entered first string: " << first_string << "; followed by second string: " << second_string << std::endl;
    text_swap(first_string, second_string);

    std::cout << "After swapping the values:" << std::endl;
    std::cout << "First string: " << first_string << "; followed by new second string: " << second_string << std::endl;
}