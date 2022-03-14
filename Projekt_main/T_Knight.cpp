#include "T_Knight.h"
#include "Existence.h"

using namespace std;

void T_Knight::Ability()
{
	if (ability_q == 1)
	{
		ability_q--;
		armor += 20;
		stamina -= 20;
		turn = false;
		cout << endl << name << " uses armor up, gaining 20 armor point and losing 20 stamina." << endl;
	}
	else
	{
		cout << endl << name << " already used armor up." << endl;
		turn = true;
	}
}