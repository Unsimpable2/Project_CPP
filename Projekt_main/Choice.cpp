#include "Choice.h"

using namespace std;

void Choice::Title_Menu()
{
    Beginning s2;

    bool Move_made = false;
    while (!Move_made)
    {
        cout << "Click the appropriate number to select the option." << endl;
        cout << "1.New Game" << endl;
        cout << "2.Exit Game" << endl;

        choice = _getch();

        switch (choice)
        {
        case '1':
            system("cls");
            Move_made = true;
            cout << "Let's start this strange adventure then! Here we go!" << endl;
            cout << endl;
            s2.If_p_open();
            s2.Show();
            Class_Choice();
            break;

        case '2':
            exit(0);
            break;

        default:
            cout << "There is no such option on the menu!" << endl << endl;
        }
    }    
}

void Choice::Class_Choice()
{    
    bool Move_made = false;
    while (!Move_made)
    {
        Start_of_Journey s3;
        Description s4;

        cout << "---------------------------------------" << endl;
        cout << "Choose your class: " << endl;
        cout << "1. Warrior" << endl;
        cout << "2. Shadow" << endl;
        cout << "3. Description of each class" << endl;

        choice = _getch();

        switch (choice)
        {
        case '1':
            system("cls");
            Move_made = true;
            cout << "So you chose a Warrior Class!" << endl << endl;
            Player = new Warrior();
            s3.If_p_open();
            s3.Show();
            break;

        case '2':
            system("cls");
            Move_made = true;
            cout << "So you chose a Shadow Class!" << endl << endl;         
            Player = new Shadow();
            s3.If_p_open();
            s3.Show();
            break;

        case '3':
            s4.If_p_open();
            s4.Show();
            break;

        default:
            cout << "There is no such option on the menu!"<<endl << endl;
            break;
        }
    } 
}

void Choice::Player_Combat()
{
    Player->turn = true;
    while (Player->turn)
    {
        cout << "---------------------------------------" << endl;
        cout << "1. Base Attack" << endl;
        cout << "2. Special Attack" << endl;
        cout << "3. Special Ability" << endl;
        cout << "4. Rest" << endl;
        cout << "5. Dodge" << endl;
        cout << "6. Taunt" << endl;
        cout << "7. Escape" << endl;
        cout << "8. Current statistics" << endl;
        cout << "9. Enemy statistics" << endl;

        choice = _getch();
   
        cout << endl;
        switch (choice)
        {
        case '1':
            Player->Base_attack(Enemy);
            break;

        case '2':
            Player->Special_attack(Enemy);
            break;

        case '3':
            Player->Ability();
            break;

        case '4':
            Player->Rest();
            break;

        case '5':
            Player->Dodge();
            break;

        case '6':
            Player->Taunt(Enemy);
            break;

        case '7':
            Player->Escape();
            break;

        case '8':
            Player->Stats();
            break;

        case '9':
            Enemy->Stats();
            break;

        default:
            cout << "There is no such option on the menu!" << endl << endl;
            break;     
        }
        cout << endl;
    }
}

void Choice::Enemy_Combat()
{  
    srand((unsigned)time(0));
    int randomNumber = (rand() % 7) + 1;

    switch (randomNumber)
    {
    case 1:
        Enemy->Base_attack(Player);
        break;

    case 2:
        Enemy->Special_attack(Player);
        break;

    case 3:
        Enemy->Ability();
        break;

    case 4:
        Enemy->Rest();
        break;

    case 5:
        Enemy->Dodge();
        break;

    case 6:
        Enemy->Taunt(Player);
        break;

    case 7:
        Enemy->Escape();
        break;
    }
    cout << endl <<endl;
}

void Choice::Enemy_Choice()
{
    srand((unsigned)time(0));

    for (int i = 0; i < 5; i++)
    {
        int randomNumber = (rand() % 5) + 1;
        switch (randomNumber)
        {
        case 1:
            Enemy = new T_Samurai();
            cout << "You will fight Tuba Samurai now!" << endl;
            break;

        case 2:
            Enemy = new T_Knight();
            cout << "You will fight Tuba Knight now!" << endl;
            break;

        case 3:
            Enemy = new T_Gunner();
            cout << "You will fight Tuba Gunner now!" << endl;
            break;

        case 4:
            Enemy = new T_Heavy_Gunner();
            cout << "You will fight Tuba Heavy Gunner now!" << endl;
            break;

        case 5:
            Enemy = new T_Archmage();
            cout << "You will fight Tuba Archmage now!" << endl;
            break;
        }
        Fight();
    }
    Final_Fight();
}

void Choice::Final_Fight()
{
    Win s6;

    cout << endl <<"You will fight final boss now, Tuba Gods Dunkstein and Slamough now!" << endl << endl;
    Enemy = new T_Gods_D_S();
    Fight();
    s6.If_p_open();
    s6.Show();
    delete Player;
    exit(0);
}

void Choice::Lv_up()
{
    bool Move_made = false;
    while (!Move_made)
    {
        cout << endl <<"You win a fight! Which stat do you want to upgrade?" << endl;
        cout << "1. +10 Hp" << endl;
        cout << "2. +5 Attack" << endl;
        cout << "3. +5 Armor" << endl;
        cout << "4. +10 Stamina" << endl;

        choice = _getch();

        switch (choice)
        {
        case '1':
            cout << "You upgrade your hp by 10 points!" << endl << endl;
            Move_made = true;
            Player->max_hp += 10;
            break;

        case '2':
            cout << "You upgrade your attack by 5 points!" << endl << endl;
            Move_made = true;
            Player->max_attack += 5;
            break;

        case '3':
            cout << "You upgrade your armor by 5 points!" << endl << endl;
            Move_made = true;
            Player->max_armor += 5;
            break;

        case '4':
            cout << "You upgrade your stamina by 10 points!" << endl << endl;
            Move_made = true;
            Player->max_stamina += 10;
            break;

        default:
            cout << "There is no such option on the menu!" << endl << endl;
        }
    }  
}

void Choice::Fight()
{
    Lost s5;

    while (Enemy_hp() > 0 && Player_hp() > 0)
    {
        Player_Combat();
        Enemy_Combat();
    }

    if (Enemy_hp() <= 0)
    {
        Lv_up();
        Reset();
    }
    else if (Player_hp() <= 0)
    {
        cout << endl;
        s5.If_p_open();
        s5.Show();
        delete Enemy, Player;
        exit(0);
    }
    delete Enemy;
    system("cls");
}

void Choice::Reset()
{
    Player->hp = Player->max_hp;
    Player->stamina = Player->max_stamina;
    Player->armor = Player->max_armor;
    Player->attack = Player->max_attack;

    if (Player->s_a_quantity == 0)
        Player->s_a_quantity = 1;

    if (Player->ability_q == 0)
        Player->ability_q = 1;

    /////////////////////////////////////////////

    Enemy->hp = Enemy->max_hp;
    Enemy->stamina = Enemy->max_stamina;
    Enemy->armor = Enemy->max_armor;
    Enemy->attack = Enemy->max_attack;

    if (Enemy->s_a_quantity == 0)
        Enemy->s_a_quantity = 1;

    if (Enemy->ability_q == 0)
        Enemy->ability_q = 1;
}

double Choice::Enemy_hp()
{
    return Enemy->hp;
}

double Choice::Player_hp()
{
    return Player->hp;
}