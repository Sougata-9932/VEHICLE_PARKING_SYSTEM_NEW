#include<iostream>

#include"Show_Transaction.h"

void Show_Transaction::show_transaction(const std::string& info, const double& amount)
{
	std::cout << amount << " " << info;
}