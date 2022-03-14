#pragma once

#include "Plot.h"
#include "Choice.h"

class Description :public Plot
{
public:
	Description()
	{
		sleep_time = 0;
		plot = "description.txt";
	}

	~Description(){}
};

