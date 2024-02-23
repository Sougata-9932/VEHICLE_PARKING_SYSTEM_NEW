#pragma once

#include<iostream>
#include<unordered_map>

#include"Parking_Place.h"
#include"Vehicle.h"

class Parking_Place_1D : public Parking_Place
{
	std::unordered_map<int, std::shared_ptr<Vehicle>> slots_1d;
	std::vector<int> available_places;
public:
	Parking_Place_1D(const int& cap) :Parking_Place(cap){}
	std::string get_type() const override;
	void park_vehicle(const int&, std::shared_ptr<Vehicle> vehicle);
	std::shared_ptr<Vehicle> unpark_vehicle(const int&);
	void show_all_vehicles();
	void show_vacant_places();
};