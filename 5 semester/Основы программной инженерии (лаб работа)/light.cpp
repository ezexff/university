#include "user.h"
#include "light.h"
#include "lightbulb.h"

light::light()
{
	lightname = "light1";
	light_status = 0;
	light_status0 = 0;
}

light::light(char *i1, int j1, int k1)
{
	lightname = new char[strlen(i1) + 1];
	strcpy(lightname, i1);
	light_status = j1;
	light_status0 = k1;
}

void light::print_light()
{
	std::cout << lightname << " " << light_status <<" "<<light_status0<< std::endl;
};

void light::turn_on()
{
	light_status = 1;
}

void light::turn_off()
{
	light_status = 0;
}

void light::lightbulb_turn_on(lightbulb &n2)
{
	n2.turn_on_lb();
}

void light::lightbulb_turn_off(lightbulb &n2)
{
	n2.turn_off_lb();
}

void light::light_status_show_to_user(user &n3)
{
	n3.change_user_status_2(light_status);
}

void light::change_light_status(int n) 
{
	light_status0 = n;
}