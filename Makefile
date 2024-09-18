# Compiler to use
CXX = g++

# Compiler flags
CXXFLAGS = -Wall -g

# Output executable
TARGET = my_program

# Object files
OBJ = main.o hello.o

# Default rule to build the program
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

# Rule to build main.o
main.o: main.cpp hello.h
	$(CXX) $(CXXFLAGS) -c main.cpp

# Rule to build hello.o
hello.o: hello.cpp hello.h
	$(CXX) $(CXXFLAGS) -c hello.cpp

# Clean rule to remove object files and the executable
clean:
	rm -f $(OBJ) $(TARGET)
