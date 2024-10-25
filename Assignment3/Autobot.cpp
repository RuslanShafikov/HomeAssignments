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