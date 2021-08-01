#include <iostream>
#include "Karen.hpp"


void	switch_complains(Karen k, std::string level)
{
	int		i;

	i =	k.select(level); 
	switch (i)
	{
		case (0):
			std::cout << "[ DEBUG ]\n";
			k.complain("DEBUG");
			std::cout << std::endl;
		case (1):
			std::cout << "[ INFO ]\n";
			k.complain("INFO");
			std::cout << std::endl;
		case(2):
			std::cout << "[ WARNING ]\n";
			k.complain("WARNING");
			std::cout << std::endl;
		case(3):
			std::cout << "[ ERROR ]\n";
			k.complain("ERROR");
			std::cout << std::endl;
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
	}
}

int		main(int ac, char **av)
{	
	Karen	k;
	if (ac != 2)
		return (1);
	switch_complains(k, av[1]);
	return (0);
}
