
#include <iostream>
#include "Zombie.hpp"

Zombie		*zombieHorde(int n, std::string name)
{
	Zombie *horde = new Zombie[n];
	int		i;

	for (i = 0; i < n; i++)
		horde[i].setname(name);

	return(horde);
}
