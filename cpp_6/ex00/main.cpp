#include <iostream>
#include <sstream>
#include <iomanip>
#include "Value.hpp"

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Error: use only 1 argument." << std::endl;
		return 1;
	}

	Value	v(static_cast<std::string>(argv[1]));
	
	/* std::cout << v.getvalue() << std::endl; */
	v.display();

	return 0;
}
