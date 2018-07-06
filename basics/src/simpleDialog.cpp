#include<iostream>
using namespace std;

int main(){
	int numberOfLanguages;

	cout << "Hello!\n" << "This is the second line!";

	cout << "How many programming languages have you used? ";
	cin >> numberOfLanguages;

	if (numberOfLanguages > 69){
		cout << "Wow, it must sad to know fewer people than languages!\n";
	} else {
		cout << "Well now, time to add one more to your repertoire!\n";
	}

	return 0;
}
