#include "contact_class.hpp"
#include "PhoneBook_class.hpp"
#include <iostream>
#include <cstring>

PhoneBook::PhoneBook(void)
{
	return;
}

PhoneBook::~PhoneBook(void)
{
	return;
}

void	PhoneBook::add(void)
{
	int				i;
	int				j;
	std::string		str;

	i = 0;
	while (i < 8)
	{
		if (this->cntct[i].getfull() == 0)
			break ;
		i++;
	}
	if (i == 8)
		i = get_oldest(this->cntct);
	else
		for (j = 0; j < 8; j++)
		{
			if (j == i)
				this->cntct[j].setold(0);
			else
				this->cntct[j].setold(1);
		}
	this->cntct[i].setfull();
	std::cout << "First Name:";
	std::cin.ignore(1, '\n');
	std::getline(std::cin, this->cntct[i].first_name);
	std::cout << std::endl;
	std::cout << "Last Name:";
	std::getline(std::cin, this->cntct[i].last_name);
	std::cout << std::endl;
	std::cout << "Nickname:";
	std::getline(std::cin, this->cntct[i].nickname);
	std::cout << std::endl;
	std::cout << "Phone Number:";
	std::getline(std::cin, this->cntct[i].phone_number);
	std::cout << std::endl;
	std::cout << "Darckest Secret:";
	std::getline(std::cin, this->cntct[i].darkest_secret);
	std::cout << std::endl;
	std::cout << "Contact saved correctly!" << std::endl << std::endl;
}

void PhoneBook::search(void)
{
	int 		i;
	std::string	input;

	if (print_list(this->cntct))
		return ;
	std::cout << "Write contact index:";
	std::cin >> input;	
	i = std::atoi(input.c_str());
	std::cout << std::endl;
	while (i < 1 || i > 8 || this->cntct[i - 1].getfull() == 0)
	{
		std::cout << "Invalid index, try again:";
		std::cin >> input;	
		i = std::atoi(input.c_str());
		std::cout << std::endl;
	}
	print_contact_info(this->cntct[i - 1]);
}
