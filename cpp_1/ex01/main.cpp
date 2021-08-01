#include <iostream>
#include "Zombie.hpp"

Zombie		*zombieHorde(int n, std::string name);


int		main()
{
	Zombie	*horde;
	int		n(3);

	horde = zombieHorde(n, "paco");
	while (n > 0)
	{
		horde[n - 1].announce();
		n--;
	}
	delete [] horde;

	return (0);
}
