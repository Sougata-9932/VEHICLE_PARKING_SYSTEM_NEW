#include"Vehicle.h"
#include"Set_Time.h"
#include"Time.h"
#include"Charge.h"
#include"Payment_Status.h"

#include<iostream>

std::string Vehicle::get_vehicle_name() const
{
	return this->v_name;
}
std::string Vehicle::get_vehicle_plate_number() const
{
	return this->v_number_plate;
}
void Vehicle::set_entry_time(const int& hrs, const int& mins, const int& secs)
{
	Set_Time set_time;
	set_time.set_the_time(hrs, mins, secs, entry_time);
}
void Vehicle::set_exit_time(const int& hrs, const int& mins, const int& secs)
{
	Set_Time set_time;
	set_time.set_the_time(hrs, mins, secs, exit_time);
}
double Vehicle::get_vehicle_duration()
{
	double res = (this->exit_time) - (this->entry_time);
	return res;
}

Charge& Vehicle::get_charge()
{
	return this->charge;
}
Payment_Status& Vehicle::get_payment_status()
{
	return this->payment_status;
}

std::ostream& operator<<(std::ostream& cout, std::shared_ptr<Vehicle>& vehicle)
{
	std::cout << "VEHICLE's TYPE : " << vehicle->get_vehicle_type();
	std::cout << "VEHICLE's NAME : " << vehicle->v_name;
	std::cout << "VEHICLE's PLATE NUMBER : " << vehicle->v_number_plate;
	std::cout<<"VEHICLE's STAYING DURATION : "<<vehicle->get_vehicle_duration();
	std::cout << "VEHICLE's PAYMENT STATUS : "; 
	vehicle->payment_status.show_payment_status();
	return cout;
}