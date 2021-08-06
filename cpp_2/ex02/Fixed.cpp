#include <iostream>
#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void) : _fixed_value(0)
{
	/* std::cout << "Default constructor called" << std::endl; */
	return ;
}

Fixed::Fixed(Fixed const & f)
{
	/* std::cout << "Copy constructor called" << std::endl; */
	this->_fixed_value = f._fixed_value;
	return ;
}

Fixed::~Fixed(void)
{
	/* std::cout << "Destructor called" << std::endl; */
	return ;
}

int		Fixed::getRawBits(void) const
{
	/* std::cout << "getRawBits member function called" << std::endl; */
	return (_fixed_value);
}

void	Fixed::setRawBits(int const raw)
{
	/* std::cout << "setRawBits member function called" << std::endl; */
	this->_fixed_value = raw;
	return ;
}

Fixed	& Fixed::operator=(Fixed const & f)
{
	/* std::cout << "Assignation operator called" << std::endl; */
	this->_fixed_value = f.getRawBits();
	return *this;
}

Fixed::Fixed(const int n)
{
	int		tmp;
	/* std::cout << "Int constructor called" << std::endl; */

	tmp = n << this->_fract_bits;
	this->_fixed_value = tmp;
	return ;
}

Fixed::Fixed(const float f)
{
	float		fp;
	int			n;

	/* std::cout << "Float constructor called" << std::endl; */
	fp = f * (1 << this->_fract_bits);
	fp = roundf(fp);
	n = (int)fp;

	this->_fixed_value = n;
}

float	Fixed::toFloat(void) const
{
	float	f;
	int		n;

	n = this->_fixed_value; 
	f = ((float)n / float(1 << this->_fract_bits));

	return f;
}

int		Fixed::toInt(void) const
{
	int		n;

	n = this->_fixed_value;
	n = n >> 8;
	return n;
}

std::ostream	& operator<<(std::ostream & os, const Fixed & f)
{
	os << f.toFloat() ;
	return os;
}

bool	Fixed::operator<(Fixed const & f)
{
	if (this->_fixed_value < f.getRawBits())
		return 1;
	else
		return 0;
}

bool	Fixed::operator>(Fixed const & f)
{
	if (this->_fixed_value > f.getRawBits())
		return 1;
	else
		return 0;
}

bool	Fixed::operator<=(Fixed const & f)
{
	if (this->_fixed_value <= f.getRawBits())
		return 1;
	else
		return 0;
}

bool	Fixed::operator>=(Fixed const & f)
{
	if (this->_fixed_value >= f.getRawBits())
		return 1;
	else
		return 0;
}

bool	Fixed::operator==(Fixed const & f)
{
	if (this->_fixed_value == f.getRawBits())
		return 1;
	else
		return 0;
}

bool	Fixed::operator!=(Fixed const & f)
{
	if (this->_fixed_value != f.getRawBits())
		return 1;
	else
		return 0;
}

Fixed	Fixed::operator+(Fixed const & f)
{
	Fixed	a;
	int		n;

	n = this->_fixed_value + f.getRawBits();
	a.setRawBits(n);
	return a;
}

Fixed	Fixed::operator-(Fixed const & f)
{
	Fixed	a;
	int		n;

	n = this->_fixed_value - f.getRawBits();
	a.setRawBits(n);
	return a;
}

Fixed	Fixed::operator*(Fixed const & f)
{
	Fixed	a;
	int		n;

	n = roundf(this->_fixed_value * f.toFloat());
	a.setRawBits(n);
	return a;
}

Fixed	Fixed::operator/(Fixed const & f)
{
	Fixed	a;
	int		n;

	n = roundf(this->_fixed_value / f.toFloat());
	a.setRawBits(n);
	return a;
}

Fixed	 &Fixed::operator++()
{
	this->_fixed_value = this->_fixed_value + 1;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp;
	tmp = *this;
	this->_fixed_value = this->_fixed_value + 1;
	return (tmp);
}

Fixed	 &Fixed::operator--()
{
	this->_fixed_value = this->_fixed_value - 1;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp;
	tmp = *this;
	this->_fixed_value = this->_fixed_value - 1;
	return (tmp);
}

Fixed	& Fixed::max(Fixed & a, Fixed & b)
{
	if (a >= b)
		return a;
	else
		return b;
}

const Fixed	& Fixed::max(Fixed const & a, Fixed const & b)
{
	if (Fixed(a) >= Fixed(b))
		return a;
	else
		return b;
}

Fixed	& Fixed::min(Fixed & a, Fixed & b)
{
	if (a <= b)
		return a;
	else
		return b;
}

const Fixed	& Fixed::min(Fixed const & a, Fixed const & b)
{
	if (Fixed(a) <= Fixed(b))
		return a;
	else
		return b;
}
