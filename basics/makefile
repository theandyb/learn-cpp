all: bin/helloWorld bin/simpleDialog bin/varTypes

bin/helloWorld : src/helloWorld.cpp
	g++ src/helloWorld.cpp -o bin/helloWorld

bin/simpleDialog : src/simpleDialog.cpp
	g++ src/simpleDialog.cpp -o bin/simpleDialog

bin/varTypes : src/varTypes.cpp
	g++ src/varTypes.cpp -o bin/varTypes

clean :
	rm bin/*

runHello : bin/helloWorld
	./bin/helloWorld

runDialog : bin/simpleDialog
	./bin/simpleDialog

runVarTypes : bin/varTypes
	./bin/varTypes
