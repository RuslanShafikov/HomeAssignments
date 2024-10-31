//Shafikov Ruslan 
// Assignment 3
// st112650@student.spbu.ru

#ifndef AssociationH
#define AssociationH
#include "Autobot.h"

class Union {
private:
    Autobot A;
    int power;

public:
    Union(const Autobot& A, int d);
    void SetPower(int power);
    int GetPower();
};

#endif
