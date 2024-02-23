#include<iostream>

#include"Payment_Processor.h"

double Payment_Processor::process_payment(const double& amount_1, const double& amount_2) const
{
	return amount_1 - amount_2;
}