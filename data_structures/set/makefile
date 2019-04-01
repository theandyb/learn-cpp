CC = gcc
CXX = g++
RM = rm -f
CXXFLAGS = -Wall -g -std=c++11

BINARIES=bin/set1

all: $(BINARIES)

bin/set1: src/set1.cpp
	$(CXX) $(CXXFLAGS) src/set1.cpp -o bin/set1 

clean:
	$(RM) $(BINARIES)
