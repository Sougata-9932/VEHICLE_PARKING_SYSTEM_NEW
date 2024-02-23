#include<iostream>
#include<string>

#include"Wrapper.h"
#include"Vehicle.h"
#include"Car.h"
#include"Bike.h"
#include"Bus.h"
#include"Payment_Processor.h"
#include"Payment_Status.h"
#include"Charge.h"
#include"Vacant_Places.h"

void Wrapper::park_vehicle()
{
	std::string name, plate_number;
	std::cout << "ENTER THE NAME OF THE VEHICLE : ";
	getline(std::cin, name);
	std::cout << "ENTER THE PLATE NUMBER OF THE VEHICLE : ";
	std::cin >> plate_number;
	system("cls");
	std::cout << "\nCHOOSE THE TYPE FROM BELOW.....";
	std::cout << "1. CAR";
	std::cout << "2. BUS";
	std::cout << "3. BIKE\n";
	int ch; std::cin >> ch;
	std::cout << "ENTER THE PLACE NUMBER WHERE YOU WANT TO INSERT : ";
	int ind; std::cin >> ind;
	std::shared_ptr<Vehicle> vehicle_ptr;

	/// CAR / BUS / BIKE CLASS OBJECT IS CREATED ACCORDING TO THE NEED & THE LOCATION IS STORED IN "vehicle_ptr" WHICH EVENTUALLY STORED 
	/// IN "parking_slot" 's - "slot" 's VECTOR .

	if (ch == 1) {
		vehicle_ptr = std::make_shared<Car>(plate_number, name);
	}
	else if (ch == 2)
	{
		vehicle_ptr = std::make_shared<Bus>(plate_number, name);
	}
	else
	{
		vehicle_ptr = std::make_shared<Bike>(plate_number, name);
	}
	this->parking_place_1d.park_vehicle(ind, vehicle_ptr);
}
void Wrapper::unpark_vehicle()
{
	std::cout << "ENTER THE INDEX OF VEHICLE : ";
	int ind;
	std::cin >> ind;
	std::cout << "ENTER THE MONEY COLLECTED : ";
	double money; std::cin >> money;
	Payment_Status payment_status;
	std::shared_ptr<Vehicle> vehicle_ptr = this->parking_place_1d.unpark_vehicle(ind);
	std::string type = vehicle_ptr->get_vehicle_type();
	Charge charge;
	if (type == "Car")
	{
		charge.set_charge(2, 10);
	}
	else if (type == "Bus")
	{
		charge.set_charge(3, 15);
	}
	else {
		charge.set_charge(3, 16);
	}
	double amount = charge.get_charge();
	payment_status.set_payment_status(amount, money);
	if (payment_status.get_payment_status() == "NOT_PAYED")
	{
		std::cout << "PAYMENT SUCESSFUL.....\n";
	}
	Transaction transaction;
	std::string sender = vehicle_ptr->get_vehicle_name();
	transaction.set_transaction_info(sender, money);
	transactions.push_back(transaction);
}
void Wrapper::show_all_vehicles()
{
	parking_place_1d.show_all_vehicles();
}
void Wrapper::show_vacant_places()
{
	parking_place_1d.show_vacant_places();
}
void Wrapper::show_transaction_history()
{
	if (transactions.size() == 0)
	{
		std::cout << "NO TRANSACTION BEEN DONE YET.....\n\n";
		return;
	}
	for (auto transaction : transactions)
	{
		transaction.show_transaction_info();
		std::cout << std::endl;
	}
}