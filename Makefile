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

# Clean rule to remove object files and the executable
clean:
	rm -f $(OBJ) $(TARGET)
