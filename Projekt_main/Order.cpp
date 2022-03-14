#include "Order.h"

using namespace std;

void Order::Order66()
{
	Existence p1, p2;

	Title_Screen s1;
	s1.If_p_open();
	s1.Show();

	Choice s5(&p1, &p2);
	s5.Title_Menu();
	s5.Enemy_Choice();
}