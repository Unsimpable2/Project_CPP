#include "T_Heavy_Gunner.h"
#include "Existence.h"

using namespace std;

void T_Heavy_Gunner::Ability()
{
	if (ability_q == 1)
	{
		ability_q--;
		stamina += 15;
		armor -= 10;
		turn = false;
		cout << endl << name << " uses speed up, gaining 15 stamina and losing 10 armor points." << endl;
	}
	else
	{
		cout << endl << name << " already used speed up." << endl;
		turn = true;
	}
}