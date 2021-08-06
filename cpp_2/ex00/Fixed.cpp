#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed(void) : _fixed_value(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const & f)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_fixed_value = f._fixed_value;
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixed_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixed_value = raw;
	return ;
}

Fixed	& Fixed::operator=(Fixed const & f)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_fixed_value = f.getRawBits();
	return *this;
}
