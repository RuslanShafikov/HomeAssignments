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

    Animalbot(const std::string& name, int age, bool isTransformed, double maxSpeed, std::string& animal) : Transformer(name, age, isTransformed, maxSpeed), animal(animal) {

    }

    ~Animalbot() {

    }
};

#endif // 
