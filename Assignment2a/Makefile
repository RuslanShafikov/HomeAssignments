CXX=g++


СXXFLAGS =  -Wall -g


TARGET = my_program

OBJ = main.o

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp

clean:
	del *.o main.exe
