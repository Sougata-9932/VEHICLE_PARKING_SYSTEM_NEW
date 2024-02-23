#pragma once

#include<iostream>

class Payment_Status
{
	std::string payment_status;
	double due;
public:
	Payment_Status():payment_status("NOT_PAYED"),due(0){}
	void set_payment_status(const double &,const double &);
	void show_payment_status() const;
	std::string get_payment_status();
};