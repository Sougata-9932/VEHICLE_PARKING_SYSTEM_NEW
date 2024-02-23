#pragma once

#include<iostream>

#include"Calc_Duration.h"
#include"Time.h"

class Minutes_Format : public Calc_Duration
{
public:
	double calc_duration(Time&, Time&) override;
};