//Shafikov Ruslan
// Assignment 3
// st112650@student.spbu.ru

#ifndef MyClassH
#define MyClassH
#include <iostream>
#include <string>

class Transformer {
private:
    std::string name;
    int age;
    bool isTransformed; //@note checking wether transformer transforemed into a machine
    double maxSpeed; //@note speed in km/h


public:
    int GetAge();

    void SetAge(int& age);

    virtual double GetMaxSpeed() const;

    void SetMaxSpeed(double& maxSpeed);

    std::string GetName();

    void SetName(std::string& name);

    bool GetIsTransformed();

    void SetIsTransformed(bool& isTransformed);

    Transformer(const std::string& name, int age, bool isTransformed, double maxSpeed);

    Transformer();

    friend std::ostream& operator << (std::ostream& os, const Transformer& A);

    bool operator>(const Transformer& other);
    bool operator<(const Transformer& other);


    virtual void transform();
    virtual void openFire();
    virtual void ulta();

    Transformer(const Transformer& other);
    Transformer& operator=(const Transformer& other);

    ~Transformer();
};
#endif