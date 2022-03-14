#pragma once

#include "Existence.h"

class T_Gods_D_S : public Existence
{
public:
	T_Gods_D_S()
	{
		name = "Tuba Gods Dunkstein and Slamough";
		offense = " SLAM SLAM PONG CING DOT DOT JAM.";
		
		hp = 300;
		max_hp = 300;
		attack = 30;
		max_attack = 30;
		stamina = 45;
		max_stamina = 45;
		armor = 30;
		max_armor = 30;
		
		mod = 1.75;
		mod_b = 2;
		mod_s = 2.75;
		dmg = 0;
		hp_gain = 15;
		stamina_gain = 20;
		stamina_b_a = 20;
		stamina_s_a = 25;
		stamina_dodge = 20;
	}

	void Ability();

	~T_Gods_D_S() {}
};