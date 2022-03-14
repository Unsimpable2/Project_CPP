#pragma once

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Existence
{
public:
	bool turn;
	string name, offense;
	double hp, debuff, max_armor, max_attack, ability_q, mod_b, mod_s, max_hp, attack, stamina, max_stamina, armor, mod, dmg, hp_gain, stamina_gain, stamina_b_a, stamina_s_a, stamina_dodge, s_a_quantity;

	Existence() 
	{
		name = "";
		offense = "";

		////////////

		hp = 0;
		max_hp = 0;
		attack = 0;
		max_attack = 0;
		stamina = 0;
		max_stamina = 0;
		armor = 0;
		max_armor = 0;

		////////////

		mod = 0;
		mod_b = 0; //modyfikator potęgi pod. ataku
		mod_s = 0; //modyfikator potęgi spec. ataku
		dmg = 0;
		hp_gain = 0;
		stamina_gain = 0;
		stamina_b_a = 0; //base attack stamina
		stamina_s_a = 0; //special attack stamina
		stamina_dodge = 0;

		////////////

		debuff = 1;
		turn = false;
		s_a_quantity = 1; //how many special attack we can use
		ability_q = 1; //how many special abilitis we can use
	}

	~Existence(){}

	virtual void Base_attack(Existence* enemy);
	virtual void Rest();
	virtual void Escape();
	virtual void Special_attack(Existence* enemy);
	virtual void Dodge();
	virtual void Taunt(Existence* enemy);
	virtual void Stats();
	virtual void Ability(); //special ability

	void Remove_hp(double x);
	double Return_armor();
};