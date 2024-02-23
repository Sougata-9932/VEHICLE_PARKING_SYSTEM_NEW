#pragma once

#include<iostream>

#include"Time.h"

class Calc_Duration
{
public:
	std::string get_choice();
	virtual double calc_duration(Time &, Time &) =0;
};