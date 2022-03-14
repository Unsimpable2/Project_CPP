#include "T_Samurai.h"
#include "Existence.h"

using namespace std;

void T_Samurai::Ability()
{
	if (ability_q == 1)
	{
		ability_q--;
		hp += 50;
		armor += 10;
		turn = false;
		cout << endl << name << " uses meditation, gaining 50 hp and 10 armor points." << endl;
	}
	else
	{
		cout << endl << name << " already used meditation." << endl;
		turn = true;
	}
}
