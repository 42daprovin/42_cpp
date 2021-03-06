#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int		main()
{
	ScavTrap 	Sa("Jaume");
	ScavTrap	Sb("Master");
	ClapTrap	a("Alpha");
	ClapTrap	b("Beta");
	ScavTrap	Sc(Sa);
	ClapTrap	c;

	c = b;
	a.attack(b.getname());
	b.takeDamage(a.getattack());
	b.beRepaired(5);
	
	Sb.attack(Sa.getname());
	Sa.takeDamage(Sb.getattack());
	Sa.beRepaired(10);
	Sa.guardGate();

	return (0);
}
