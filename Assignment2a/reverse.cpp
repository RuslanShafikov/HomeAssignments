/*  Assignment 2a
Шафиков Руслан Альвиртович, group 24.Б83-мм
Contacts
st112650@stdudent.spbu.ru
Description
Home assingment 2a. 
The program returns the binary file upside down
*/

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