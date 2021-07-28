
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
	return (i);
}

void	good_printing(std::string str)
{
	int	length;
	int i;

	length = str.length();
	std::cout << " ";
	if (length <= 10)
	{
		std::cout << str;
		for(i = 0; i < 10 - length; i++)
			std::cout << " ";
	}
	else
		std::cout << str.substr(0, 9) << ".";
	std::cout << " |";
}

int		print_list(contact *contact)
{
	int i;
	int	j;

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
	for (j = 0; j < 8; j++)
	{
		if (contact[j].getfull() == 0)	
			break;
	}
	std::cout << "==================CONTACTS==================" << std::endl;;
	for (i = 0; i < j; i++)
	{
		std::cout << "| " << i + 1 << " |";
		good_printing(contact[i].first_name);
		good_printing(contact[i].last_name);
		good_printing(contact[i].nickname);
		std::cout << std::endl;
	}
	std::cout << std::endl;
	return (0);
}

void	print_contact_info(contact contact)
{
	std::cout << "CONTACT INFO" << std::endl << std::endl;
	std::cout << "First Name: " << contact.first_name << std::endl << std::endl;
	std::cout << "Last Name: " << contact.last_name << std::endl << std::endl;
	std::cout << "Nickname: " << contact.nickname << std::endl << std::endl;
	std::cout << "Phone Number: " << contact.phone_number << std::endl << std::endl;
	std::cout << "Darkest Secret: " << contact.darkest_secret << std::endl << std::endl;
}
