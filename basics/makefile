all: bin/helloWorld bin/simpleDialog bin/varTypes bin/operators bin/typeCasting

bin/helloWorld : src/helloWorld.cpp
	g++ src/helloWorld.cpp -o bin/helloWorld

bin/simpleDialog : src/simpleDialog.cpp
	g++ src/simpleDialog.cpp -o bin/simpleDialog

bin/varTypes : src/varTypes.cpp
	g++ src/varTypes.cpp -o bin/varTypes

bin/operators : src/operators.cpp
	g++ src/operators.cpp -o bin/operators

bin/typeCasting : src/typeCasting.cpp
	g++ src/typeCasting.cpp -o bin/typeCasting

clean :
	rm bin/*

runHello : bin/helloWorld
	./bin/helloWorld

runDialog : bin/simpleDialog
	./bin/simpleDialog

runVarTypes : bin/varTypes
	./bin/varTypes

runOperators : bin/operators
	./bin/operators

runTypeCasting : bin/typeCasting
	./bin/typeCasting
