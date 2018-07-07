#include <iostream>

int main() {
	int hours = 51;
	float ratePerHour = 12.80;
	int fullWeek = 40;
	float overtimeRatePerHour = (ratePerHour * 1.5);
	float totalPay;

	if (hours <= fullWeek) {
		totalPay = hours * ratePerHour;
	} else {
		totalPay = (fullWeek * ratePerHour) + ((hours - fullWeek) * overtimeRatePerHour);
	}
	std::cout.setf(std::ios::fixed);         
	std::cout.setf(std::ios::showpoint);         
	std::cout.precision(2);
	std::cout << "Homeboy worked " << hours << " hours this week and brought home $" << totalPay << std::endl;
	return 0;
}
