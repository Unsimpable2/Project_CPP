#pragma once

#include "Existence.h"

class T_Archmage : public Existence
{
public:
	T_Archmage()
	{
		name = "Tuba Archmage";
		offense = " DOT DOT WOLOLO DOT CING CZANG.";
		
		hp = 100;
		max_hp = 100;
		attack = 30;
		max_attack = 30;
		stamina = 40;
		max_stamina = 40;
		armor = 5;
		max_armor = 5;
		
		mod = 1.5;
		mod_b = 1.5;
		mod_s = 2.75;
		dmg = 0;
		hp_gain = 10;
		stamina_gain = 15;
		stamina_b_a = 15;
		stamina_s_a = 25;
		stamina_dodge = 15;
	}

	void Ability();

	~T_Archmage() {}
};