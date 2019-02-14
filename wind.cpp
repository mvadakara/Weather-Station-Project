#include "valid_input.h"
#include "pch.h"
#include <sstream>
#include <iostream>
#include "wind.h"

// wind speed function

int wind_t::getWindMiles() {
	bool correct2 = true; // bool variable set to True.
	std::string re3 = "[0-9]{1,4}"; // limit miles
	std::string getMiles;
	wind_t miles; 

	// while loop for many miles the wind blows outside
	while (correct2) {
		// do while loop 
		do {
			std::cout << std::endl;
			std::cout << "How many miles per hr is the wind speed?" << std::endl;
			std::getline(std::cin, getMiles);
			correct2 = valid_input(getMiles, re3);
			std::stringstream(getMiles) >> miles.miles;
		} while (correct2 == false); // end of do while 
		correct2 = false;
	} // end of while loop
	return miles.miles;
} // end of function


	// wind direction function
std::string wind_t::getWindDirection() {
	bool correct3 = true; // bool variable set to True.
	//std::string direction;
	std::string re4 = "[|N||S|W|E||NW|SW|SE|NE|]{1,2}"; // limit number of characters in wind direction
	//string direction;
	wind_t direction;
	// while statement for wind direction 
	while (correct3) {
		// do while loop
		do {
			std::cout << std::endl;
			std::cout << "What is the wind direction?  Please input |N||S|W|E||NW|SW|SE|NE|"
				<< std::endl;
			std::getline(std::cin, direction.direction);
			correct3 = valid_input(direction.direction, re4);
		} while (correct3 == false); // end of do while loop
		correct3 = false;
	} // end of while loop
	return direction.direction; // return correct3 
} // end of function

