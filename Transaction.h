#pragma once
#include<iostream>

class Transaction
{
	std::string info;
	double amount;
public:
	Transaction():info(""),amount(0){}
	void set_transaction_info(const std::string&,const double&);
	void show_transaction_info();
};