
#include <iostream>
#include "contact_class.hpp"

int		get_oldest(contact *contact)
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		if (contact[i].getold() == 8)
			break ;
	}
	for (j = 0; j < 8; j++)
	{
		if (j == i)
			contact[j].setold(0);
		else
			contact[j].setold(1);
	}
	std::cout << i << "------" << contact[i].getold() << std::endl;
	return (i);
}

int		print_list(contact *contact)
{
	int i;

	for (i = 0; i < 8; i++)
	{
		if (contact[i].getfull() == 1)
			break ;
	}
	if (i == 8)
	{
		std::cout << "No Friends :'(" << std::endl;
		return (1);
	}
	for (i = 0; i < 8; i++)
	{
		std::cout << "| " << i + 1 << " |";
		std::cout << contact[i].first_name.substr(0, 9) << "." << "|";
		std::cout << contact[i].last_name << " || ";
		std::cout << contact[i].nickname << " || ";
	}
	return (0);
}
