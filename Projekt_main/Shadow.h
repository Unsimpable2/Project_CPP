#pragma once

#include "Existence.h"

class Shadow : public Existence
{
public:
	Shadow()
	{
		name = "Shadow";
		offense = " mom fat dogshit.";
		
		hp = 300;
		max_hp= 300;
		attack = 20;
		max_attack = 20;
		stamina = 70;
		max_stamina = 70;
		armor = 15;
		max_armor = 15;
		
		mod = 2;
		mod_b = 1.5;
		mod_s = 2;
		dmg = 0;
		hp_gain = 15;
		stamina_gain = 15;
		stamina_b_a = 10;
		stamina_s_a = 25;
		stamina_dodge = 10;
	}

	void Ability();

	~Shadow() {}
};