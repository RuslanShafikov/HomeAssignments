/*  Assignment 2a
Шафиков Руслан Альвиртович, group 24.Б83-мм
Contacts
st112650@stdudent.spbu.ru
Description
Home assingment 2a. 
The program returns the binary file upside down
*/

#include <iostream>
#include <fstream>
    int main(int argc, char* argv[]) {
        if (argc < 3) {
            return 1;
        }

        const char* inputFileName = argv[1];
        const char* outputFileName = argv[2];
    std::ifstream infile;
    std::ofstream outfile;

    infile.open(inputFileName, std::ios::binary | std::ios::out);
    if (!infile) {
        std::cerr << "Error opening input file" << std::endl;
        return 1;
    }


    outfile.open(outputFileName, std::ios::binary | std::ios::out);
    if (!outfile) {
        std::cerr << "Error opening output file" << std::endl;
        return 1; 
    }

    infile.seekg(0, std::ios::end);
    std::streamsize size = infile.tellg();
    infile.seekg(0, std::ios::beg);

    char* array = new char[size + 1];
    infile.read(array, size);

    for (std::streamsize i = size - 1; i >= 0; --i) {
        outfile << array[i];
    }
    
    
    delete[] array;

    infile.close();
    outfile.close();
    
   
    return 0;
} 