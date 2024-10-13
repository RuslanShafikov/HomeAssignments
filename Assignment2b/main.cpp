/*Assignment2b

Шафиков Руслан Альвиртович, группа 24.Б83-мм

Contacts
st112650@stdudent.spbu.ru

Description
The program reads file containing integers and */-+ arithmetical operations in reversed poland notation and then calculates the final result.
*/
#include "Annotation.h"

int main( int argc, char* argv[])
{
    const char* inputFileName = argv[1];
    const char* outputFileName = argv[2];
    std::ifstream infile;
    std::ofstream outfile;

    infile.open(inputFileName, std::ios::binary | std::ios::in);
    if (!infile) {
        std::cerr << "Error in opening input file" << std::endl;
        return 1;
    }


    outfile.open(outputFileName, std::ios::binary | std::ios::out);
    if (!outfile) {
        std::cerr << "Error in opening output file" << std::endl;
        return 2;
    }


    std::string line, expression = "";

    while (std::getline(infile, line)) {
        expression += line + " ";
    }

    int length = expression.size();
    // checking whether input is correct
    for (int i = 0; i < length; ++i) {
        if (!(expression[i] == ' ' || expression[i] == '.' || expression[i] == '+' || expression[i] == '*' || expression[i] == '/' || expression[i] == '-' || ((expression[i]-'0')>=0 && expression[i]-'0' <= 9))) {
            outfile << "Please, provide the correct data";
            return -1;
        }
    }

    for (int i = 1; i < length; ++i) {
        if (expression[i - 1] == '/' && expression[i] == '0') {
            outfile << "Division by 0 is prohibitted, please, rewrite your expression";
            return -1;
        }
    }

   
    int size = integersCount(expression);
    double* stack = new double[size];
    double res = calculatePostfix(size, expression, stack);
    outfile << res;
    infile.close();
    outfile.close();
    delete[] stack;
    return 0;
}