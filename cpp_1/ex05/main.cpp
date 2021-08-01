#include <iostream>
#include "Karen.hpp"

int		main()
{
	Karen	k;

	std::cout << "DEBUG: ";
	k.complain("DEBUG");
	std::cout << std::endl;
	std::cout << "INFO: ";
	k.complain("INFO");
	std::cout << std::endl;
	std::cout << "WARNING: ";
	k.complain("WARNING");
	std::cout << std::endl;
	std::cout << "ERROR: ";
	k.complain("ERROR");
	std::cout << std::endl;
	return (0);
}
