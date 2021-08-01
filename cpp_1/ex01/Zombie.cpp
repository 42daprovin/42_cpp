
#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void) {};

Zombie::Zombie(std::string name) : _name(name)
{
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " died" << std::endl;
	return ;
}

void	Zombie::announce(void) const
{
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

void	Zombie::setname(std::string name)
{
	this->_name = name;
	return ;
}
