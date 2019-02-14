#include "pch.h"
#include "temperature.h"
#include "valid_input.h"
#include <iostream>
#include <sstream>

// bool function to validate input

// temperture function
temp_t temp;
int temp_t::getTemperature() {
    
	 // while loop
	bool correct1 = true; // bool variable to true
	std::string getTemp; // string variable getTemp
	std::string re2 = "-?[0-9]{1,3}"; // input to limit temperture to numbers and -
	while (correct1) {// do while loop for How many degrees it is outside
		do {
		std:: cout << std::endl;
		std:: cout << "How many degrees is it outside?" << std::endl;

			std::getline(std::cin, getTemp);
			correct1 = valid_input(getTemp, re2);
			std::stringstream(getTemp) >> temp_t::temperature; // convert getTemp value to temp

		} while (correct1 == false); // end of  do while loop
		correct1 = false;
	} // end of while loop 
	return temp_t::temperature;
} // end of function

//void printTemperature() {
	//std::cout << "Temperature is " <<();
//}
