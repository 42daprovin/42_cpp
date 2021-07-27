
#include <iostream>
#include "contact_class.hpp"

contact::contact(void) : _full(0), _old(0)
{
	return ;	
}

contact::~contact(void)
{
	return ;
}

int		contact::getfull(void) const
{
	return (this->_full);
}

int		contact::getold(void) const
{
	return (this->_old);
}

void	contact::setold(int oldest)
{
	if (oldest == 1)
		this->_old++;
	else
		this->_old = 1; 
	return ;
}

void	contact::setfull(void)
{
	this->_full = 1;
	return ;
}
