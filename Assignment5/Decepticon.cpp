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
double Decepticon::GetMaxSpeed() const {
    return Transformer::GetMaxSpeed();
}

Decepticon::Decepticon(const std::string& name, int age, bool isTransformed, double maxSpeed, const std::string& armor) : Transformer(name, age, isTransformed, maxSpeed), armor(armor) {

}
Decepticon::Decepticon() : Transformer() {
    this->armor = "stick";
}

bool Decepticon::operator>(const Decepticon& other) {
    return this->GetMaxSpeed() > other.GetMaxSpeed();
}



bool Decepticon::operator<(const Decepticon& other) {
    return this->GetMaxSpeed() < other.GetMaxSpeed();
}


std::ostream& operator<<(std::ostream& os, const Decepticon& A) {
    os << static_cast<const Transformer&>(A);
    os << " Might transform into " << A.armor;
    return os;
}

void Decepticon::transform() {
    std::cout << "transform() called from Decepticon" << std::endl;
    std::cout << "Decepticon is transforming into a " << armor << std::endl;
}

void Decepticon::openFire() {
    std::cout << "openFire() called from Decepticon" << std::endl;
    std::cout << "Decepticon is opening fire" << std::endl;
}

void Decepticon::ulta() {
    std::cout << "ulta() called from Decepticon" << std::endl;
    std::cout << "Decepticon is using an ultimate attack" << std::endl;
}

Decepticon::~Decepticon() {

}
