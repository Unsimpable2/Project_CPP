#pragma once

#include <conio.h>
#include <iostream>
#include <cstdlib>
#include "Existence.h"
#include "Warrior.h"
#include "Shadow.h"
#include "T_Samurai.h"
#include "T_Knight.h"
#include "T_Gunner.h"
#include "T_Heavy_Gunner.h"
#include "T_Gods_D_S.h"
#include "T_Archmage.h"
#include "Beginning.h"
#include "Start_of_Journey.h"
#include "Description.h"
#include "Lost.h"
#include "Win.h"

using namespace std;

class Choice : public Existence
{
private:
	Existence* Player;
	Existence* Enemy;

public:
	char choice;

	Choice(Existence* Hero, Existence* Opponent)
	{
		Player = Hero;
		Enemy = Opponent;
		choice = 0;
	}

	~Choice(){}

	void Title_Menu();
	void Class_Choice();
	void Player_Combat();
	void Enemy_Combat();
	void Enemy_Choice();
	void Fight();
	void Final_Fight();
	void Lv_up();
	void Reset();

	double Enemy_hp();
	double Player_hp();
}; 