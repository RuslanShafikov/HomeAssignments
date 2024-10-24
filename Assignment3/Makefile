CXX = g++

CXXFLAGS = -Wall -g

TARGET = my_program

TEST_TARGET = my_test

OBJ = Animalbot.o Autobot.o Decepticon.o Transformer.o Team.o Union.o main.o

TEST_OBJ = main_test.o Animalbot.o Autobot.o Decepticon.o Transformer.o Team.o Union.o

all: $(TARGET) $(TEST_TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

$(TEST_TARGET): $(TEST_OBJ)
	$(CXX) $(CXXFLAGS) -o $(TEST_TARGET) $(TEST_OBJ) -lgtest -lgtest_main -pthread

main.o: main.cpp Transformer.h Decepticon.h Animalbot.h Autobot.h Team.h Union.h
	$(CXX) $(CXXFLAGS) -c main.cpp

main_test.o: main_test.cpp Transformer.h Decepticon.h Animalbot.h Autobot.h Team.h Union.h
	$(CXX) $(CXXFLAGS) -c main_test.cpp

Transformer.o: Transformer.cpp Transformer.h 
	$(CXX) $(CXXFLAGS) -c Transformer.cpp

Autobot.o: Autobot.cpp Autobot.h 
	$(CXX) $(CXXFLAGS) -c Autobot.cpp

Decepticon.o: Decepticon.cpp Decepticon.h
	$(CXX) $(CXXFLAGS) -c Decepticon.cpp

Animalbot.o: Animalbot.cpp Animalbot.h
	$(CXX) $(CXXFLAGS) -c Animalbot.cpp

Union.o: Union.cpp Union.h
	$(CXX) $(CXXFLAGS) -c Union.cpp

Team.o: Team.cpp Team.h
	$(CXX) $(CXXFLAGS) -c Team.cpp

clean:
	rm -f $(OBJ) $(TARGET) $(TEST_OBJ) $(TEST_TARGET)
