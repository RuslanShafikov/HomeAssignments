//Shafikov Ruslan 
// Assignment 3
// st112650@student.spbu.ru

#ifndef DecepticonH
#define DecepticonH
#include "Transformer.h"
class Decepticon : public Transformer {
private:
	std::string armor; //@note which type of armor they can transform into
public:
	std::string GetArmor() const;

	void SetArmor(const std::string& armor);
	Decepticon();

	Decepticon(const std::string& name, int age, bool isTransformed, double maxSpeed, const std::string& armor);

	friend std::ostream& operator << (std::ostream& os, const Decepticon& A);
	bool operator>(const Decepticon& other);
	bool operator<(const Decepticon& other);
	~Decepticon();
};
#endif