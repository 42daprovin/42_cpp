#include "Brain.hpp"

Brain::Brain(void)
{	
	std::cout << "Brain default constructor called" << std::endl;
	return ;
}

Brain::Brain(Brain const & src)
{
	std::cout << "Brain copy constructor called" << std::endl;	
	*this = src;
	return ;
}

Brain &		Brain::operator=(Brain const & rhs)
{
	for(int i = 0; i < 100; i++)
		this->idea[i] = rhs.idea[i];
	return *this;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
	return ;
}
