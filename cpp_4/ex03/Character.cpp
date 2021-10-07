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

Character::Character(Character const & src)
{
	for (int i=0; i < 4; i++)
		this->inventory[i] = NULL;
	*this = src;
	return ;
}

Character::~Character(void)
{
	for (int i=0; i < 4; i++)
	{
		if (this->inventory[i])
		{
			delete this->inventory[i];
			this->inventory[i] = NULL;
		}
	}
	return ;
}

Character &		Character::operator=(Character const & rhs)
{
	int i = 0;		
	
	this->_name = rhs.getName();
	while (this->inventory[i])
	{
		delete this->inventory[i]; 
		this->inventory[i] = NULL;
	}

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

std::string const &		Character::getName(void) const
{
	return (this->_name);
}

void	Character::equip(AMateria *m)
{
	int	i = 0;

	while (this->inventory[i] && i < 4)
	{
		if (m == this->inventory[i])
		{
			std::cout << "This materia is already equiped" << std::endl;
			return ;
		}
		i++;
	}	
	if (i != 4)
	{
		this->inventory[i] = m;
		std::cout << "Materia equiped" << std::endl;
	}
	else
		std::cout << "Inventory full" << std::endl;
	return ;
}

void	Character::unequip(int idx)
{
	if (this->inventory[idx] != NULL)
	{
		this->inventory[idx] = NULL;
		std::cout << "Materia unequiped" << std::endl;
	}
	return ;
}

void	Character::use(int idx, ICharacter & target)
{
	if (this->inventory[idx])
		this->inventory[idx]->use(target);
	return ;
}
