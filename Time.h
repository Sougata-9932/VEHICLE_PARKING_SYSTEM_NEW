#pragma once
#include<iostream>

/// <summary>
/// TIME CLASS TO TAKE THE ENTRY TIME & EXIT TIME IN HRS:MINS:SECS FROMAT & CALCULATE THE DURATION OF PARKING
/// </summary>
/// 
class Time
{
	int hrs, mins, secs;
	/// Calc_Duration calculate_duration;
public:
	Time():hrs(0),mins(0),secs(0){}
	void set_time(const int& , const int& , const int& );
	int get_hours();
	int get_mins();
	int get_secs();
	double operator-(Time &);
};