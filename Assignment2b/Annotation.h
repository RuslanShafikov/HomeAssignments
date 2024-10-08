/*Assignment2b

Шафиков Руслан Альвиртович, группа 24.Б83-мм

Contacts
st112650@stdudent.spbu.ru

Description
The program reads file containing integers and arithmetical operations. Transforms input into reversed poland notation and then calculates the final result.

*/

#ifndef poland
#define poland
bool isPrioretized(char a, char b);
int calc(char ch, int a, int b);
void toPrefix(char* array, int size, int operatorSize);
int PrefixCalculator(char* array, int size, int operandSize);
int countOperands(char* array, int size);
#endif
