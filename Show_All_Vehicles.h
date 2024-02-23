#pragma once

#include<iostream>
#include<vector>
#include<unordered_map>


#include"Vehicle.h"

class Show_All_Vehicles
{
public:
	void show_all(std::unordered_map<int, std::shared_ptr<Vehicle>> &) const;
};