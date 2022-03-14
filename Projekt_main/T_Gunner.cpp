#include "T_Gunner.h"
#include "Existence.h"

using namespace std;

void T_Gunner::Ability()
{
	if (ability_q == 1)
	{
		ability_q--;
		attack += 10;
		hp -= 25;
		turn = false;
		cout << endl << name << " uses focus, gaining 10 attack and losing 25 hp." << endl;
	}
	else
	{
		cout << endl << name << " already used focus." << endl;
		turn = true;
	}
}