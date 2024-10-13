/*Assignment2b

Шафиков Руслан Альвиртович, группа 24.Б83-мм

Contacts
st112650@stdudent.spbu.ru

Description
The program reads file containing integers and arithmetical operations. Transforms input into reversed poland notation and then calculates the final result.

*/
#include "Annotation.h"
bool isOperator(std::string ch) {
	if ( ch == "-" || ch == "+" || ch == "*" || ch == "/") {
		return true;
	}

	return false;
}
int integersCount(std::string input) {
	int amount = 0;
	std::string exp;
	std::stringstream stream(input);
	while (stream >> exp) {
		if (isOperator(exp)) {

		}
		else if (exp == " ") {

		}
		else {
			++amount;
		}
	}
	return amount;
}

double calculatePostfix(int size, std::string expression, double* stack) {
	double* pointer = stack;
	std::string exp;
	std::stringstream stream(expression);
	int k = 0; // checks the amount of operands
	while (stream >> exp) {
		if (isOperator(exp)) {
			double second = *(pointer);
			double first = *(--pointer);
			double res = calc(exp, first, second);
			*(pointer) = res;
			--k;
		}
		else if (exp == " ") {

		}
		else {
			if (k != 0) {
				++pointer;
				*(pointer) = std::stod(exp);
			}
			else {
				*(pointer) = std::stod(exp);
			}
			++k;
		}
	}
	//delete[] stack;
	return *(pointer);
}


double calc(std::string ch, double a, double b) {
	if (ch == "+") {
		return a + b;
	}

	else if (ch == "-") {
		return a - b;
	}

	else if (ch == "*") {
		return a * b;
	}

	else if (ch == "/") {
		return a / b;
	}

	return -1.0;
}