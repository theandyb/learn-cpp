#include <iostream>

int main() {
	int number = 27;
	int* ptrNumber = &number; //ALWAYS initialize a pointer with the address of an existing variable or NULL
	std::cout << "The value of the number stored at " << ptrNumber << " is " << *ptrNumber << std::endl;
	*ptrNumber = 48;
	std::cout << "We have changed the value stored at " << ptrNumber << " to " << number << std::endl;
	return 0;
}
