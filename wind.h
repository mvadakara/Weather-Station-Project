#pragma once
#ifndef wind_h
#define wind_h
#include <string>
#include "valid_input.h"
class wind_t {
	
public:

	int miles;
	std::string direction;
	int getWindMiles();
	std::string getWindDirection();
};



#endif