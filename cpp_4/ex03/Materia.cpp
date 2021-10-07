#include "Materia.hpp"

AMateria::AMateria(void)
{
	return ;
}

AMateria::AMateria(std::string const & type) : type(type)
{
	return ;
}

AMateria::AMateria(AMateria const & src)
{
	*this = src;
	return ;
}

AMateria::~AMateria(void)
{
	return ;
}

AMateria &	AMateria::operator=(AMateria const & rhs)
{
	this->type = rhs.type;
	return *this;
}

std::string const &		AMateria::getType() const
{
	return (this->type);
}

void	AMateria::use(ICharacter & target)
{
	if (this->type == "ice")
		std::cout << "Ice: '* shoots an ice bolt at " << target.getName() << " *'" << std::endl;
	else if (this->type == "cure")
		std::cout << "Cure: '* heals " << target.getName() << "'s wounds *'" << std::endl;
	return ;
}

//=========Ice class==========

Ice::Ice(void) : AMateria("ice")
{
	return ;
}

Ice::Ice(Ice const & src)
{
	this->type = src.getType();	
	return ;
}

Ice::~Ice(void)
{
	return ;
}

Ice &		Ice::operator=(Ice const & rhs)
{
	this->type = rhs.getType();
	return *this;
}

AMateria *	Ice::clone(void) const
{
	return (new Ice(*this));
}

//==========Cure class=============

Cure::Cure(void) : AMateria("cure")
{
	return ;
}

Cure::Cure(Cure const & src)
{
	this->type = src.getType();	
	return ;
}

Cure::~Cure(void)
{
	return ;
}

Cure &		Cure::operator=(Cure const & rhs)
{
	this->type = rhs.getType();
	return *this;
}

AMateria *	Cure::clone(void) const
{
	return (new Cure(*this));
}

//==========MateriaSource======

MateriaSource::MateriaSource(void)
{
	for(int i=0; i < 4; i++)
		this->known[i] = NULL;
	return ;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
	for(int i=0; i < 4; i++)
		this->known[i] = NULL;
	*this = src;
	return ;
}

MateriaSource::~MateriaSource(void)
{
	for(int i=0; i < 4; i++)
	{
		if (this->known[i])
		{
			delete this->known[i];
			this->known[i] = NULL;
		}
	}
	return ;
}

MateriaSource & MateriaSource::operator=(MateriaSource const & rhs)
{
	int i = 0;	

	while (this->known[i] && i < 4)
	{
		delete this->known[i];
		this->known[i] = NULL;
	}

	i = 0;
	while (i < 4)
		if (rhs.getKnown(i))
			this->known[i] = rhs.getKnown(i)->clone(); 

	return *this;
}

AMateria *	MateriaSource::getKnown(int i) const
{
	return (this->known[i]);
}

void	MateriaSource::learnMateria(AMateria *src)
{
	int i = 0;		

	while (this->known[i])
		i++;
	this->known[i] = src->clone();

	return ;
}

AMateria *	MateriaSource::createMateria(std::string const & type)
{
	for(int i=0; i < 4 && this->known[i] != NULL; i++)
	{
		if (this->known[i]->getType() == type)
			return this->known[i]->clone();
	}
	std::cout << "The materia doesn't exist" << std::endl;
	return 0;
}
