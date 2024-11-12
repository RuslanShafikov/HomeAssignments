#include "Transformer.h"
#include "Decepticon.h"
#include "Animalbot.h"
#include "Autobot.h"
#include "Team.h"
#include "Union.h"
#include <iostream>
#include <string>
#include <gtest/gtest.h>
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

TEST(TeamTest, OperatorComparison) {
	Team team1("Transformers", "Optimus");
	Team team2("Decepticons", "Megatron");

	EXPECT_TRUE(team1 > team2);
	EXPECT_TRUE(team2 < team1);
}

TEST(UnionTest, OperatorComparison) {
	std::string name = "Bumblebee";
	std::string car = "Chevrolet Camaro";
	int power1 = 2344;
	int power2 = 1000;
	int age = 1000;
	double speed = 12321.0;
	Autobot a1(name, age, true, speed, car);
	Autobot a2(name, age, true, speed, car);

	Union u1(a1, power1);
	Union u2(a2, power2);

	EXPECT_TRUE(u1 > u2);
	EXPECT_TRUE(u2 < u1);
}

TEST(TransformerTest, OperatorGreaterThan) {
	std::string name1 = "Optimus";
	std::string name2 = "Megatron";
	Transformer transformer1(name1, 2344, true, 150.0);
	Transformer transformer2(name2, 2310, true, 120.0);

	EXPECT_TRUE(transformer1 > transformer2);
}

TEST(TransformerTest, OperatorLessThan) {
	std::string name1 = "Optimus";
	std::string name2 = "Megatron";
	Transformer transformer1(name1, 2344, true, 100.0);
	Transformer transformer2(name2, 2310, true, 150.0);

	EXPECT_TRUE(transformer1 < transformer2);
}


TEST(AnimalbotTest, OperatorLessThan) {
	std::string optimus = "Optimus";
	std::string lion = "Lion";
	std::string megatron = "Megatron";
	std::string tiger = "Tiger";
	Animalbot animalbot1(optimus, 2344, true, 100.0, lion);
	Animalbot animalbot2(megatron, 2310, true, 150.0, tiger);

	EXPECT_TRUE(animalbot1 < animalbot2);
}

TEST(AutobotTest, OperatorGreaterThan) {
	std::string optimus = "Optimus";
	std::string lion = "Lion";
	std::string chevroletCamaro = "Chevrolet Camaro";
	std::string nexia = "Nexia";
	Autobot autobot1(optimus, 2344, true, 150.0, chevroletCamaro);
	Autobot autobot2(lion, 2310, true, 120.0, nexia);

	EXPECT_TRUE(autobot1 > autobot2);
}

TEST(AutobotTest, OperatorLessThan) {
	std::string optimus = "Optimus";
	std::string bumblebee = "Bumblebee";
	std::string camaro = "Chevrolet Camaro";
	std::string ferrari = "Ferrari";

	Autobot autobot1(optimus, 2344, true, 100.0, camaro);
	Autobot autobot2(bumblebee, 2310, true, 150.0, ferrari);

	EXPECT_TRUE(autobot1 < autobot2);
}

TEST(DecepticonTest, OperatorGreaterThan) {
	std::string megatron = "Megatron";
	std::string starscream = "Starscream";
	std::string steel = "Steel";
	std::string titanium = "Titanium";
	Decepticon decepticon1(megatron, 2344, true, 150.0, steel);
	Decepticon decepticon2(starscream, 2310, true, 120.0, titanium);

	EXPECT_TRUE(decepticon1 > decepticon2);
}

TEST(DecepticonTest, OperatorLessThan) {
	std::string megatron = "Megatron";
	std::string starscream = "Starscream";
	std::string steel = "Steel";
	std::string titanium = "Titanium";
	Decepticon decepticon1(megatron, 2344, true, 100.0, steel);
	Decepticon decepticon2(starscream, 2310, true, 150.0, titanium);
	EXPECT_TRUE(decepticon1 < decepticon2);
}
TEST(TransformerTest, OutputOperator) {
	Transformer transformer("Optimus Prime", 10, true, 120.5);
	std::stringstream ss;
	ss << transformer;
	EXPECT_EQ(ss.str(), "Name: Optimus Prime, Age: 10, MaxSpeed: 120.5, Currently Transformed");
}

TEST(AnimalbotTest, OutputOperator) {
	std::string beastbot = "Beastbot";
	std::string lion = "Lion";
	Animalbot animalbot(beastbot, 5, false, 80.3, lion);
	std::stringstream ss;
	ss << animalbot;
	EXPECT_EQ(ss.str(), "Name: Beastbot, Age: 5, MaxSpeed: 80.3, Not Transformed Might transform into Lion");
}

