
#include <iostream>
#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
	return ;
}

HumanB::~HumanB() {}

void	HumanB::attack()
{
	std::cout << this->_name << " attacks with his ";
	if (this->_weapon == NULL)
		std::cout << "own hands" << std::endl;
	else
		std::cout << this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
	return ;
}
