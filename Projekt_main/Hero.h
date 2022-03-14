#pragma once

#include "Existence.h"

class Hero :public Warrior
{
public:
	Hero()
	{
		name = "";
		offense = "";
		hp = 0;
		max_hp = 0;
		attack = 0;
		stamina = 0;
		max_stamina = 0;
		armor = 0;
		mod = 0;
		mod_b = 0;
		mod_s = 0;
		dmg = 0;
		hp_gain = 0;
		stamina_gain = 0;
		stamina_b_a = 0;
		stamina_s_a = 0;
		stamina_dodge = 0;
	}

	~Hero() {}
};