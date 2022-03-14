#pragma once

#include "Plot.h"

class Lost :public Plot
{
public:

	Lost()
	{
		plot = "lost.txt";
	}

	~Lost(){}
};

