#include <gtest/gtest.h>
#include "Class1.h"
#include "Class2.h"
#include "Class3.h"
#include "Sequence.h"
#include <vector>

    TEST(SequenceTest, TestSequenceDouble) {
        std::vector<double> vec = { 1.0, 2.0, 3.0 };
        double k = 5.5;
        int j = 3;
        Sequence<double> seq(k, j, vec);

        EXPECT_TRUE(seq.foo());
    }

    TEST(SequenceTest, TestSequenceInt) {
        int a = 5;
        int b = 3;
        std::vector<double> vec = { 1.0, 2.0, 3.0 };
        Sequence<int> seq(a, b, vec);

        EXPECT_TRUE(seq.foo());
    }

    TEST(Class3Test, TestClass3) {
        Class3 c3;
        std::vector<double> vec = { 1.0, 2.0, 3.0 };
        int a = -3;
        EXPECT_TRUE(c3.bar(a, vec));
        a = 3;
        EXPECT_FALSE(c3.bar(a, vec));

        EXPECT_EQ(c3.c_3_1(), 3);
        EXPECT_DOUBLE_EQ(c3.c_3_2(), 3.0);
    }

    TEST(Class2Test, TestClass2) {
        Class2 c2;
        std::vector<double> vec = { 1.0, 2.0, 3.0 };

        EXPECT_TRUE(c2.bar(1, vec));
        EXPECT_TRUE(c2.bar(0, vec));
        EXPECT_TRUE(c2.bar(-1, vec));

        std::vector<double> emptyVec;
        EXPECT_FALSE(c2.bar(1, emptyVec));
        EXPECT_EQ(c2.c_2_1(), 2);
        EXPECT_DOUBLE_EQ(c2.c_2_2(), 2.0);
    }

    TEST(Class1Test, TestClass1) {
        Class1 c1;
        std::vector<double> vec = { 1.0, 2.0, 3.0 };

        EXPECT_FALSE(c1.bar(1, vec));
        EXPECT_EQ(c1.bar(-1, vec), 0);

        EXPECT_EQ(c1.c_1_1(), 1);
        EXPECT_DOUBLE_EQ(c1.c_1_2(), 1.0);
    }
