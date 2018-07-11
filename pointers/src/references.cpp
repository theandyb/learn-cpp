#include <iostream>

void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	int number = 27;
	// A reference can never be void
	int& refNum = number; // refNum is a reference to number

	// Change the value of number to 11
	refNum = 11;
	std::cout << "number = " << number << std::endl;
	
	int num2 = 34;
	// use reference in a function to change the value of variables
	// whose scope(?) is in the main() function
	swap(number, num2);

	std::cout << "We swaped number with the num2 variable using references" <<
		std::endl << "Number is now " << number << std::endl;
	return 0;
}
