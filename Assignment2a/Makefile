CXX = g++

CXXFLAGS = -Wall -g

TARGET = my_program

OBJ = main.o reverse.o

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

main.o: main.cpp reverse.h
	$(CXX) $(CXXFLAGS) -c main.cpp

reverse.o: reverse.cpp reverse.h
	$(CXX) $(CXXFLAGS) -c reverse.cpp

clean:
	rm -f $(OBJ) $(TARGET)
