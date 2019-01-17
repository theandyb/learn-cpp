all: bin/hello bin/matrix_basics bin/basic_lin_solve

bin/hello : src/hello_eigen.cpp
	g++ -I /usr/include/eigen3 src/hello_eigen.cpp -o bin/hello

bin/matrix_basics : src/matrix_basics.cpp
	g++ -I /usr/include/eigen3 src/matrix_basics.cpp -o bin/matrix_basics

bin/basic_lin_solve: src/basic_lin_solve.cpp
	g++ -I /usr/include/eigen3 src/basic_lin_solve.cpp -o bin/basic_lin_solve
