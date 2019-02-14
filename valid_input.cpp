#include "valid_input.h"
#include "pch.h"
#include <regex>

// bool function to validate input
bool valid_input(std::string input, std::string validation) {
	const char* test = input.c_str();
	std::regex re(validation);
	std::cmatch match;
	// if statement
	if (std::regex_match(test, match, re)) {
		return true;
	} // end of if
	else { // else statement
		return false;
	} // end of else
} // end of function




