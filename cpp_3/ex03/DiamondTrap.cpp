#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : FragTrap(), ScavTrap()
{
	std::cout << "Diamond default constructor called" << std::endl;
	this->_name = this->ClapTrap::_name;
	ClapTrap::_name = this->_name + "_clap_name";
	this->_hitpoints = 100;
	this->_energy_points = this->ScavTrap::_energy_points;
	this->_attack_damage = 30;

	return ;
}

DiamondTrap::DiamondTrap(std::string const name)
{
	std::cout << "Diamond name constructor called" << std::endl;
	this->_name = name;
	this->ClapTrap::_name = this->_name + "_clap_name";
	this->_hitpoints = 100;
	this->_energy_points = this->ScavTrap::_energy_points;
	this->_attack_damage = 30;

	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src)
{
	std::cout << "Diamond copy constructor called" << std::endl;
	*this = src;
	return ;
}

DiamondTrap::~DiamondTrap(void)
{
	return ;
}

std::string		DiamondTrap::getname(void) const
{
	return (this->_name);
}

DiamondTrap &	DiamondTrap::operator=(DiamondTrap const & rhs)
{
	this->_name = rhs.getname();
	this->ClapTrap::_name = this->_name + "_clap_name";
	this->_hitpoints = rhs.gethitpoints();
	this->_attack_damage = rhs.getattack();
	this->_energy_points = rhs.getenergy();

	return *this;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My name is " << this->_name << ", and my ClapTrap name is " 
		<< this->ClapTrap::_name << "!" << std::endl;
	return ;
}

void	DiamondTrap::attack(std::string const & target)
{
	ScavTrap::attack(target);
	return ;
}
