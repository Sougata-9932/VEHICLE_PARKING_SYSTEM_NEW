#include"Calc_Duration.h"

std::string Calc_Duration::get_choice()
{
	char choice;
	std::cout << "ENTER YOURS CHOICE : \n\n";
	std::cout << "1. HOURS FORMAT \n";
	std::cout << "2. MINUTES FORMAT \n";
	std::cin >> choice;
	if (choice == 1)
	{
		return "HOURS";
	}
	else {
		return "MINUTES";
	}
}