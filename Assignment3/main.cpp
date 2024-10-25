//Shafikov Ruslan 
// Assignment 3
// st112650@student.spbu.ru


#include "Transformer.h"
#include "Decepticon.h"
#include "Animalbot.h"
#include "Autobot.h"
#include "Team.h"
#include "Union.h"

int main(int argc, char** argv) {
	Transformer A("A", 2, false, 22.0);
	int age = 345;
	A.SetAge(age);
	int k = A.GetAge();
	std::cout << k << std::endl;
	double speed = 345.9;
	A.SetMaxSpeed(speed);
	speed = A.GetMaxSpeed();
	std::cout << speed << std::endl;

	std::string name = "GG";
	A.SetName(name);
	const std::string g = A.GetName();
	std::cout << name << std::endl;

	Decepticon C(name, age, true, speed, "A");
	C.SetArmor("Tank");
	std::cout << C.GetArmor() << std::endl;

	Animalbot S(name, age, true, speed, name);

	S.SetAnimal("rabbit");
	std::cout << S.GetAnimal() << std::endl;

	Autobot D(name, age, true, speed, name);

	D.SetCar("lambo");
	std::cout << D.GetCar() << std::endl;

	Union U(D, 14);
	U.SetPower(23);

	const std::string TeamName;
	Team T(TeamName, TeamName);
	return 0;
}

