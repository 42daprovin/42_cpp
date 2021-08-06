#include <iostream>
#include "Fixed.hpp"

int		main()
{
	Fixed	a(5.05f);
	Fixed	b(3.4f);
	Fixed	c;

	std::cout << c++ << std::endl;
	std::cout << c << std::endl;
	std::cout << ++c << std::endl;
	std::cout << a + b << std::endl;
	std::cout << a - b << std::endl;
	std::cout << a * Fixed(2) << std::endl;
	std::cout << a / Fixed(2) << std::endl;
	if (a < b)
		std::cout << a << " < " << b <<  std::endl;
	if (a > b)
		std::cout << a << " > " <<  b << std::endl;
	if (a >= b)
		std::cout << a << " >= " <<  b << std::endl;
	if (a <= b)
		std::cout << a << " <= " <<  b << std::endl;
	if (a == b)
		std::cout << a << " == " <<  b << std::endl;
	if (a != b)
		std::cout << a << " != " <<  b << std::endl;
	std::cout << "max(" << a << "," << b << ") = " << Fixed::max(a, b) << std::endl;
	std::cout << "min(" << a << "," << b << ") = " << Fixed::min(a, b) << std::endl;
	return (0);
}
