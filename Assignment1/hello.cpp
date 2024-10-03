

/*
task 1 "Hello, world"
Shafikov Ruslan 
st112650@student.spbu.ru
группа Б83
	*/

  #include "hello.h"
  void hello() {
	std::cout << "Hello, world!";
	std::string name = "";
	while (std::cin) {
		std::cin >> name;
		std::cout << "Hello, " << name << "!" << std::endl;
		if (name.compare("quit") == 0) {
			break;
		}
	}
	return;
}