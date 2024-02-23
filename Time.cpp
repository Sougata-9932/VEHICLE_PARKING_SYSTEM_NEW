#include<iostream>

#include"Time.h"

#include"Calc_Duration.h"
#include"Hours_Format.h"
#include"Minutes_Format.h"


void Time::set_time(const int& hrs, const int& mins, const int& secs)
{
	this->hrs = hrs;
	this->mins = mins;
	this->secs = secs;
}
double Time::operator-(Time &en_t)
{
	int choice;
	std::cout << "ENTER YOURS CHOICE : \n\n";
	std::cout << "1. HOURS FORMAT \n";
	std::cout << "2. MINUTES FORMAT \n";
	std::cin >> choice;
	if (choice == 1)
	{
		Hours_Format hours_format;
		double res = hours_format.calc_duration(*this, en_t);
		return res;
	}
	else if(choice==2){
		Minutes_Format minutes_format;
		double res = minutes_format.calc_duration(*this, en_t);
		return res;
	}
	else {
		std::cout << "INVALID CHOICE\n\n";
	}
}
int Time::get_hours()
{
	return this->hrs;
}
int Time::get_mins()
{
	return this->mins;
}
int Time::get_secs()
{
	return this->secs;
}