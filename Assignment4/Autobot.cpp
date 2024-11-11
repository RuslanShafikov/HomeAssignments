//Shafikov Ruslan 
// Assignment 3
// st112650@student.spbu.ru
#include "Autobot.h"

std::string Autobot::GetCar() {
	return car;
}

void Autobot::SetCar(const std::string& car) {
	this->car = car;
}

Autobot::Autobot(const std::string& name, int age, bool isTransformed, double maxSpeed, const std::string& car)
	: Transformer(name, age, isTransformed, maxSpeed), car(car) {
}

Autobot::Autobot() : Transformer() {
	this->car = "truck";
}

bool Autobot::operator>(const Autobot& other) {
	Transformer T = other;
	return Transformer::operator>(T);
}

bool Autobot::operator<(const Autobot& other) {
	Transformer T = other;
	return Transformer::operator<(T);
}

std::ostream& operator<<(std::ostream& os, const Autobot& A) {
	operator<<(os, (Transformer)A);
	os << " Might transform into " << A.car;
	return os;
}

Autobot::~Autobot() {
}


