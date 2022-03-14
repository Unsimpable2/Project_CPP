#include "Warrior.h"
#include "Existence.h"

using namespace std;

void Warrior::Ability()
{
	if (ability_q == 1)
	{
		ability_q--;
		attack += 10;
		armor -= 10;
		turn = false;
		cout << endl << name << " uses battle cry, gaining 10 attack points and losing 10 armor points." << endl;
	}
	else
	{
		cout << endl << name << " already used battle cry." <<endl;
		turn = true;
	}
}
