#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "Default FragTrap constructor called" << std::endl;
	this->_hitpoints = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	return ;
}

FragTrap::FragTrap(std::string const name) : ClapTrap(name)
{
	std::cout << "Name FragTrap constructor called" << std::endl;
	this->_hitpoints = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	return ;
}

FragTrap::FragTrap(FragTrap const & src)
{
	std::cout << "Copy FragTrap constructor called" << std::endl;
	*this = src;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called" << std::endl;
	return ;
}

FragTrap &	FragTrap::operator=(FragTrap const & src)
{
	this->_name = src.getname();
	this->_hitpoints = src.gethitpoints();
	this->_energy_points = src.getenergy();
	this->_attack_damage = src.getattack();

	return *this;
}

void	FragTrap::attack(std::string const & target)
{
	std::cout << "FragTrap " << this->getname() << " attacks " << target << " causing " << this->_attack_damage
		<< " points of damage!" << std::endl;
	return ;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "High Five!!" << std::endl;
	return ;
}
