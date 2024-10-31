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

Autobot::~Autobot() {
}
