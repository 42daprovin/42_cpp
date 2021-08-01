
#include <iostream>
#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
	return ;
}

Weapon::~Weapon () {};

void	Weapon::setType(std::string type)
{
	this->_type = type;
	return ;
}

std::string		const & Weapon::getType(void) const
{
	std::string		const &ref = this->_type;

	return (ref);
}
