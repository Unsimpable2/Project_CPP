#include "Existence.h"

using namespace std;

void Existence::Base_attack(Existence *enemy)
{
	if (stamina >= stamina_b_a)
	{
		stamina -= stamina_b_a;
		dmg = ceil((attack * pow(mod, mod_b)) - enemy->Return_armor());
		cout << endl << name <<" use base attack for: " << dmg << " dmg." << endl;
		enemy->Remove_hp(dmg);
	}
	else
	{
		cout  << endl << name << " do not have enough stamina for base attack, so he uses rest insted." << endl;
		Rest();
	}
	turn = false;
}

void Existence::Special_attack(Existence* enemy)
{
	if (stamina >= stamina_s_a && s_a_quantity == 1)
	{
		s_a_quantity--;
		stamina -= stamina_s_a;
		dmg = ceil((attack * pow(mod, mod_s) - enemy->Return_armor()));
		cout << endl << name << " use special attack for: " << dmg << " dmg." << endl;
		enemy->Remove_hp(dmg);
	}
	else if (stamina >= stamina_b_a && s_a_quantity == 0)
	{
		cout << endl << name << " already used a special attack, so he decided to use the basic one." << endl;
		Base_attack(enemy);
	}
	else if (stamina < stamina_b_a)
	{
		cout << endl << name << " did not have enough stamina for special and base attack, so he uses rest insted." << endl;
		Rest();
	}
	turn = false;
}

void Existence::Rest()
{
	if (stamina == max_stamina && hp == max_hp)
	{
		cout << endl << name << " has the maximum amount of stamina and hp." << endl;
		turn = true;
	}
	else
	{
		if (stamina > (max_stamina-stamina_gain)) stamina = max_stamina;
		else
			stamina += stamina_gain;

		if (hp > (max_hp-hp_gain)) hp = max_hp;
		else
			hp += hp_gain;

		turn = false;
		cout << endl << name << " regenerated "<< stamina_gain <<" stamina and " << hp_gain <<" hp." << endl;
	}
}

void Existence::Escape()
{
	cout << endl << name << " uses a family's secret technique and escapes from the battlefield." << endl;
	hp = 0;
	turn = false;
}

void Existence::Dodge()
{
	if (stamina >= stamina_dodge)
	{
		stamina -= stamina_dodge;
		debuff = 0;
	}
	else
		debuff = 1.25;

	cout << endl << name << " use dodge. Successful or not?" << endl;
	turn = false;
}

void Existence::Taunt(Existence* enemy)
{
	enemy->Remove_hp(5);
	cout << endl << name << " uses taunt dealing 5 damage and calls his enemy" << offense <<endl;
	turn = false;
}

void Existence::Stats()
{
	cout << endl << name <<" current stats." << endl;
	cout << "Hp: " <<hp << endl;
	cout << "Attack: " << attack << endl;
	cout << "Armor: " << armor << endl;
	cout << "Stamina: " << stamina << endl;
	turn = true;
}

/////////////////////////////////////////////////////////

void Existence::Ability()
{
}

/////////////////////////////////////////////////////////

double Existence::Return_armor()
{
	return armor;
}

void Existence::Remove_hp(double x)
{
	hp -= ceil(x*debuff);
	debuff = 1;
}