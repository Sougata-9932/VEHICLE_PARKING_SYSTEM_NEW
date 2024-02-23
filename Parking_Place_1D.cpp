#include<iostream>

#include"Parking_Place.h"
#include"Parking_Place_1D.h"
#include"Show_All_Vehicles.h"
#include"Vacant_Places.h"

void Parking_Place_1D::park_vehicle(const int& index, std::shared_ptr<Vehicle> vehicle)
{
	if (index >= capacity || index < 0)
	{
		std::cout << "INVALID INDEX\n\n";
		return;
	}
	if (size == capacity)
	{
		std::cout << "NO MORE SLOTS AVAILABLE....SORRY....\n\n";
		return;
	}
	if (slots_1d.find(index) != slots_1d.end())
	{
		std::cout << "THIS PLACE IS NOT EMPTY......\n\n";
		return;
	}
	slots_1d.insert({ index,vehicle });
	this->available_places[index] = 1;
	std::cout << "CAR PLACED SUCESSFULY........\n\n";
}
std::shared_ptr<Vehicle> Parking_Place_1D::unpark_vehicle(const int& index)
{
	if (index >= slots_1d.size() || index < 0)
	{
		std::cout << "INVALID INDEX\n\n";
		return nullptr;
	}
	auto it = slots_1d.find(index);
	if (it == slots_1d.end())
	{
		std::cout << "INDEX NOT FOUND\n\n";
		return nullptr;
	}
	std::shared_ptr<Vehicle> res = it->second;
	slots_1d.erase(it);
	this->available_places[index] = 0;
	std::cout << "CAR UNPLACED SUCESSFULY......\n\n";
	return res;
}
void Parking_Place_1D::show_all_vehicles()
{
	Show_All_Vehicles show_all_vehicles;
	show_all_vehicles.show_all(slots_1d);
}
void Parking_Place_1D::show_vacant_places()
{
	Vacant_Places vacant_places;
    vacant_places.show_vacant_places(this->available_places);
}
std::string Parking_Place_1D::get_type() const
{
	return "1D_PARKING_PLACE";
}