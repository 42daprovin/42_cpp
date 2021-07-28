
#include <iostream>
#include <cstring>
#include "contact_class.hpp"

void	add_contact(contact *contact)
{
	int				i;
	int				j;
	std::string		str;

	i = 0;
	while (i < 8)
	{
		if (contact[i].getfull() == 0)
			break ;
		i++;
	}
	if (i == 8)
		i = get_oldest(contact);
	else
		for (j = 0; j < 8; j++)
		{
			if (j == i)
				contact[j].setold(0);
			else
				contact[j].setold(1);
		}
	contact[i].setfull();
	std::cout << "First Name:";
	std::cin.ignore(1, '\n');
	std::getline(std::cin, contact[i].first_name);
	std::cout << std::endl;
	std::cout << "Last Name:";
	std::getline(std::cin, contact[i].last_name);
	std::cout << std::endl;
	std::cout << "Nickname:";
	std::getline(std::cin, contact[i].nickname);
	std::cout << std::endl;
	std::cout << "Phone Number:";
	std::getline(std::cin, contact[i].phone_number);
	std::cout << std::endl;
	std::cout << "Darckest Secret:";
	std::getline(std::cin, contact[i].darkest_secret);
	std::cout << std::endl;
	std::cout << "Contact saved correctly!" << std::endl << std::endl;
}

void	search_contact(contact *contact)
{
	int i;

	if (print_list(contact))
		return ;
	std::cout << "Write contact index:";
	std::cin >> i;
	std::cout << std::endl;
	while (i < 1 || i > 8 || contact[i - 1].getfull() == 0)
	{
		std::cout << "Invalid index, try again:";
		std::cin >> i;	
		std::cout << std::endl;
	}
	print_contact_info(contact[i - 1]);
}

int		main(void)
{
	contact			contact[8];
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
				add_contact(contact);
			else if (!order.compare("SEARCH"))
				search_contact(contact);
		}
	}
	while (order.compare("EXIT"));
	std::cout << "Bye!" << std::endl;
	return (0);
}
