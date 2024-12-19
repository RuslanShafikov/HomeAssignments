CXX = g++
CXXFLAGS = -Wall -g -Werror -Wpedantic -W

TARGET = my_program
TEST_TARGET = my_test

SRC = Class1.cpp Class2.cpp Class3.cpp Sequence.cpp main.cpp
TEST_SRC = main_test.cpp Class1.cpp Class2.cpp Class3.cpp Sequence.cpp

OBJ = $(SRC:.cpp=.o)
TEST_OBJ = $(TEST_SRC:.cpp=.o)

all: $(TARGET) $(TEST_TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(TEST_TARGET): $(TEST_OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^ -lgtest -lgtest_main -pthread


%.o: %.cpp %.h
	$(CXX) $(CXXFLAGS) -c $<


clean:
	rm -f $(OBJ) $(TARGET) $(TEST_OBJ) $(TEST_TARGET)
