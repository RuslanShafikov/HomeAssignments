#include "hello.h"
int hello() {
	std::cout << "Hello, world!";
	std::string name = "";
	while (std::cin) {
		std::cin >> name;
		std::cout << "Hello, " << name << "!" << std::endl;
		if (name.compare("quit") == 0) {
			break;
		}
	}
	return 0;
}