TEST(AutobotTest, OutputOperator) {
	Autobot autobot("Bumblebee", 7, true, 150.5, "Car");
	std::stringstream ss;
	ss << autobot;
	EXPECT_EQ(ss.str(), "Name: Bumblebee, Age: 7, MaxSpeed: 150.5, Currently Transformed Might transform into Car");
}

TEST(DecepticonTest, OutputOperator) {
	Decepticon decepticon("Megatron", 20, true, 200.0, "Steel");
	std::stringstream ss;
	ss << decepticon;
	EXPECT_EQ(ss.str(), "Name: Megatron, Age: 20, MaxSpeed: 200, Currently Transformed Might transform into Steel");
}


TEST(TeamTest, OutputOperatorTest) {
	Team team("Autobots", "Optimus Prime");
	testing::internal::CaptureStdout();
	std::cout << team;
	std::string output = testing::internal::GetCapturedStdout();
	std::string expected_output = "Autobots";
	EXPECT_EQ(output, expected_output);
}


TEST(TransformerTest, CopyConstructor) {
    Transformer t1("Optimus", 100, true, 150.0);
    Transformer t2 = t1;

    EXPECT_EQ(t1.GetName(), t2.GetName());
    EXPECT_EQ(t1.GetAge(), t2.GetAge());
    EXPECT_EQ(t1.GetIsTransformed(), t2.GetIsTransformed());
    EXPECT_DOUBLE_EQ(t1.GetMaxSpeed(), t2.GetMaxSpeed());
}


TEST(TransformerTest, CopyAssignmentOperator) {
    Transformer t1("Optimus", 100, true, 150.0);
    Transformer t2("Bumblebee", 50, false, 120.0);

    t2 = t1;

    EXPECT_EQ(t1.GetName(), t2.GetName());
    EXPECT_EQ(t1.GetAge(), t2.GetAge());
    EXPECT_EQ(t1.GetIsTransformed(), t2.GetIsTransformed());
    EXPECT_DOUBLE_EQ(t1.GetMaxSpeed(), t2.GetMaxSpeed());
}

TEST(TransformerTest, CopyAssignmentSelfAssignment) {
    Transformer t1("Optimus", 100, true, 150.0);
    t1 = t1;
    EXPECT_EQ(t1.GetName(), "Optimus");
    EXPECT_EQ(t1.GetAge(), 100);
    EXPECT_EQ(t1.GetIsTransformed(), true);
    EXPECT_DOUBLE_EQ(t1.GetMaxSpeed(), 150.0);
}

TEST(TransformerTest, CopyConstructorSelfAssignment) {
    Transformer t1("Optimus", 100, true, 150.0);
    Transformer t2(t1);
    EXPECT_EQ(t1.GetName(), t2.GetName());
    EXPECT_EQ(t1.GetAge(), t2.GetAge());
    EXPECT_EQ(t1.GetIsTransformed(), t2.GetIsTransformed());
    EXPECT_DOUBLE_EQ(t1.GetMaxSpeed(), t2.GetMaxSpeed());
}

TEST(TransformerTest, GetMaxSpeedTest) {
	Transformer t1("Optimus", 5, true, 120.0);
	EXPECT_DOUBLE_EQ(t1.GetMaxSpeed(), 120.0);
}

TEST(AnimalbotTest, GetMaxSpeedTest) {
	std::string Animalbot1 = "Animalbot1";
	std::string Animalbot2 = "Animalbot1";
	std::string lion = "Lion";
	Animalbot a1(Animalbot1, 5, true, 100.0, lion);
	EXPECT_DOUBLE_EQ(a1.GetMaxSpeed(), 100.0);

	std::string tiger = "Lion";
	Animalbot a2(Animalbot2, 10, false, 150.0, tiger);
	EXPECT_DOUBLE_EQ(a2.GetMaxSpeed(), 150.0);
}

TEST(AutobotTest, GetMaxSpeedTest) {
	Autobot a1("Autobot1", 5, true, 120.0, "Car");
	EXPECT_DOUBLE_EQ(a1.GetMaxSpeed(), 120.0);

	Autobot a2("Autobot2", 8, false, 180.0, "Truck");
	EXPECT_DOUBLE_EQ(a2.GetMaxSpeed(), 180.0);
}

TEST(DecepticonTest, GetMaxSpeedTest) {
	Decepticon d1("Decepticon1", 6, true, 130.0, "Steel Armor");
	EXPECT_DOUBLE_EQ(d1.GetMaxSpeed(), 130.0);

	Decepticon d2("Decepticon2", 4, false, 160.0, "Titanium Armor");
	EXPECT_DOUBLE_EQ(d2.GetMaxSpeed(), 160.0);
}











