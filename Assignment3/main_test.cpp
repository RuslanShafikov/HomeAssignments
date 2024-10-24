//Shafikov Ruslan 
// Assignment 3
// st112650@student.spbu.ru

#include <gtest/gtest.h>
#include "Decepticon.h"
#include "Autobot.h"
#include "Team.h"
#include "Animalbot.h"
#include "Union.h"
#include <sstream>

//@note Test for Decepticon
TEST(DecepticonTest, SetAndGetArmor) {
    Decepticon D;
    D.SetArmor("Steel");
    ASSERT_TRUE(D.GetArmor() == "Steel");
}

//@note Test for Autobot
TEST(AutobotTest, SetAndGetCar) {
    Autobot A;
    A.SetCar("Tesla");
    ASSERT_TRUE(A.GetCar() == "Tesla");
}

//@note Test for Team
TEST(TeamTest, SayTeam) {
    Team T;
    std::ostringstream oss;
    std::streambuf* streamCout = std::cout.rdbuf(oss.rdbuf()); 
    T.SayTeam("Transformers");
    std::cout.rdbuf(streamCout); 
    ASSERT_TRUE(oss.str() == "We are Transformers");
}

//@note Test for Animalbot
TEST(AnimalbotTest, SetAndGetAnimal) {
    Animalbot AB;
    AB.SetAnimal("Lion");
    ASSERT_TRUE(AB.GetAnimal() == "Lion");
}

//@note Test for Union
TEST(UnionTest, SetAndGetPower) {
    Union U;
    U.GetPower(100);
    ASSERT_TRUE(U.GetPowerValue() == 100);
}
