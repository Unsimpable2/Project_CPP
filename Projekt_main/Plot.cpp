#include "Plot.h"

using namespace std;

void Plot::If_p_open()
{
	plik.open(plot, ios::in | ios::out);

	if (plik.good() == false)
	{
		cout << endl <<"The file does not exist or is not in the correct location!" << endl;
		exit(0);
	}

	else if (plik.peek() == fstream::traits_type::eof())
	{
		cout << endl << "The file is empty!" << endl;
		plik.close();
		exit(0);
	}

	while (!plik.eof())
	{
		getline(plik, plot);
		story.push_back(plot);
	}
	plik.close();
}

void Plot::Show()
{
	for (size_t i = 0; i < story.size(); i++)
	{
		cout << story.at(i) <<endl;
		Sleep(sleep_time);
	}
	cout << endl;
	story.clear();
}