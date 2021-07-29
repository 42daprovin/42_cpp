
#include "Zombie.hpp"
#include <iostream>

Zombie*		newZombie(std::string name);

void		randomChump(std::string name)
{
	Zombie	*zombie;

	zombie = newZombie(name);
	zombie->announce();
	delete zombie;
	return ;
}
