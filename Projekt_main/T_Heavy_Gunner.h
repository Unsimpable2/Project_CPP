#pragma once

#include "Existence.h"

class T_Heavy_Gunner : public Existence
{
public:
	T_Heavy_Gunner()
	{
		name = "Tuba Heavy Gunner";
		offense = " DING DONG PONG DOT DOT BOOM.";
		
		hp = 150;
		max_hp = 150;
		attack = 30;
		max_attack = 30;
		stamina = 50;
		max_stamina = 50;
		armor = 20;
		max_armor = 20;
		
		mod = 2;
		mod_b = 1.5;
		mod_s = 2.25;
		dmg = 0;
		hp_gain = 10;
		stamina_gain = 20;
		stamina_b_a = 25;
		stamina_s_a = 35;
		stamina_dodge = 20;
	}

	void Ability();

	~T_Heavy_Gunner() {}
};