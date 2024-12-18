//Shafikov Ruslan
// Assignment 3
// st112650@student.spbu.ru


#include "Transformer.h"
#include "Decepticon.h"
#include "Animalbot.h"
#include "Autobot.h"
#include "Team.h"
#include "Union.h"

int main() {
    std::string name = "L";
    std::string animal = "owl";
    Transformer A("A", 2, false, 22.0);
    Animalbot B(name, 2, false, 22.0, animal);
    Transformer C("A", 2, false, 22.0);
    Animalbot D(name, 2, false, 23.0, animal);
    if (A > C) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }

    if (C > A) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }

    if (B < D) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }

    if (D < B) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }

    std::cout << A << std::endl;
    std::cout << B << std::endl;
    return 0;
}
