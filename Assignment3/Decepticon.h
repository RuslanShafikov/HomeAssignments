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
	std::string GetArmor();

	void SetArmor(const std::string& armor);

	Decepticon(const std::string& name, int age, bool isTransformed, double maxSpeed, std::string& armor) : Transformer(name, age, isTransformed, maxSpeed) , armor(armor){

	}

	~Decepticon() {

	}
};
#endif