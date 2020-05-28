CXX = g++ #This is the compiler
CXXFLAGS = -std=c++11 -Wall

all: output

output: main.o Point.o
	$(CXX) $(CXXFLAGS) main.o Point.o -o output #name of output needs to be consistent

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp

Point.o: Point.cpp Point.h
	$(CXX) $(CXXFLAGS) -c Point.cpp

clean:
	rm *.o output
