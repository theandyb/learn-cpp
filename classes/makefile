CC = gcc
CXX = g++
RM = rm -f
CXXFLAGS = -Wall -g -std=c++11

BINARIES=bin/class1

all: $(BINARIES)

bin/class1: src/class1.cpp src/Sales_data.h
	$(CXX) $(CXXFLAGS) src/class1.cpp -o bin/class1 

clean:
	$(RM) $(BINARIES)
