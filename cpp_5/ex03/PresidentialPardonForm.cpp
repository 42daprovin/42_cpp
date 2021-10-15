#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("PresidentialPardon", 25, 5), _target("Default")
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const & target) : Form("PresidentialPardon", 25, 5), _target(target)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & rhs) : Form("PresidentialPardon", 25, 5)
{
	*this = rhs;
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	return ;
}

std::string const	PresidentialPardonForm::get_target(void) const
{
	return (this->_target);
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	(std::string)this->_target = rhs.get_name();
	return *this;
}

void		PresidentialPardonForm::execAction(void) const
{
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
