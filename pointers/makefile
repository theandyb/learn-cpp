all : bin/pointers bin/references

bin/pointers : src/pointers.cpp
	g++ src/pointers.cpp -o bin/pointers

bin/references : src/references.cpp
	g++ src/references.cpp -o bin/references

clean :
	rm -rf bin/*

runPointers : bin/pointers
	./bin/pointers

runReferences : bin/references
	./bin/references
