//Shafikov Ruslan 
// Assignment 3
// st112650@student.spbu.ru

#include "Animalbot.h"



std::string Animalbot::GetAnimal() {
	return animal;
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
	Transformer T = other;
	return Transformer::operator>(T);
}

bool Animalbot::operator<(const Animalbot& other) {
	Transformer T = other;
	return Transformer::operator<(T);
}

std::ostream& operator<<(std::ostream& os, const Animalbot& A) {
	operator<<(os, (Transformer)A);
	os << " Might transform into " << A.animal;
	return os;
}

Animalbot::~Animalbot() {

}
