// Learning C++ 
// Exercise 03_10
// Using Objects with Vectors, by Eduardo Corpeño 

#include <vector>
#include <iostream>
#include <string>
#include "cow.h"

int main(){
    std::vector<cow> cattle;

    cattle.push_back(cow("Kyle", 4, cow_purpose::meat));
    cattle.push_back(cow("Jerry", 9, cow_purpose::dairy));
    cattle.push_back(cow("Todd", 3, cow_purpose::hide));
    cattle.push_back(cow("Lou", 10, cow_purpose::pet));

    std::cout << "The first cow is " << cattle.begin()->get_name() <<std::endl;
    std::cout << "At index 1 we have " << cattle[1].get_name() << std::endl;
    std::cout << "Next to last is " << prev(cattle.end(), 2)->get_name() << std::endl;
    std::cout << "The last cow is " << (cattle.end() - 1)->get_name() << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
