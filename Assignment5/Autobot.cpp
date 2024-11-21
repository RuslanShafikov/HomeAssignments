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

double Autobot::GetMaxSpeed() const {
    return Transformer::GetMaxSpeed();
}

Autobot::Autobot(const std::string& name, int age, bool isTransformed, double maxSpeed, const std::string& car)
    : Transformer(name, age, isTransformed, maxSpeed), car(car) {
}

Autobot::Autobot() : Transformer() {
    this->car = "truck";
}

bool Autobot::operator>(const Autobot& other) {
    return this->GetMaxSpeed() > other.GetMaxSpeed();
}



bool Autobot::operator<(const Autobot& other) {
    return this->GetMaxSpeed() < other.GetMaxSpeed();
}

std::ostream& operator<<(std::ostream& os, const Autobot& A) {
    os << static_cast<const Transformer&>(A);
    os << " Might transform into " << A.car;
    return os;
}


void Autobot::transform() {
    std::cout << "transform() called from Autobot" << std::endl;
    std::cout << "Autobot is transforming into a " << car << std::endl;
}

void Autobot::openFire() {
    std::cout << "openFire() called from Autobot" << std::endl;
    std::cout << "Autobot is opening fire!" << std::endl;
}

void Autobot::ulta() {
    std::cout << "ulta() called from Autobot" << std::endl;
    std::cout << "Autobot is using ultimate attack!" << std::endl;
}

Autobot::~Autobot() {
}

