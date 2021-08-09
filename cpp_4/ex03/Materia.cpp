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
