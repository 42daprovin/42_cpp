#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("Default"), _hitpoints(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "Default Clap constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string const name) : _name(name), _hitpoints(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "Name Clap constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	std::cout << "Copy Clap constructor called" << std::endl;
	*this = src;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Clap destructor called" << std::endl;
	return ;
}

ClapTrap &	ClapTrap::operator=(ClapTrap const & src)
{
	this->_name = src.getname(); 
	this->_hitpoints = src.gethitpoints();
	this->_energy_points = src.getenergy();
	this->_attack_damage = src.getattack();

	return *this;
}

std::string		ClapTrap::getname() const
{
	return (this->_name);
}

unsigned int		ClapTrap::gethitpoints() const
{
	return (this->_hitpoints);
}

unsigned int		ClapTrap::getenergy() const
{
	return (this->_energy_points);
}

unsigned int		ClapTrap::getattack() const
{
	return (this->_attack_damage);
}

void	ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->_attack_damage
		<< " points of damage!" << std::endl;

	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount >= this->_hitpoints)
	{
		std::cout << this->_name << " takes " << amount << " points of damage and dies!"
			<< std::endl;
		this->_hitpoints = 0;
	}
	else
	{
		std::cout << this->_name << " takes " << amount << " points of damage!" << std::endl;
		this->_hitpoints -= amount;
	}

	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << this->_name << " is beeing repaird for " << amount << " points!" << std::endl;
	this->_hitpoints += amount;
	return ;
}
