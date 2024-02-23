#pragma once

#include<iostream>

#include"Time.h"
#include"Charge.h"
#include"Payment_Status.h"

class Vehicle
{
protected:
	std::string v_name;
	std::string v_number_plate;
	Time entry_time;
	Time exit_time;
	Charge charge;
	Payment_Status payment_status;
public:
	Vehicle(const std::string &name,const std::string &plate_no):v_name(name),v_number_plate(plate_no){}
	virtual void set_entry_time(const int &,const int&,const int&);
	virtual void set_exit_time(const int&,const int&,const int&);
	virtual std::string get_vehicle_name() const;
	virtual std::string get_vehicle_plate_number() const;
	virtual std::string get_vehicle_type() const = 0;
	virtual double get_vehicle_duration();
	virtual Charge& get_charge();
	virtual Payment_Status& get_payment_status();
	friend std::ostream& operator<<(std::ostream&, std::shared_ptr<Vehicle>&);
};