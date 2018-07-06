#include <iostream>
#include <string>
using namespace std;

int main() {
	string dogsName;
	cout << "Hello, friend!\n"
		<< "This is line two.\n";
	int numGamesPlayed = 77;
	cout << "Thus far, there have been " << numGamesPlayed << " games played.\n";
	double costPerGame = 12.89;
	// Magic formula: print doubles with 2 decimals
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2); // to change later, only need to use this function
	/* Note: when we include an operation in cout, some compilers might require the operation to be 
	   encapsulated in paretheses */
	cout << "If a game cost $" << costPerGame << ", then $" << (costPerGame * numGamesPlayed) <<
		" is how much would have been spent so far. WOW!\n";
	// Input with cin
	cout << "What is your dog's name? ";
	cin >> dogsName;
	cout << dogsName << "? What a cute name!\n";
	return 0;
}
