#include "WrongAnimal.hpp"

//===========WRONG ANIMAL FUNCTIONS===========

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
	this->_type = "Random animal";
	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = src;
	return ;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called" << std::endl;
	return ;
}

WrongAnimal &	WrongAnimal::operator=(WrongAnimal const & rhs)
{
	this->_type = rhs.get_type();
	return *this;
}

std::string	WrongAnimal::get_type(void) const
{
	return this->_type;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "..." << std::endl;
	return ;
}

//=============WRONG CAT FUCTIONS==============

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat default constructor called" << std::endl;
	this->_type = "WrongCat";
	return ;
}

WrongCat::WrongCat(WrongCat const & src)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = src;
	return ;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called" << std::endl;
	return ;
}

WrongCat &	WrongCat::operator=(WrongCat const & rhs)
{
	this->_type = rhs.get_type();
	return *this;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Miau!" << std::endl;
	return ;
}
