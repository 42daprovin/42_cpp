#include <iostream>
#include "Zombie.hpp"

Zombie*		newZombie(std::string name);
void		randomChump(std::string name);

int		main()
{
	Zombie	antonio("Antonio");
	Zombie	*jaume = newZombie("Jaume");

	antonio.announce();
	jaume->announce();
	randomChump("Mateo");

	delete jaume;
	return (0);
}
