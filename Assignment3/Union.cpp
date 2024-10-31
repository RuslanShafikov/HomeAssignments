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
