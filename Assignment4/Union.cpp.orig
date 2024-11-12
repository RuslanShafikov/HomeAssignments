//Shafikov Ruslan 
// Assignment 3
// st112650@student.spbu.ru

#include "Union.h"
void Union::SetPower(int power) {
	this->power = power;
}

int Union::GetPower() {
	return power;
}

Union::Union(const Autobot& A, int d) : A(A), power(d) {
}

Union::Union() : A("A", 2, true, 2.1, "lambo"), power(23) {
}

bool Union::operator>(const Union& other) {
	return this->power > other.power ? true : false;
}

std::ostream& operator<<(std::ostream& os, const Union& U) {
	os << U.power;
	return os;
}

bool Union::operator<(const Union& other) {
	return this->power < other.power ? true : false;
}