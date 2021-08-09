#include "Character.hpp"

Character::Character(void)
{
	for (int i=0; i < 4; i++)
		this->inventory[i] = NULL;
	return ;
}

Character::Character(std::string const & name) : _name(name)
{
	for (int i=0; i < 4; i++)
		this->inventory[i] = NULL;	
}

Character &		Character::operator=(Character const & rhs)
{
	int i = 0;		
	
	this->_name = rhs.getName();
	while (this->inventory[i])
		delete this->inventory[i]; 

	i = 0;
	while (i < 4)
		if (rhs.getInventory(i))
			this->inventory[i] = rhs.getInventory(i)->clone();

	return *this;
}

AMateria *	Character::getInventory(int i) const
{
	return (this->inventory[i]);
}

void	Character::equip(AMateria *m)
{
	int	i = 0;

	while (this->inventory[i])
		i++;
	this->inventory[i] = m;
}
