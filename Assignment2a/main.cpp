#include <iostream>
#include <fstream>
    int main(int argc, char* argv[]) {
        if (argc < 3) {
            std::cerr << "Использование: " << argv[0] << " <input_file> <output_file>" << std::endl;
            return 1;
        }

        const char* inputFileName = argv[1];
        const char* outputFileName = argv[2];
    std::ifstream infile;
    std::ofstream outfile;

    infile.open(inputFileName, std::ios::binary | std::ios::out);
    if (!infile) {
        std::cerr << "Ошибка при открытии файла" << std::endl;
        return 1;
    }


    outfile.open(outputFileName, std::ios::binary | std::ios::out);
    if (!outfile) {
        std::cerr << "Ошибка при открытии выходного файла" << std::endl;
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
       //std::cout << array << std::endl;
    

    
    delete[] array;

    infile.close();
    outfile.close();
    
   
    return 0;
} 