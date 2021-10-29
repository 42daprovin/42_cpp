#include "span.hpp"

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

	for (unsigned int i = 0; i < range && this->v.size() < this->_maxSize; i++)
	{
		r = std::rand() % 100;
		sign = std::rand() % 2;
		if (sign)
			r *= -1;
		v.push_back(r);
	}
}

void	displayInt(int n)
{
	std::cout << "{ " << n << " }";
}

void	Span::display(void) const
{
	std::for_each(this->v.begin(), this->v.end(), displayInt);	
	std::cout << std::endl;
}

unsigned int	fabs(int a)
{
	return (a < 0 ? a * -1 : a);
}

unsigned int	Span::shortestSpan(void)
{
	unsigned int		span;

	std::vector<int>::const_iterator		end = this->v.end();
	std::vector<int>::const_iterator		i;

	if (this->v.size() < 2)
		throw Span::NotEnoughNumbersException();
	else
	{
		span = fabs(this->v[0] - this->v[1]);
		std::sort(this->v.begin(), this->v.end());

		for (i = this->v.begin(); i + 1 != end; ++i)
		{
			if (span > fabs(*i - *(i + 1)))
				span = fabs(*i - *(i + 1));
		}
		return span;
	}
}

unsigned int	Span::longestSpan(void) const
{
	int		min;	
	int		max;

	if (this->v.size() < 2)
		throw Span::NotEnoughNumbersException();
	else
	{
		min = *std::min_element(this->v.begin(), this->v.end());
		max = *std::max_element(this->v.begin(), this->v.end());

		return (max - min);
	}
}

void	Span::addNumberRange(int const n, unsigned int const range)
{
	for(unsigned int i = 0; i < range && this->v.size() < this->_maxSize; i++)	
		v.push_back(n);
}
