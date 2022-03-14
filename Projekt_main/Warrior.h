#pragma once

#include "Existence.h"

class Warrior : public Existence
{
public:
	Warrior()
	{
		name = "Warrior";
		offense = " useless tash.";

		hp = 300;
		max_hp = 300;
		attack = 25;
		max_attack = 25;
		stamina = 50;
		max_stamina = 50;
		armor = 30;
		max_armor = 30;

		mod = 1.75;
		mod_b = 1.5;
		mod_s = 2;
		dmg = 0;
		hp_gain = 15;
		stamina_gain = 20;
		stamina_b_a = 15;
		stamina_s_a = 25;
		stamina_dodge = 15;
	}

	void Ability();

	~Warrior() {}
};