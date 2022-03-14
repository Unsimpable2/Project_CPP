#include "T_Archmage.h"
#include "Existence.h"

using namespace std;

void T_Archmage::Ability()
{
	if (ability_q == 1)
	{
		ability_q--;
		attack += 10;
		stamina -= 15;
		armor += 15;
		turn = false;
		cout << endl << name << " uses mana portal, gaining 10 attack points and losing 15 stamina." << endl;
	}
	else
	{
		cout << endl << name << " already used mana portal." << endl;
		turn = true;
	}
}