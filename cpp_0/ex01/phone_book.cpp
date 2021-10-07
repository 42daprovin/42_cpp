
#include <iostream>
#include <cstring>
#include "contact_class.hpp"
#include "PhoneBook_class.hpp"

int		main(void)
{
	PhoneBook		p_book;
	std::string		order;

	do
	{
		std::cout << "ADD, SEARCH or EXIT: ";
		std::cin >> order;
		std::cout << std::endl;
		if (order.compare("EXIT") && order.compare("SEARCH") && order.compare("ADD"))
			std::cout << "Invalid command!" << "[" << order << "]" << std::endl;
		else
		{
			if (!order.compare("ADD"))
				p_book.add();
			else if (!order.compare("SEARCH"))
				p_book.search();
		}
	}
	while (order.compare("EXIT"));
	std::cout << "Bye!" << std::endl;
	return (0);
}
