#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

int		main()
{
	ScavTrap 	Sa("Jaume");
	ScavTrap	Sb("Master");
	ClapTrap	a("Alpha");
	ClapTrap	b("Beta");
	ScavTrap	Sc(Sa);
	ClapTrap	c;
	FragTrap	Fa("Mateo");
	FragTrap	Fb("Raul");
	FragTrap	Fc(Fa);
	DiamondTrap	Da("SuperJaume");
	DiamondTrap Db("SuperMateo");
	DiamondTrap Dc(Da);

	std::cout << std::endl;
	c = b;
	a.attack(b.getname());
	b.takeDamage(a.getattack());
	b.beRepaired(5);
	std::cout << std::endl;
	
	Sb.attack(Sa.getname());
	Sa.takeDamage(Sb.getattack());
	Sa.beRepaired(10);
	Sa.guardGate();
	std::cout << std::endl;

	Fc.attack(Fb.getname());
	Fb.takeDamage(Fc.getattack());
	Fc.beRepaired(5);
	Fa.highFivesGuys();
	std::cout << std::endl;

	Da.attack(Db.ClapTrap::getname());
	Db.takeDamage(Da.getattack());
	Dc.beRepaired(10);
	std::cout << "Health:" << Dc.gethitpoints() << std::endl;
	std::cout << "Energy:" << Dc.getenergy() << std::endl;
	Da.guardGate();
	Db.highFivesGuys();
	Dc.whoAmI();
	std::cout << std::endl;

	return (0);
}
