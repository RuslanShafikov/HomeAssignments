#include "reverse.h"
void fileReverse(std::streamsize size, char* array) {
    char* arrayCopy = new char[size];
    for (std::streamsize i = size - 1; i >= 0; --i) {
        arrayCopy[size-1-i]= array[i];
    }

    for (std::streamsize i = size - 1; i >= 0; --i) {
        array[i] = arrayCopy[i];
    }
    delete[] arrayCopy;
}