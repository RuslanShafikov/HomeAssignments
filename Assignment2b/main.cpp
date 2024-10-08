#include "Annotation.h"
#include <iostream>
#include <fstream>
int main(int argc, char* argv[])
{
    const char* inputFileName = argv[1];
    const char* outputFileName = argv[2];
    std::ifstream infile;
    std::ofstream outfile;

    infile.open(inputFileName, std::ios::binary | std::ios::in);
    if (!infile) {
        std::cerr << "Ошибка при открытии файла" << std::endl;
        return 1;
    }


    outfile.open(outputFileName, std::ios::binary | std::ios::out);
    if (!outfile) {
        std::cerr << "Ошибка при открытии выходного файла" << std::endl;
        return 2;
    }

    infile.seekg(0, std::ios::end);
    std::streamsize size = infile.tellg();
    infile.seekg(0, std::ios::beg);

    char* array = new char[size + 1];
    infile.read(array, size);
    //checking if the expression is valid
    for (int i = 0; i < size; ++i) {
        if (!(array[i] - '0' >= 0 && array[i] - '0' <= 9)) {
            if (array[i] != '+' && array[i]!='-' && array[i] != '/' && array[i] != '*' && array[i] != ' ') {
                outfile << "Error, pleas use only allowed symbols";
                return -1;
            }
        }
    }
    //checking division by 0
    for (int i = 1; i < size; ++i) {
        if ((array[i-1]== '/' && array[i]== '0')) {
             outfile << "Error, division by 0 is prohibited";
             return -1;
        }
    }

    if (array[size - 1] - '0' < 0 || array[size - 1] - '0' > 9) {
        outfile << "Error, the last symbol should be integer, not arithmetic operation";
        return -1;
    }


    int operandSize = 0; // array size for operands
    int operatorSize = 0; // array size for operators
    for (int i = 0; i < size; ++i) {
        while ((array[i] - '0' >= 0 && array[i] - '0' <= 9)) { ///
            ++operandSize;
            ++i;
        }

        if (array[i] == ' ') {

        }

        else {
            ++operatorSize;
        }
    }
    int num = countOperands(array, size);
    char* array1 = new char[size + 1 + num];
    int j = 0;
    for (int i = 0; i < size + 1 + num; ++i) {
        if ((array[j] == '+' || array[j] == '-' || array[j] == '/' || array[j] == '*')) {
            array1[i] = ' ';
            ++i;
            array1[i] = array[j];
            ++j;
        }
        else {
        array1[i] = array[j];
        ++j;
        }
    }
    toPrefix(array1, size + num + 1, operatorSize);

    int res = PrefixCalculator(array1, size + num + 1, operandSize);

    outfile << res;

    infile.close();
    outfile.close();
    delete[] array;
    delete[] array1;
    return 0;
}