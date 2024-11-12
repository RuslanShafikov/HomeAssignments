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
	Union();
	void SetPower(int power);
	int GetPower();
	friend std::ostream& operator << (std::ostream& os, const Union& A);

	bool operator>(const Union& other);
	bool operator<(const Union& other);
};

#endif


