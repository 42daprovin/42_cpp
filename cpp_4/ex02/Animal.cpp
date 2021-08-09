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

//==================DOG FUNCTIONS================

Dog::Dog(void)
{
	std::cout << "Dog default constructor called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
	return ;
}

Dog::Dog(Dog const & src)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->_brain  = new Brain();
	*this = src;
	return ;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->_brain;
	return ;
}

Dog &	Dog::operator=(Dog const & rhs)
{
	this->_type = rhs.get_type();
	*(this->_brain) = rhs.getbrain();
	return *this;
}

Brain	Dog::getbrain() const
{
	return (*this->_brain);
}

void	Dog::setbrain(std::string str, int pos)
{
	this->_brain->idea[pos] = str;
	return ;
}

void	Dog::makeSound(void) const
{
	std::cout << "WOOF WOOF!" << this->_brain->idea[0] << std::endl;
	return ;
}

//===================CAT FUNCTIONS=====================

Cat::Cat(void)
{
	std::cout << "Cat default constructor called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
	return ;
}

Cat::Cat(Cat const & src)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->_brain = new Brain();
	*this = src;
	return ;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->_brain;
	return ;
}

Cat &	Cat::operator=(Cat const & rhs)
{
	this->_type = rhs.get_type();
	*(this->_brain) = rhs.getbrain();
	return *this;
}

Brain	Cat::getbrain() const
{
	return (*this->_brain);
}

void	Cat::setbrain(std::string str, int pos)
{
	this->_brain->idea[pos] = str;
	return ;
}

void	Cat::makeSound(void) const
{
	std::cout << "Miau!" << std::endl;
	return ;
}
