#include<iostream>

#include"Set_Time.h"
#include"Time.h"

void Set_Time::set_the_time(const int& hrs, const int& mins, const int& secs, Time& time)
{
	time.set_time(hrs, mins, secs);
	return;
}