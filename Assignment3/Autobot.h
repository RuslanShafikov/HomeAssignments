//Shafikov Ruslan 
// Assignment 3
// st112650@student.spbu.ru

#ifndef AutobotH
#define AutobotH
#include "Transformer.h"
class Autobot : public Transformer {
private:
	std::string car; //@note which type of car they can transform into
public:
	std::string GetCar();

	void SetCar(const std::string& car);

	Autobot(const std::string& name, int age, bool isTransformed, double maxSpeed, std::string& car) : Transformer(name, age, isTransformed, maxSpeed), car(car) {

	}

	~Autobot() {

	}
};
#endif