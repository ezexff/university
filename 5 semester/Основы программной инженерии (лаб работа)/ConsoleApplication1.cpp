#include "stdafx.h"
#include <iostream>
#include "user.h"
#include "light.h"
#include "lightbulb.h"


int main()
{
	lightbulb lb1;
	light l1;
	user u1;

	lb1.print_lightbulb();
	l1.print_light();
	u1.print_user();

	/*std::cout << std::endl;

	u1.lightbulb_screw_in(lb1); // пользователь вкручивает лампочку и у неё меняется статус
	lb1.lightbulb_status_show_to_user(u1); // пользователь видит, что лампочка вкручена
	lb1.print_lightbulb();
	u1.print_user();

	std::cout << std::endl;

	u1.light_turn_on(l1); // пользователь включает прибор и у него меняется статус
	l1.light_status_show_to_user(u1); // пользователь видит, что осветительный прибор работает
	l1.print_light();
	u1.print_user();*/

	std::cout << std::endl;

	l1.lightbulb_turn_on(lb1); // прибор включает лампочку и у неё меняется статус
	lb1.lightbulb_status_show_to_light(l1); // прибор видит, что лампочка включена
	l1.print_light();
	lb1.print_lightbulb();

	system("pause");
    return 0;
}

