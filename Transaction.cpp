#include<iostream>

#include"Transaction.h"
#include"Show_Transaction.h"

void Transaction::set_transaction_info(const std::string& info, const double& amount)
{
	this->info = info;
	this->amount = amount;
}
void Transaction::show_transaction_info()
{
	Show_Transaction show_transaction;
	show_transaction.show_transaction(this->info, this->amount);
}