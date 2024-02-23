#pragma once

#include"Vehicle.h"

#include<iostream>

class Car : public Vehicle
{
public:
	Car(const std::string& str_1, const std::string& str_2) :Vehicle(str_1, str_2){}
	std::string Vehicle::get_vehicle_type() const override;
};