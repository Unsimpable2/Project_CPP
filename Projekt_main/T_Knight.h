#pragma once

#include "Existence.h"

class T_Knight : public Existence
{
public:
	T_Knight()
	{
		name = "Tuba Knight";
		offense = " CLASH CLASH DOT DOT PONG CING.";
		
		hp = 125;
		max_hp = 125;
		attack = 25;
		max_attack = 25;
		stamina = 50;
		max_stamina = 50;
		armor = 15;
		max_armor = 15;
		
		mod = 1.50;
		mod_b = 1.75;
		mod_s = 3;
		dmg = 0;
		hp_gain = 15;
		stamina_gain = 20;
		stamina_b_a = 20;
		stamina_s_a = 30;
		stamina_dodge = 20;
	}

	void Ability();

	~T_Knight() {}
};