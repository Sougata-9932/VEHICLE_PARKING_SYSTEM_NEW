#include<iostream>

#include"Charge.h"

void Charge::set_charge(const double& duration, const double& cpt)
{
	this->chraged_money = (duration) * (double)(cpt);
}
double Charge::get_charge() const
{
	return this->chraged_money;
}