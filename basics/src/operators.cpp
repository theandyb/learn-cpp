#include <iostream>
using namespace std;

int main() {
	int amountOfBeans = 2545;
	float costOfOneBean = 0.01;
	float totalCost = amountOfBeans * costOfOneBean; //note: product of int and float is a float
	cout << "For " << amountOfBeans << " beans, one should expect to pay $" << totalCost << endl;
	
	// Integer and Floating-Point Division
	int num = 20;
	int denom = 3;
	cout << "When we divide the integer " << num << " by the integer " << denom 
		<< ", we get the unexpected result of " << num/denom << endl;
	cout << "We seem to be missing the decimal, equal to the remainder " << num % denom <<
		" divided by the denominator " << denom << endl;	
	float numFloat = 20;
	float denomFloat = 3;
	cout << "But, when we divide the floating-point " << numFloat << " by the floating point " <<
		denomFloat << ", we get the answer we might be expecting: " << numFloat / denomFloat << endl;
	return 0;
}
