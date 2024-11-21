//Shafikov Ruslan
// Assignment 3
// st112650@student.spbu.ru


#include "Transformer.h"
#include "Decepticon.h"
#include "Autobot.h"
#include <vector>
#include <memory>

int main() {
    Autobot autobot1("Optimus", 10, true, 120.5, "Truck");
    Autobot autobot2("Bumblebee", 5, false, 100.0, "Car");
    
    Decepticon decepticon1("Megatron", 15, true, 150.0, "Tank");
    Decepticon decepticon2("Starscream", 20, true, 130.0, "Jet");

    Transformer transformer1("Shi", 20, true, 90.0);
    Transformer transformer2("Wei", 20, true, 80.0);

    autobot1.transform();
    autobot1.openFire();
    autobot1.ulta();

    std::cout << std::endl;

    autobot2.transform();
    autobot2.openFire();
    autobot2.ulta();

    std::cout << std::endl;

    decepticon1.transform();
    decepticon1.openFire();
    decepticon1.ulta();

    std::cout << std::endl;

    decepticon2.transform();
    decepticon2.openFire();
    decepticon2.ulta();

    std::cout << std::endl;

    transformer1.transform();
    transformer1.openFire();
    transformer1.ulta();

    std::cout << std::endl;

    transformer2.transform();
    transformer2.openFire();
    transformer2.ulta();

    std::cout << std::endl;

    std::vector<std::shared_ptr<Transformer>> transformers;

    transformers.push_back(std::make_shared<Autobot>("Optimus", 10, true, 120.5, "Truck"));
    transformers.push_back(std::make_shared<Autobot>("Bumblebee", 5, false, 100.0, "Car"));
    transformers.push_back(std::make_shared<Autobot>("Idk", 12, true, 110.0, "Minivan"));

    transformers.push_back(std::make_shared<Decepticon>("Megatron", 15, true, 150.0, "Tank"));
    transformers.push_back(std::make_shared<Decepticon>("Starscream", 20, true, 130.0, "Jet"));
    transformers.push_back(std::make_shared<Decepticon>("Scary-Name", 20, true, 140.0, "Scary-Bot"));

    transformers.push_back(std::make_shared<Transformer>("Shi", 20, true, 90.0));
    transformers.push_back(std::make_shared<Transformer>("Wei", 20, true, 80.0));
    transformers.push_back(std::make_shared<Transformer>("Dao", 20, false, 60.0));

    for (const auto& transformer : transformers) {
        transformer->transform();
        transformer->openFire();
        transformer->ulta();
        std::cout << std::endl;
    }

    return 0;
}

/*
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "Transformer.h"
#include "Autobot.h"
#include "Decepticon.h"

// Создаем моки для проверки вывода в консоль
class MockTransformer : public Transformer {
public:
    MOCK_METHOD(void, transform, (), (override));
    MOCK_METHOD(void, openFire, (), (override));
    MOCK_METHOD(void, ulta, (), (override));
};

// Тест для метода transform()
TEST(TransformerTest, TestTransform) {
    // Создаем объект мока для Transformer
    MockTransformer mockTransformer;

    // Проверяем, что метод transform() вызывается
    EXPECT_CALL(mockTransformer, transform())
        .Times(1); // Ожидаем, что метод будет вызван 1 раз

    mockTransformer.transform(); // Вызываем метод
}

// Тест для метода openFire()
TEST(TransformerTest, TestOpenFire) {
    MockTransformer mockTransformer;

    // Проверяем, что метод openFire() вызывается
    EXPECT_CALL(mockTransformer, openFire())
        .Times(1);

    mockTransformer.openFire();
}

// Тест для метода ulta()
TEST(TransformerTest, TestUlta) {
    MockTransformer mockTransformer;

    // Проверяем, что метод ulta() вызывается
    EXPECT_CALL(mockTransformer, ulta())
        .Times(1);

    mockTransformer.ulta();
}

// Тест для Autobot
TEST(AutobotTest, TestTransform) {
    Autobot autobot("Optimus", 10, true, 120.5, "Truck");

    // Здесь проверяем поведение transform() для класса Autobot
    testing::internal::CaptureStdout();
    autobot.transform();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Autobot is transforming into a Truck!\n");
}

TEST(AutobotTest, TestOpenFire) {
    Autobot autobot("Bumblebee", 5, false, 100.0, "Car");

    testing::internal::CaptureStdout();
    autobot.openFire();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Autobot is opening fire!\n");
}

TEST(AutobotTest, TestUlta) {
    Autobot autobot("Ironhide", 12, true, 110.0, "Van");

    testing::internal::CaptureStdout();
    autobot.ulta();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Autobot is using ultimate attack!\n");
}

// Тест для Decepticon
TEST(DecepticonTest, TestTransform) {
    Decepticon decepticon("Megatron", 15, false, 150.0, "Tank");

    testing::internal::CaptureStdout();
    decepticon.transform();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Decepticon is transforming into a Tank!\n");
}

TEST(DecepticonTest, TestOpenFire) {
    Decepticon decepticon("Starscream", 8, true, 130.0, "Jet");

    testing::internal::CaptureStdout();
    decepticon.openFire();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Decepticon is opening fire!\n");
}

TEST(DecepticonTest, TestUlta) {
    Decepticon decepticon("Soundwave", 20, true, 140.0, "Satellite");

    testing::internal::CaptureStdout();
    decepticon.ulta();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Decepticon is using ultimate attack!\n");
}

*/
