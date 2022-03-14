#pragma once

#include "Existence.h"

class T_Samurai : public Existence
{
public:

	T_Samurai()
	{
		name = "Tuba Samurai";
		offense = " CING DONG PONG DOT DOT.";
		
		hp = 100;
		max_hp = 100;
		attack = 25;
		max_attack = 25;
		stamina = 45;
		max_stamina = 45;
		armor = 10;
		max_armor = 10;
		
		mod = 1.5;
		mod_b = 1.75;
		mod_s = 3.25;
		dmg = 0;
		hp_gain = 10;
		stamina_gain = 15;
		stamina_b_a = 15;
		stamina_s_a = 30;
		stamina_dodge = 15;
	}

	void Ability();

	~T_Samurai(){}
};