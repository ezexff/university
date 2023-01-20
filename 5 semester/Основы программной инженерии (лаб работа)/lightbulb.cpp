#include "user.h"
#include "light.h"
#include "lightbulb.h"

lightbulb::lightbulb()
{
	lightbulbname = "lightbulb1";
	lightbulb_status_1 = 0;
	lightbulb_status_2 = 0;
}

lightbulb::lightbulb(char *i2, int j2, int k2)
{
	lightbulbname = new char[strlen(i2) + 1];
	strcpy(lightbulbname, i2);
	lightbulb_status_1 = j2;
	lightbulb_status_2 = k2;
}

void lightbulb::print_lightbulb()
{
	std::cout << lightbulbname << " " << lightbulb_status_2 << " " << lightbulb_status_1 << std::endl;
};

void lightbulb::turn_on_lb()
{
	lightbulb_status_1 = 1;
}

void lightbulb::turn_off_lb()
{
	lightbulb_status_1 = 0;
}

void lightbulb::screw_in()
{
	lightbulb_status_2 = 1;
}

void lightbulb::unscrew()
{
	lightbulb_status_2 = 0;
}

void lightbulb::lightbulb_status_show_to_light(light &n3)
{
	n3.change_light_status(lightbulb_status_1);
}

void lightbulb::lightbulb_status_show_to_user(user &n3)
{
	n3.change_user_status_1(lightbulb_status_2);
}