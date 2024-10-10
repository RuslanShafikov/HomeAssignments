/*Assignment2b

Шафиков Руслан Альвиртович, группа 24.Б83-мм

Contacts
st112650@stdudent.spbu.ru

Description
The program reads file containing integers and arithmetical operations. Transforms input into reversed poland notation and then calculates the final result.

*/

bool isPrioretized(char a, char b) {
	if (b == '(') {
		return false;
	}
	else if (a == '+' || a == '-') {
		return true;
	}
	else if ((a == '*' || a == '/') && (b == '/' || b == '*')) {
		return true;
	}

	return false;

}

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


int toPrefix(char* array, int size , int operatorSize) {
	// creating stacks
	char* polandNotation = new char[size];
	char* operatorStack = new char[operatorSize];
	char* operatorPointer = operatorStack;
	int j = 0; //counter for stacks
	int k = 0; // counter for operator stack

	for (int i = 0; i < size; ++i) {
		if ((array[i] - '0') >= 0 && array[i]-'0' <= 9 ) {
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

		    else if (k == 0) {
				operatorStack[0] = array[i];
				++k;
			}
			else if (k > 0) {
			if (array[i]=='(') {
				operatorStack[k] = array[i];
				++operatorPointer;
				++k;
			}
			else if (array[i] == ')') {
				while (*operatorPointer != '(') {
					polandNotation[j] = *operatorPointer;
					++j;
					operatorStack[k - 1] = ' ';
					--k;
					--operatorPointer;
				}
				operatorStack[k - 1] = ' ';
				--k;
				--operatorPointer;
			}
			else if (isPrioretized(array[i], operatorStack[k - 1])) {
				while (k != 0 && isPrioretized(array[i], operatorStack[k - 1])) { // if priority is high enough we add to the final notation
					polandNotation[j] = *operatorPointer;
					++j;
					operatorStack[k - 1] = ' ';
					--operatorPointer;
					--k;
				}
				++operatorPointer;
				if (k > 0) {
					operatorStack[k] = array[i];
				}
				else {
					operatorStack[0] = array[i];
				}
				++k;
			}

			else {
				operatorStack[k] = array[i];
				++k;
				++operatorPointer;
			}
		}
		


	}

	while (k != 0) {
		polandNotation[j] = *operatorPointer;
		--k;
		++j;
		--operatorPointer;
	}

	for (int i = 0; i < size; ++i) {
		array[i] = polandNotation[i];
	}
	return j;
	delete[] polandNotation;
	delete[] operatorStack;
	operatorPointer = nullptr;

}

int PrefixCalculator(char* array, int size,int operandSize) {
	int res = 0;
	int* operandStack = new int[operandSize];
	int* operandPointer = operandStack;

	int num = 0; // variable is used to transform chars into numbers
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
				res = calc(array[i], operandStack[k - 2], operandStack[k - 1]);
				k -= 2;
				operandPointer -= 2;
				operandStack[k] = res;
				++k;
				++operandPointer;
		}

	}

	delete[] operandStack;
	operandPointer = nullptr;

	return res;
}

int countOperands(char* array, int size) {
	int num = 0;
	for (int i = 0; i < size; ++i) {
		if (array[i] == '+' || array[i] == '-' || array[i] == '/' || array[i] == '*' || array[i] == '(' || array[i] == ')') {
			++num;
		}
	}
	return num;
}