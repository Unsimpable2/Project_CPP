#include "T_Gods_D_S.h"
#include "Existence.h"

using namespace std;

void T_Gods_D_S::Ability()
{
	if (ability_q == 1)
	{
		ability_q--;
		stamina += 15;
		attack += 10;
		armor -= 5;
		turn = false;
		cout << endl << name << " uses slam, gaining 15 stamina and 10 attack points but losing 5 armor points." << endl;
	}
	else
	{
		cout << endl << name << " already used slam." << endl;
		turn = true;
	}
}