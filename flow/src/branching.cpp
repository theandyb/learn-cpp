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

	// let's SWITCH things up a bit
	switch (hours)
	{
		case 51:
			std::cout << "Woah, 51 hours ON-THE-DOT???\n";
			break;
		case 13:
			std::cout << "What an unlucky number of hours to have worked!\n";
			break;
		default:
			std::cout << "That's nice, I suppose, but I've got nothing specific to say to you\n";
	}
	return 0;
}
