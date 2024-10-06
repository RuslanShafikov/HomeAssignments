# task 2b
# Shafikov Ruslan
# st112650@student.spbu.ru
# group 83

CXX = g++

CXXFLAGS = -Wall -g

TARGET = my_program

OBJ = main.o Annotation.o

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

main.o: main.cpp Annotation.h
	$(CXX) $(CXXFLAGS) -c main.cpp

Annotation.o: Annotation.cpp Annotation.h
	$(CXX) $(CXXFLAGS) -c Annotation.cpp

clean:
	rm -f $(OBJ) $(TARGET)