#include <iostream>
#include "Serialize.hpp"

int		main()
{
	Data			data;	
	uintptr_t		n;

	std::cout << &data << std::endl;
	n = serialize(&data);
	std::cout << n << std::endl;
	std::cout << deserialize(n) << std::endl;
}
