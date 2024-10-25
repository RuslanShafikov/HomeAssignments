//Shafikov Ruslan 
// Assignment 3
// st112650@student.spbu.ru

#ifndef MyClassH
#define MyClassH
#include <iostream>
#include <string>

class Transformer {
private:
	std::string name;
	int age;
	bool isTransformed; //@note checking wether transformer transforemed into a machine
	double maxSpeed; //@note speed in km/h


public:
	int GetAge();

	void SetAge(int& age);

	double GetMaxSpeed();

	void SetMaxSpeed(double& maxSpeed);

	std::string GetName();

	void SetName(std::string& name);

	bool GetIsTransformed();

	void SetIsTransformed(bool& isTransformed);

	Transformer(const std::string& name, int age, bool isTransformed, double maxSpeed) : name(name), age(age), isTransformed(isTransformed), maxSpeed(maxSpeed) {
		
	}

	~Transformer() {
	}
};
#endif
