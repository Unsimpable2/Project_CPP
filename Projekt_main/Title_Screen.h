#pragma once

#include "Plot.h"

class Title_Screen : public Plot
{
public:
	Title_Screen()
	{
		plot = "title_screen.txt";
		sleep_time = 100;
	}

	~Title_Screen(){}
};