all : bin/pointers

bin/pointers : src/pointers.cpp
	g++ src/pointers.cpp -o bin/pointers
clean :
	rm -rf bin/*

runPointers : bin/pointers
	./bin/pointers
