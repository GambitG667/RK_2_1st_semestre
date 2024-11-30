#include <cstddef>


template <class T>
T* join(T* array1,std::size_t size1, T* array2, std::size_t size2){
    T* new_array = new T[size1+size2];
    for(int i{}; i<size1; ++i){
        new_array[i] = array1[i];
    }
    for(int i{}; i<size2; ++i){
        new_array[size1+i] = array2[i];
    }
    return new_array;
}