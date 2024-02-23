#include<iostream>

#include"Payment_Processor.h"
#include"Payment_Status.h"

void Payment_Status::set_payment_status(const double& amt_1, const double &amt_2)
{
	Payment_Processor processor;
	if (processor.process_payment(amt_1, amt_2) == 0)
	{
		this->payment_status = "IS-PAYED";
		due = 0;
	}
	else
	{
		this->payment_status = "NOT-PAYED";
		due = processor.process_payment(amt_1, amt_2);
	}
}
void Payment_Status::show_payment_status() const
{
	std::cout << "PAYMENT STATUS : " << this->payment_status << std::endl;
	std::cout << "DUE : " << this->due << std::endl;
}

std::string Payment_Status::get_payment_status()
{
	return this->payment_status;
}