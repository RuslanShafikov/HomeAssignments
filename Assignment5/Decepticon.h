//Shafikov Ruslan
// Assignment 5
// st112650@student.spbu.ru

#ifndef DecepticonH
#define DecepticonH
#include "Transformer.h"
class Decepticon : public Transformer
{
private:
    std::string armor; //@note which type of armor they can transform into
public:
    std::string GetArmor() const;
    double GetMaxSpeed() const;
    void SetArmor(const std::string& armor);
    Decepticon();

    Decepticon(const std::string& name, int age, bool isTransformed, double maxSpeed, const std::string& armor);

    friend std::ostream& operator << (std::ostream& os, const Decepticon& A);
    bool operator>(const Decepticon& other);
    bool operator<(const Decepticon& other);


    void transform() override;
    void openFire() override;
    void ulta() override;
    ~Decepticon();
};
#endif
