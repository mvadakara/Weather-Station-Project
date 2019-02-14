#include "pch.h"
#include <iostream>
#include <sstream>
#include "WeatherMeasurement.h"
#include "valid_input.h"
#include <iostream>
#include <string>
#include "wind.h"
#include "temperature.h"
// weatherStation function
weather_t weatherMeasure;


void weather_t::getResult(std::string weather, int temperature, int miles, std::string direction) {
	std::cout << std::endl;
	std::cout << weather << " Weather Station \n";
	std::cout << "Temperature: " << temperature << " F\n";
	std::cout << "Wind: " << miles << " mph " << direction << std::endl;
}

// weatherStation function
std::string weather_t::getWeatherStation() {
	bool correct = false; // bool variable correct set to false
	std::string weather; // local variable weather
	std::string re1 = "[a-zA-z0-9 /]{1,32}"; // for input weatherStation to limit to 32 character.
	// while statement for weatherStation input
	while (correct == false) {
		// question for the weather station name
		std::cout << "What is the name of your weather station? " << std::endl;
		getline(std::cin, weather);
		correct = valid_input(weather, re1);
	} // end of while loop
	return weather;
}// end of function




void weather_t::StoreArray(int arrTemp[], int arrWindSpeed[], std::string arrWindDirection[],
	int temperature, std::string windDirection, int WindSpeed, int size) {  // contains array string and int types
	// for loop to store the array types to decreminet the size and the shift elements within temp, windDirection
	// and windSpeed
	for (int i = size - 1; i > 0; i--) {
		arrTemp[i] = arrTemp[i - 1];
		arrWindDirection[i] = arrWindDirection[i - 1];
		arrWindSpeed[i] = arrWindSpeed[i - 1];
	} // end of for
	// make the values of array types to regular types to match with main
	arrTemp[0] = temperature;
	arrWindDirection[0] = windDirection;
	arrWindSpeed[0] = WindSpeed;
} // end of function

// void function to print the history of the weather station entries
void weather_t::PrintArray(std::string weather, int temp[], int miles[], std::string direction[], int counter, int size) {
	// for loop to increase the number of weather station entries

	for (int i = 0; i < counter; i++) {
		while (size < counter) {
			counter--;
		}

		std::cout << std::endl;
		std::cout << weather << " Weather Station \n";
		std::cout << "Temperature: " << temp[i] << " F\n";
		std::cout << "Wind: " << miles[i] << " mph " << direction[i] << std::endl;
		std::cout << "---------------" << std::endl;


	} // end of for
} // end of function



	

