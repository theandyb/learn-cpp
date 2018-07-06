#include <iostream>
using namespace std;

int main() {
	int n = 9, m = 2;
	double ans = n / static_cast<double>(m); // static_cast<double>(n) returns an "equivalent" value
	cout << "We divided an integer (9) by another integer (2) that was cast as a double and got " << ans << endl;

	// The other kinds of casts are:
	// const_cast<Type>
	// dynamic_cast<Type>
	// reinterpret_cast<Type>
	return 0;
}
