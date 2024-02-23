#include<iostream>
#include<vector>


#include"Show_All_Vehicles.h"
#include"Vehicle.h"

void Show_All_Vehicles::show_all(std::unordered_map<int, std::shared_ptr<Vehicle>> &mp) const
{
	if (mp.size() == 0)
	{
		std::cout << "NO VEHICLE PUT YET IN THE SLOT......\n\n";
		return;
	}
	for (auto& elem : mp)
	{
		std::cout << elem.second << std::endl;
	}
}