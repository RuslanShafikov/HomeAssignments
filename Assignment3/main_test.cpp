//Shafikov Ruslan
// Assignment 3
// st112650@student.spbu.ru
#include "gtest/gtest.h"
#include "Decepticon.h"
#include "Autobot.h"
#include "Team.h"
#include "Animalbot.h"
#include "Union.h"
#include "Transformer.h"
#include <sstream>

TEST(TransformerTest, AgeFunctions) {
    const std::string name = "A";
    int age = 14;
    Transformer A(name, 347, false, 234.7);
    A.SetAge(age);
    EXPECT_EQ(A.GetAge(), 14);
}

TEST(TransformerTest, NameFunctions) {
    const std::string name = "A";
    std::string newName = "B";
    Transformer A(name, 347, false, 234.7);
    A.SetName(newName);
    EXPECT_EQ(A.GetName(), newName);
}

TEST(TransformerTest, SpeedFunctions) {
    const std::string name = "A";
    double speed = 43.5;
    Transformer A(name, 347, false, 234.7);
    A.SetMaxSpeed(speed);
    EXPECT_EQ(A.GetMaxSpeed(), 43.5);
}

TEST(TransformerTest, IsTransformedFunctions) {
    const std::string name = "A";
    bool transformation = true;
    Transformer A(name, 347, false, 234.7);
    A.SetIsTransformed(transformation);
    EXPECT_EQ(A.GetIsTransformed(), true);
}

TEST(AnimalbotTest, AllFunctionsTest) {
    std::string name = "Steffen";
    std::string animal = "Owl";
    int age = 888;
    double speed = 100.0;
    Animalbot S(name, age, true, speed, animal);
    age = 1300;
    S.SetAge(age);
    EXPECT_EQ(S.GetAge(), 1300);
}

TEST(DecepticonTest, AllFunctionsTest) {
    std::string name = "Gorio";
    std::string armor = "T-18";
    int age = 888;
    double speed = 100.0;
    Decepticon D(name, age, true, speed, armor);
    age = 13323;
    D.SetAge(age);
    EXPECT_EQ(D.GetAge(), 13323);
}

TEST(AutobotTest, AllFunctionsTest) {
    std::string name = "Bumblbee";
    std::string car = "Chevrolet Camaro";
    int age = 2344;
    double speed = 100.0;
    Autobot A(name, age, true, speed, car);
    age = 2310;
    A.SetAge(age);
    EXPECT_EQ(A.GetAge(), 2310);
}

TEST(TeamTest, AllFunctionsTest) {
    std::string TeamName = "Transformers";
    const std::string captain = "Optimus";
    std::ostringstream coutStream;
    std::streambuf* originalCoutBuffer = std::cout.rdbuf(coutStream.rdbuf());
    Team T(TeamName, captain);
    T.SayTeam(TeamName);
    EXPECT_EQ(coutStream.str(), "We are Transformers");
    std::cout.rdbuf(originalCoutBuffer);
}

TEST(UnionTest, AllFunctionsTest) {
    std::string name = "Bumblbee";
    std::string car = "Chevrolet Camaro";
    int age = 1000;
    double speed = 12321.0;
    Autobot D(name, age, true, speed, car);
    Union U(D, 14);
    U.SetPower(23);
    EXPECT_EQ(U.GetPower(), 23);
}
