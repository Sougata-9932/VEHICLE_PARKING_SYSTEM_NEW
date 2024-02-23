// VEHICLE_PARKING_SYSTEM_NEW.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"Wrapper.h"

int main()
{
    Wrapper wp;
    while (1)
    {
        system("cls");
        std::cout << "\n\t\t\t\t\t\t\t-----------------------------------------------";
        std::cout << "\n\t\t\t\t\t\t\t\t1) PARK A VEHICLE : ";
        std::cout << "\n\t\t\t\t\t\t\t\t2) UNPARK A VEHICLE : ";
        std::cout << "\n\t\t\t\t\t\t\t\t3) SHOW ALL VEHICLES : ";
        std::cout << "\n\t\t\t\t\t\t\t\t4) YOUR TRANSACTION HISTORY : ";
        std::cout << "\n\t\t\t\t\t\t\t\t5) SHOW VACANT PLACES : ";
        std::cout << "\n\t\t\t\t\t\t\t\t6) EXIT ";
        std::cout << "\n\t\t\t\t\t\t\t-----------------------------------------------";
        std::cout << std::endl;
        std::cout << "\nENTER YOUR CHOICE : ";
        int ch; std::cin >> ch;
        switch (ch)
        {
        case 1:
            std::cin.ignore();
            wp.park_vehicle(); break;
        case 2:
            std::cin.ignore();
            wp.unpark_vehicle(); break;
        case 3:
            std::cin.ignore();
            wp.show_all_vehicles(); break;
        case 4:
            std::cin.ignore();
            wp.show_transaction_history(); break;
        case 5:
            std::cin.ignore();
            wp.show_vacant_places(); break;
        case 6:
            exit(0);
        default:
            std::cout << "INVALID CHOICE !......\n";
        }
        std::cout << "TYPE [YES] IF YOU WANT TO CONTINUE ELSE TYPE [NO]\n: ";
        std::string str;
        std::cin >> str;
        if (str == "no" || str == "No" || str == "NO") {
            break;
        }
    }
    return 0;
}
