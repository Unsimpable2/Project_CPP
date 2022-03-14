#pragma once

#include "Existence.h"

class T_Gunner : public Existence
{
public:
	T_Gunner()
	{
		name = "Tuba Gunner";
		offense = " CHANK PONG DING DOT DUP.";
		
		hp = 125;
		max_hp = 125;
		attack = 25;
		max_attack = 25;
		stamina = 45;
		max_stamina = 45;
		armor = 15;
		max_armor = 15;
		
		mod = 1.5;
		mod_b = 2;
		mod_s = 3.5;
		dmg = 0;
		hp_gain = 10;
		stamina_gain = 20;
		stamina_b_a = 15;
		stamina_s_a = 25;
		stamina_dodge = 15;
	}

	void Ability();

	~T_Gunner() {}
};