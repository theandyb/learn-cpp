#include <iostream>
#include <string>
using namespace std;

int main() {
	// variables must be declared before they are used
	// Storage for the following vars is allocated with declaration
	short numberCals; // 2 bytes, -32,768 to 32,767
	int numberOfBeans; // 4 bytes, -2,147,483,648 to 2,147,483,647
	long numberMolecules; // 4 bytes, -2,147,483,648 to 2,147,483,647
	
	// in general, use double for floating-point numbers
	float cash; // 4 bytes, 7 digit precision
	double pValue; // 8 bytes, 15 digits precision
	long double longPVal; // 10 bytes, 19 digits precision
	
	char letter; // 1 byte
	bool ImCool; // 1 byte, true or false

	string myFruit;

	// Assignment statements
	numberCals = 680;
	numberOfBeans = 2000000;
	numberMolecules = numberOfBeans + 1;

	cash =4.87;
	pValue = 0.0499;
	longPVal = 0.000000000192;

	letter = 'a';
	ImCool = false;
	
	myFruit = "Banana";

	cout << "My favorite kind of fruit is " << myFruit << endl;
	return 0;
}	
