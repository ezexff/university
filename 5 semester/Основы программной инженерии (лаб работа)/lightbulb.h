#ifndef LIGHTBULB_H_INCLUDED
#define LIGHTBULB_H_INCLUDED
#include <iostream>
#include "user.h"
#include "light.h"

class user;
class light;
class lightbulb;

class lightbulb
{
private:
	int lightbulb_status_2; // выкручена лампочка или вкручена (0/1)
	int lightbulb_status_1; // не горит лампочка или горит (0/1)
	char *lightbulbname;
public:
	lightbulb();
	lightbulb(char *i2, int j2, int k2);
	void destr_light() { delete[]lightbulbname; }
	void print_lightbulb();
	void turn_on_lb();
	void turn_off_lb();
	void screw_in();
	void unscrew();
	void lightbulb_status_show_to_light(light &n3);
	void lightbulb_status_show_to_user(user &n3);
};
#endif //MY_SYMBOL_H