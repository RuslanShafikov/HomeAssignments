/*Assignment2b

Шафиков Руслан Альвиртович, группа 24.Б83-мм

Contacts
st112650@stdudent.spbu.ru

Description
The program reads file containing integers and arithmetical operations. Transforms input into reversed poland notation and then calculates the final result.

*/
#ifndef My_Poland
#define My_Poland
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
bool isOperator(std::string ch);
int integersCount(std::string input);
double calculatePostfix(int size, std::string expression, double* stack);
double calc(std::string ch, double a, double b);
int integersCount(std::string input);
#endif
