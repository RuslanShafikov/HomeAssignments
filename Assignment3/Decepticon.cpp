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