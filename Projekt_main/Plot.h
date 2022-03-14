#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <windows.h>

using namespace std;

class Plot
{
public:
	int sleep_time;
	string plot;
	fstream plik;
	vector<string> story;

	Plot()
	{
		sleep_time = 0;
		plot = "";
	}

	virtual void If_p_open();
	virtual void Show();

	~Plot(){};
};