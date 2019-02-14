#pragma once
#ifndef WeatherMeasurement_H
#include "wind.h"
#include "temperature.h"
#include <string>

class weather_t {
public:
	temp_t temperature;
	wind_t wind;
	void StoreArray(int arrTemp[], int arrWindSpeed[], std::string arrWindDirection[],
		int temperature, std::string windDirection, int WindSpeed, int size);
	void PrintArray(std::string weather, int temp[], int miles[], std::string direction[], int counter, int size);
	std::string getWeatherStation();
	void getResult(std::string weather, int temperature, int miles, std::string direction);
};



#endif
