#pragma once

#include<iostream>
#include<vector>

#include"Parking_Place.h"
#include"Parking_Place_1D.h"
#include"Transaction.h"

class Wrapper
{
	Parking_Place_1D parking_place_1d;
	std::vector<Transaction> transactions;
public:
	Wrapper() = default;
	void park_vehicle();
	void unpark_vehicle();
	void show_vacant_places();
	void show_all_vehicles();
	void show_transaction_history();
};