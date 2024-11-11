#include "pch.h"

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
	int power = 2344;
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

TEST(TransformerTest, SelfAssignmentTest) {
	Transformer transformer("Optimus Prime", 10, true, 120.5);
	transformer = transformer;
	EXPECT_EQ(transformer.GetName(), "Optimus Prime");
	EXPECT_EQ(transformer.GetAge(), 10);
	EXPECT_TRUE(transformer.GetIsTransformed());
	EXPECT_EQ(transformer.GetMaxSpeed(), 120.5);
}











