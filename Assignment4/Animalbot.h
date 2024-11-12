//Shafikov Ruslan 
// Assignment 3
// st112650@student.spbu.ru

#ifndef AnimalbotH
#define AnimalbotH

#include "Transformer.h"

class Animalbot : public Transformer {
private:
	std::string animal; //@note which type of animal they can transform into
public:
	std::string GetAnimal();
	void SetAnimal(const std::string& animal);

	Animalbot(const std::string& name, int age, bool isTransformed, double maxSpeed, std::string& animal);
	Animalbot();

	friend std::ostream& operator << (std::ostream& os, const Animalbot& A);
	bool operator>(const Animalbot& other);
	bool operator<(const Animalbot& other);
	double GetMaxSpeed() const;
	// Transformer& operator=(const Animalbot& other);

	~Animalbot();
};

#endif
