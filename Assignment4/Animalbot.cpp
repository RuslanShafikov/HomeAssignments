//Shafikov Ruslan 
// Assignment 3
// st112650@student.spbu.ru

#include "Animalbot.h"



std::string Animalbot::GetAnimal() {
	return animal;
}

double Animalbot::GetMaxSpeed() const {
	return Transformer::GetMaxSpeed();
}

void Animalbot::SetAnimal(const std::string& animal) {
	this->animal = animal;
}

Animalbot::Animalbot(const std::string& name, int age, bool isTransformed, double maxSpeed, std::string& animal) : Transformer(name, age, isTransformed, maxSpeed), animal(animal) {

}


Animalbot::Animalbot() : Transformer() {
	this->animal = "Bug";
}


bool Animalbot::operator>(const Animalbot& other) {
		return this->GetMaxSpeed() > other.GetMaxSpeed();
}



bool Animalbot::operator<(const Animalbot& other) {
	return this->GetMaxSpeed() < other.GetMaxSpeed();
}

std::ostream& operator<<(std::ostream& os, const Animalbot& A) {
	os << static_cast<const Transformer&>(A);
	os << " Might transform into " << A.animal;
	return os;
}

Animalbot::~Animalbot() {

}
