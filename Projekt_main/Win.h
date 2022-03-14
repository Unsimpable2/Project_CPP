#pragma once

#include "Plot.h"

class Win :public Plot
{
public:

	Win()
	{
		plot = "win.txt";
	}

	~Win(){}
};

