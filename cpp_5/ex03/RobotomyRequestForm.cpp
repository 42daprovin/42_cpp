#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("PresidentialPardon", 72, 45), _target("Default")
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const & target) : Form("PresidentialPardon", 72, 45), _target(target)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & rhs) : Form("PresidentialPardon", 72, 45)
{
	*this = rhs;
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	return ;
}

std::string const	RobotomyRequestForm::get_target(void) const
{
	return (this->_target);
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	(std::string)this->_target = rhs.get_name();
	return *this;
}

void		RobotomyRequestForm::execAction(void) const
{
	int		r;

	std::srand(std::time(0));

	r = std::rand();
	std::cout << "*Drilling noises*....";
	if (r % 2 == 0)
		std::cout << this->_target << " has been robotomized succesfully" << std::endl;
	else
		std::cout << "FARILURE!" << std::endl;
}
