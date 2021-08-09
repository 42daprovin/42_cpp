#include "Animal.hpp"


//===============ANIMAL FUNCTIONS=================

Animal::Animal(void)
{
	std::cout << "Animal default constructor called" << std::endl;
	this->_type = "Random animal";
	return ;
}

Animal::Animal(Animal const & src)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
	return ;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
	return ;
}

Animal &	Animal::operator=(Animal const & rhs)
{
	this->_type = rhs.get_type();
	return *this;
}

std::string	Animal::get_type(void) const
{
	return this->_type;
}

void	Animal::makeSound(void) const
{
	std::cout << "..." << std::endl;
	return ;
}

//==================DOG FUNCTIONS================

Dog::Dog(void)
{
	std::cout << "Dog default constructor called" << std::endl;
	this->_type = "Dog";
	return ;
}

Dog::Dog(Dog const & src)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
	return ;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
	return ;
}

Dog &	Dog::operator=(Dog const & rhs)
{
	this->_type = rhs.get_type();
	return *this;
}

void	Dog::makeSound(void) const
{
	std::cout << "WOOF WOOF!" << std::endl;
	return ;
}

//===================CAT FUNCTIONS=====================

Cat::Cat(void)
{
	std::cout << "Cat default constructor called" << std::endl;
	this->_type = "Cat";
	return ;
}

Cat::Cat(Cat const & src)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
	return ;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
	return ;
}

Cat &	Cat::operator=(Cat const & rhs)
{
	this->_type = rhs.get_type();
	return *this;
}

void	Cat::makeSound(void) const
{
	std::cout << "Miau!" << std::endl;
	return ;
}
