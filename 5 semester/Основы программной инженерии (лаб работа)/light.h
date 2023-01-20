#ifndef LIGHT_H_INCLUDED
#define LIGHT_H_INCLUDED
#include <iostream>
#include "lightbulb.h"
#include "user.h"

class light
{
private:
	char *lightname;
	int light_status; // прибор выключен или включен (0/1)
	int light_status0; // лампочка выключена или включена (0/1)
public:
	light();
	light(char *i1, int j1, int k1);
	void destr_light() { delete[]lightname; }
	void print_light();
	void change_light_status(int n);
	void turn_on();
	void turn_off();
	void lightbulb_turn_on(lightbulb &n2);
	void lightbulb_turn_off(lightbulb &n2);
	void light_status_show_to_user(user &n3);
};
#endif //MY_SYMBOL_H