// Learning C++ 
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    float flt;
    int32_t sgn;
    uint32_t usgn;

    flt = -7.66; //no trailing f (-7.66f) so defaults to a double
    sgn = flt;
    usgn = flt;

    std::cout << " float: " << flt << std::endl;
    std::cout << " int32: " << sgn << std::endl;
    std::cout << " uint32: " << (int32_t) usgn << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
