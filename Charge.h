#pragma once

#include<iostream>

class Charge
{
	double chraged_money;
public:
	Charge():chraged_money(0){}
	void set_charge(const double &,const double &);
	double get_charge() const;
};