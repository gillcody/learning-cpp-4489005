// Learning C++ 
// Exercise 02_11
// Type Casting Examples, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    int fahr = 100;
    int cels;

    cels = ((float)5/9.0) * (fahr - 32);

    std::cout << "Fahrenheit: " << fahr << std::endl;
    std::cout << "Celsius: " << cels << std::endl;

    double weight = 10.99;

    std::cout << std::endl;
    std::cout << "Float:            " << weight << std::endl;
    std::cout << "Integer part:     " << (int) weight << std::endl;
    std::cout << "Fractional part:  " << (int)((weight - (int) weight) * 10000) << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
