all : bin/booleans bin/branching

bin/booleans : src/booleans.cpp
	g++ src/booleans.cpp -o bin/booleans

bin/branching : src/branching.cpp
	g++ src/branching.cpp -o bin/branching

clean :
	rm bin/*

runBooleans : bin/booleans
	./bin/booleans

runBranching : bin/branching
	./bin/branching
