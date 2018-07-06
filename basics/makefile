all: bin/helloWorld bin/simpleDialog

bin/helloWorld : src/helloWorld.cpp
	g++ src/helloWorld.cpp -o bin/helloWorld

bin/simpleDialog : src/simpleDialog.cpp
	g++ src/simpleDialog.cpp -o bin/simpleDialog

clean :
	rm bin/*

runHello : bin/helloWorld
	./bin/helloWorld

runDialog : bin/simpleDialog
	./bin/simpleDialog
