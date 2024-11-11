//Shafikov Ruslan 
// Assignment 3
// st112650@student.spbu.ru

#include "Decepticon.h"

std::string Decepticon::GetArmor() const {
	return armor;
}

void Decepticon::SetArmor(const std::string& armor) {
	this->armor = armor;
}

Decepticon::Decepticon(const std::string& name, int age, bool isTransformed, double maxSpeed, const std::string& armor) : Transformer(name, age, isTransformed, maxSpeed), armor(armor) {

}
Decepticon::Decepticon() : Transformer() {
	this->armor = "stick";
}

bool Decepticon::operator>(const Decepticon& other) {
	Transformer T = other;
	return Transformer::operator>(T);
}

bool Decepticon::operator<(const Decepticon& other) {
	Transformer T = other;
	return Transformer::operator<(T);
}


std::ostream& operator<<(std::ostream& os, const Decepticon& A) {
	operator <<(os, (Transformer)A);
	os << " Might transform into " << A.armor;
	return os;
}


Decepticon::~Decepticon() {

}