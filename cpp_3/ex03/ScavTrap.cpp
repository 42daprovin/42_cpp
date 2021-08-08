#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "Default ScavTrap constructor called" << std::endl;
	this->_hitpoints = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	return ;
}

ScavTrap::ScavTrap(std::string const name) : ClapTrap(name)
{
	std::cout << "Name ScavTrap constructor called" << std::endl;
	this->_hitpoints = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
	std::cout << "Copy ScavTrap constructor called" << std::endl;
	*this = src;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called" << std::endl;
	return ;
}

ScavTrap &	ScavTrap::operator=(ScavTrap const & src)
{
	this->_name = src.getname();
	this->_hitpoints = src.gethitpoints();
	this->_energy_points = src.getenergy();
	this->_attack_damage = src.getattack();

	return *this;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_name << " has entered in Gate keeper mode!" << std::endl;

	return ;
}

void	ScavTrap::attack(std::string const & target)
{
	std::cout << "ScavTrap " << this->getname() << " attacks " << target << " causing " << this->_attack_damage
		<< " points of damage!" << std::endl;
	return ;
}
