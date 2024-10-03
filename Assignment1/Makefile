# task 1 "Hello, world"
# Shafikov Ruslan
# st112650@student.spbu.ru
# группа 83

CXX = g++

CXXFLAGS = -Wall -g

TARGET = my_program

OBJ = main.o hello.o

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

main.o: main.cpp hello.h
	$(CXX) $(CXXFLAGS) -c main.cpp

hello.o: hello.cpp hello.h
	$(CXX) $(CXXFLAGS) -c hello.cpp

clean:
	rm -f $(OBJ) $(TARGET)
