#include <iostream>
#include <sstream>  
#include <string>

// get_int function inspired by http://www.cplusplus.com/forum/beginner/58833/
int get_int(std::string prompt) {
	int ret_integer;
	std::string str_number;
	while(true) {
		std::cout << prompt;
		std::getline(std::cin, str_number); //get string input
		std::stringstream convert(str_number); //turns the string into a stream
		//checks for complete conversion to integer
		if(convert >> ret_integer && !(convert >> str_number))
			return ret_integer;  		
		std::cin.clear(); //just in case an error occurs with cin (eof(), etc) 		
	} 
}

int main() {
	int number = get_int("Please give me an integer: ");
	std::cout << "The statement " << number << " is greater than 2 and less than 6 evaluates to " << ((number > 2) && (number < 6)) << std::endl;
	std::cout << "The statment " << number << " is greater than 8 or less than 3 evaluates to " << ((number > 8) || (number < 3 )) << std::endl;
	return 0;
}
