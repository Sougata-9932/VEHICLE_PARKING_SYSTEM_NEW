#include<iostream>

#include"Vacant_Places.h"

void Vacant_Places::show_vacant_places(std::vector<int>& v)
{
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] == 0)
		{
			std::cout << i << " ";
		}
	}
}