#pragma once

#include<iostream>

class Parking_Place
{
protected:
	int capacity;
	int size = 0;
public:
	Parking_Place(const int & cap):capacity(cap){}
	virtual std::string get_type() const = 0;
};