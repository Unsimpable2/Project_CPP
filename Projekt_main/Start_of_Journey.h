#pragma once

#include "Plot.h"

class Start_of_Journey :public Plot
{
public:
	Start_of_Journey()
	{
		plot = "start_of_journey.txt";
	}

	~Start_of_Journey() {}
};