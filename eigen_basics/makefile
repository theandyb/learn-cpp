all: bin/hello bin/matrix_basics

bin/hello : src/hello_eigen.cpp
	g++ -I /usr/include/eigen3 src/hello_eigen.cpp -o bin/hello

bin/matrix_basics : src/matrix_basics.cpp
	g++ -I /usr/include/eigen3 src/matrix_basics.cpp -o bin/matrix_basics
