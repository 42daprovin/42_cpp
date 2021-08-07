#include "ClapTrap.hpp"
#include <iostream>

int		main()
{
	ClapTrap	a("Alpha");
	ClapTrap	b("Beta");
	ClapTrap	c;

	c = b;
	a.attack(b.getname());
	b.takeDamage(a.getattack());
	b.beRepaired(5);

	return (0);
}
