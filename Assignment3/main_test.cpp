//Shafikov Ruslan 
// Assignment 3
// st112650@student.spbu.ru


#include <gtest/gtest.h>
#include "Decepticon.h"
#include "Autobot.h"
#include "Team.h"
#include "Animalbot.h"
#include "Union.h"
#include "Transformer.h"
#include <sstream>

// Test for Transformer
TEST(TransformerTest, GetAge) {
    EXPECT_EQ(GetAge(5), 5);
    EXPECT_EQ(GetAge(7), 7);
}

TEST(TransformerTest, GetMaxSpeed) {
    EXPECT_EQ(GetMaxSpeed(5.0), 5.0);
    EXPECT_EQ(GetMaxSpeed(7.3), 7.3);
}

TEST(TransformerTest, GetName) {
    EXPECT_EQ(GetName("Optimus"), "Optimus");
    EXPECT_EQ(GetName("Bumblebee"), "Bumblebee");
}

TEST(TransformerTest, GetIsTransformed) {
    EXPECT_EQ(GetIsTransformed(true), true);
    EXPECT_EQ(GetIsTransformed(false), false);
}

TEST(TransformerTest, SetAge) {
    Transformer A;
    A.SetAge(5);
    EXPECT_EQ(A.GetAge(), 5);
    A.SetAge(10);
    EXPECT_EQ(A.GetAge(), 10);
}

TEST(TransformerTest, SetMaxSpeed) {
    Transformer A;
    A.SetMaxSpeed(5.0);
    EXPECT_EQ(A.GetMaxSpeed(), 5.0);
    A.SetMaxSpeed(10.0); // Fixed typo: SetMaxSpped -> SetMaxSpeed
    EXPECT_EQ(A.GetMaxSpeed(), 10.0);
}

TEST(TransformerTest, SetIsTransformed) {
    Transformer A;
    A.SetIsTransformed(true);
    EXPECT_EQ(A.GetIsTransformed(), true);
    A.SetIsTransformed(false);
    EXPECT_EQ(A.GetIsTransformed(), false); // Fixed: Use function call
}

// Test for Decepticon
TEST(DecepticonTest, SetAndGetArmor) {
    Decepticon D;
    D.SetArmor("Steel");
    ASSERT_EQ(D.GetArmor(), "Steel");
}

// Test for Autobot
TEST(AutobotTest, SetAndGetCar) {
    Autobot A;
    A.SetCar("Tesla");
    ASSERT_EQ(A.GetCar(), "Tesla");
}

// Test for Team
TEST(TeamTest, SayTeam) {
    Team T;
    std::ostringstream oss;
    std::streambuf* streamCout = std::cout.rdbuf(oss.rdbuf());
    T.SayTeam("Transformers");
    std::cout.rdbuf(streamCout);
    ASSERT_EQ(oss.str(), "We are Transformers\n"); // Check for newline if necessary
}

// Test for Animalbot
TEST(AnimalbotTest, SetAndGetAnimal) {
    Animalbot AB;
    AB.SetAnimal("Lion");
    ASSERT_EQ(AB.GetAnimal(), "Lion");
}

// Test for Union
TEST(UnionTest, SetAndGetPower) {
    Union U;
    U.SetPower(100); // Assuming you meant SetPower instead of GetPower
    ASSERT_EQ(U.GetPowerValue(), 100);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}


