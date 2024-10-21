//Shafikov Ruslan 
// Assignment 3
// st112650@student.spbu.ru

#include"Transformer.h"
int Transformer::GetAge() {
	return age;
}

void Transformer::SetAge(int& age) {
	this->age = age;
}

double Transformer::GetMaxSpeed() {
	return maxSpeed;
}

void Transformer::SetMaxSpeed(double& maxSpeed) {
	this->maxSpeed = maxSpeed;
}

std::string Transformer::GetName() {
	return name;
}

void Transformer::SetName(std::string& name) {
	this->name = name;
}

bool Transformer::GetIsTransformed() {
	return isTransformed;
}

void Transformer::SetIsTransformed(bool& isTransformed) {
	this->isTransformed = isTransformed;
}