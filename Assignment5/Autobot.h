//Shafikov Ruslan
// Assignment 3
// st112650@student.spbu.ru

#ifndef AutobotH
#define AutobotH
#include "Transformer.h"
class Autobot : public Transformer {
private:
    std::string car; //@note which type of car they can transform into
public:
    std::string GetCar();
    void SetCar(const std::string& car);
    double GetMaxSpeed() const;

    Autobot(const std::string& name, int age, bool isTransformed, double maxSpeed, const std::string& car);
    Autobot();

    bool operator>(const Autobot& other);
    bool operator<(const Autobot& other);
    friend std::ostream& operator << (std::ostream& os, const Autobot& A);

    void transform() override;
    void openFire() override;
    void ulta() override;

    ~Autobot();
};
#endif