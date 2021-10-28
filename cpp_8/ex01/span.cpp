#include "span.hpp"
#include <algorithm>

Span::Span(void) : _maxSize(0)
{
	this->v.resize(0);
	return ;
}

Span::Span(unsigned int const n) : _maxSize(n)
{
	this->v.resize(0);
	return ;
}

Span::~Span(void)
{
	return ;
}

void	Span::addNumber(int const n)
{
	if (v.size() < this->_maxSize)
		v.push_back(n);
	else
		throw Span::NotSpaceException();
}

void	Span::addRandomRange(unsigned int const range)
{
	std::srand(time(0));
	int		r;
	bool	sign;

	for (int i = 0; i < range && this->v.size() < this->_maxSize; i++)
	{
		r = std::rand() % 100;
		sign = std::rand() % 2;
		if (sign)
			r *= -1;
		v.push_back(r);
	}
}

void	display(int n)
{
	std::cout << "{ " << n << " }";
}

void	Span::display(void) const
{
	for_each (this->v.begin(), this->v.end(), display());	
}
