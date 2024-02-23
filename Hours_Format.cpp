#include<iostream>

#include"Hours_Format.h"

#include"Time.h"

double Hours_Format::calc_duration(Time& ex_t, Time& en_t)
{
	std::cout << ex_t.get_hours() << " " << ex_t.get_mins() << " " << ex_t.get_secs() << std::endl;
	std::cout << en_t.get_hours() << " " << en_t.get_mins() << " " << en_t.get_secs() << std::endl;
	double res_1 = (ex_t.get_hours()) + (ex_t.get_mins() / (double)60) + (ex_t.get_secs() / 3600);
	double res_2 = (en_t.get_hours()) + (en_t.get_mins() / (double)60) + (en_t.get_secs() / 3600);
    std::cout << "HOURS_FORMAT\n";
	std::cout << res_1 << " " << res_2 << std::endl;
	return res_1 - res_2;
}