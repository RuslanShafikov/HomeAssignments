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

double Transformer::GetMaxSpeed() const{
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


Transformer::Transformer(const std::string& name, int age, bool isTransformed, double maxSpeed) : name(name), age(age), isTransformed(isTransformed), maxSpeed(maxSpeed) {

}

Transformer::Transformer() {
  this->name = "A";
  this->age = 0;
  this->isTransformed = false;
  this->maxSpeed = 0.0;
}

Transformer::~Transformer() {
}

std::ostream& operator<<(std::ostream& os, const Transformer& A) {
  os << "Name: " << A.name << ", Age: " << A.age << ", MaxSpeed: " << A.maxSpeed;
  if (A.isTransformed) {
    os << ", Currently Transformed";
  }
  else {
    os << ", Not Transformed";
  }
  return os;
}

bool Transformer::operator>(const Transformer& other) {
  if (this->maxSpeed > other.maxSpeed) {
    return true;
  }
  return false;
}

bool Transformer::operator<(const Transformer& other) {
  if (this->maxSpeed < other.maxSpeed) {
    return true;
  }
  return false;
}

Transformer& Transformer::operator=(const Transformer& other) {
  if (this == &other) {
    return *this;
  }

  name = other.name;
  age = other.age;
  isTransformed = other.isTransformed;
  maxSpeed = other.maxSpeed;

  return *this;
}
