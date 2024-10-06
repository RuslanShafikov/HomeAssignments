#include "Annotation.h"
#include <iostream>
int calc(char ch, int a, int b) {
	if (ch == '+') {
		return a + b;
	}

	else if (ch == '-') {
		return a - b;
	}

	else if (ch == '*') {
		return a * b;
	}

	else if (ch == '/') {
		return a / b;
	}

	return -1;
}


void toPrefix(char* array, int size, int operatorSize) {
	// creating stacks
	char* polandNotation = new char[size];
	char* operatorStack = new char[operatorSize];
	char* operatorPointer = operatorStack;
	//int num = 0;
	int j = 0; //counter for stacks
	int k = 0; // counter for operator stack


	for (int i = 0; i < size; ++i) {
		if ((array[i] - '0') >= 0 && array[i]-'0' <= 9) {
			while ((array[i] - '0') >= 0 && array[i] - '0' <= 9) {
				polandNotation[j] = array[i];
				++j;
				++i;
			}
			polandNotation[j] = ' ';
			++j;
		}
		else if (array[i] == ' ') {
			// we just skip you
		}

		else if (k > 0) {
			if ((array[i] == '*' || array[i] == '/') && (operatorStack[k-1] == '-' || operatorStack[k-1] == '+')) {
				operatorStack[k] = array[i];
				++k;
				++operatorPointer;
			}
			else {
				while (k != 0) {
					polandNotation[j] = *operatorPointer;
					++j;
					operatorStack[k] = ' ';
					--operatorPointer;
					--k;
				}
				++operatorPointer;
				operatorStack[0] = array[i];
				++k;
			}
		}
		else {
			operatorStack[k] = array[i];
			++k;
			//++operatorPointer;
		}


	}

	while (k != 0) {
		polandNotation[j] = *operatorPointer;
		--k;
		++j;
		--operatorPointer;
	}
	for (int i = 0; i < size; ++i) {
		std::cout << polandNotation[i];
	}

	std::cout << std::endl;

	for (int i = 0; i < size; ++i) {
		array[i] = polandNotation[i];
	}

	std::cout << std::endl;

	delete[] polandNotation;
	delete[] operatorStack;
	operatorPointer = nullptr;
}

int PrefixCalculator(char* array, int size,int operandSize) {
	int res = 0;
	int* operandStack = new int[operandSize];
	int* operandPointer = operandStack;

	int num = 0; // variable is used to transform chars into numbers
	int resActions = 0; // checking wether the res has been used
	int k = 0; // counter for operand stack

	for (int i = 0; i < size; ++i) {
		if ((array[i] - '0') >= 0 && array[i] - '0' <= 9) {
			while ((array[i] - '0') >= 0 && array[i] - '0' <= 9) {
				num *= 10;
				num += array[i] - '0';
				++i;
			}
			operandStack[k] = num;
			++k;
			++operandPointer; ///
			num = 0;
		}

		if (array[i] == ' ') {
			//we skip you
		}

		else{
			if (resActions == 0) {
				res = calc(array[i], operandStack[k - 2], operandStack[k - 1]);
				k -= 2;
				operandPointer -= 2;
				++resActions;
			}
			else {
				res = calc(array[i], operandStack[k - 1], res);
				++resActions;
				--k;
				--operandPointer;
			}
		}

	}

	delete[] operandStack;
	operandPointer = nullptr;

	return res;
}

int countOperands(char* array, int size) {
	int num = 0;
	for (int i = 0; i < size; ++i) {
		if (array[i] == '+' || array[i] == '-' || array[i] == '/' || array[i] == '*') {
			++num;
		}
	}
	return num;
}