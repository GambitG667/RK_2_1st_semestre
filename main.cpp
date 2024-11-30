#include <iostream>
#include "header.hpp"



int main(){
    int* a  = new int[3];
    int* b  = new int[4];
    for(int i{0}; i < 3; ++i){
        a[i] = i*5+1;
        std::cout << a[i]<<' ';
    }
    std::cout << std::endl;
    for(int i{0}; i < 4; ++i){
        b[i] = i*6+3;
        std::cout << b[i]<<' ';
    }
    std::cout << std::endl;

    int* new_array = join(b, 4, a, 3);
    for(int i{}; i<7; ++i){
        std::cout << new_array[i] << ' ';
    }
    std::cout<< std::endl;
    return 0;
}