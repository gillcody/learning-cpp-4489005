// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::string str;
    std::cout << "Enter your name: " << std::flush;
    std::cin >> str;
    std::cout << "Hello, " << str;

    std::cout << std::endl << std::endl;
    return (0);
}
