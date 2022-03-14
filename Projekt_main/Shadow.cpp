#include "Shadow.h"
#include "Existence.h"

using namespace std;

void Shadow::Ability()
{
	if (ability_q == 1)
	{
		ability_q--;
		armor += 5;
		stamina += 10;
		turn = false;
		cout << endl << name << " uses shadow step, gaining 5 armor points and 10 stamina points." << endl;
	}
	else
	{
		cout << endl << name << " already used shadow step." << endl;
		turn = true;
	}
}
