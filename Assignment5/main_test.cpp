#include "Transformer.h"
#include "Decepticon.h"
#include "Autobot.h"
#include <vector>
#include <sstream>
#include <iostream>
#include <string>
#include <gtest/gtest.h>

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

TEST(TransformerTest, SelfAssignmentTest) {
	Transformer transformer("Optimus Prime", 10, true, 120.5);
	transformer = transformer;
	EXPECT_EQ(transformer.GetName(), "Optimus Prime");
	EXPECT_EQ(transformer.GetAge(), 10);
	EXPECT_TRUE(transformer.GetIsTransformed());
	EXPECT_EQ(transformer.GetMaxSpeed(), 120.5);
}

TEST(TransformerTest, GetMaxSpeedTest) {
	Transformer t1("Optimus", 5, true, 120.0);
	EXPECT_DOUBLE_EQ(t1.GetMaxSpeed(), 120.0);
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
// @note new tests

TEST(TransformerTest, Transform) {
	Autobot autobot("Optimus", 10, true, 120.5, "Truck");
	testing::internal::CaptureStdout();
	autobot.transform();
	std::string output = testing::internal::GetCapturedStdout();
	EXPECT_EQ(output, "transform() called from Autobot\nAutobot is transforming into a Truck\n");
}

TEST(DecepticonTest, Transform) {
	Decepticon decepticon("Megatron", 15, true, 150.0, "Tank");
	testing::internal::CaptureStdout();
	decepticon.transform();
	std::string output = testing::internal::GetCapturedStdout();
	EXPECT_EQ(output, "transform() called from Decepticon\nDecepticon is transforming into a Tank\n");
}

TEST(TransformerTest, OpenFire) {
	Autobot autobot("Optimus", 10, true, 120.5, "Truck");
	testing::internal::CaptureStdout();
	autobot.openFire();
	std::string output = testing::internal::GetCapturedStdout();
	EXPECT_EQ(output, "openFire() called from Autobot\nAutobot is opening fire!\n");
}

TEST(DecepticonTest, OpenFire) {
	Decepticon decepticon("Megatron", 15, true, 150.0, "Tank");
	testing::internal::CaptureStdout();
	decepticon.openFire();
	std::string output = testing::internal::GetCapturedStdout();
	EXPECT_EQ(output, "openFire() called from Decepticon\nDecepticon is opening fire\n");
}

TEST(TransformerTest, Ulta) {
	Autobot autobot("Optimus", 10, true, 120.5, "Truck");
	testing::internal::CaptureStdout();
	autobot.ulta();
	std::string output = testing::internal::GetCapturedStdout();
	EXPECT_EQ(output, "ulta() called from Autobot\nAutobot is using ultimate attack!\n");
}

TEST(DecepticonTest, Ulta) {
	Decepticon decepticon("Megatron", 15, true, 150.0, "Tank");
	testing::internal::CaptureStdout();
	decepticon.ulta();
	std::string output = testing::internal::GetCapturedStdout();
	EXPECT_EQ(output, "ulta() called from Decepticon\nDecepticon is using an ultimate attack\n");
}

TEST(TransformerTest, TransformBase) {
	Transformer transformer("Shi", 20, true, 90.0);
	testing::internal::CaptureStdout();
	transformer.transform();
	std::string output = testing::internal::GetCapturedStdout();
	EXPECT_EQ(output, "transform() called from Transformer\nTransformer is transforming right now! \n");
}

