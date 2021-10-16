#include "Intern.hpp"

typedef Form* (Intern::*Funct_list)(std::string target);

Intern::Intern(void)
{
	return;
}

Intern::Intern(Intern const & rhs)
{
	*this = rhs;
	return ;
}

Intern::~Intern(void)
{
	return ;
}

Intern	& Intern::operator=(Intern const & rhs)
{
	(void)rhs;
	return *this;
}

Form	*Intern::makeForm(std::string name, std::string target)
{
	std::string	names[3] = {"presidential pardon", "shrubbery creation", "robotomy request"};
	Funct_list	functions[3] = {&Intern::createPresidentialPardon, &Intern::createShrubberyCreation, &Intern::createRobotomyRequest};

	for (int i=0; i < 3; i++)
	{
		if (name == names[i])
			return ((this->*(functions[i]))(target));
	}
	std::cout << "Name passed is not matching any form type\n";
	return (NULL);
}

Form	*Intern::createPresidentialPardon(std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form	*Intern::createShrubberyCreation(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form	*Intern::createRobotomyRequest(std::string target)
{
	return (new RobotomyRequestForm(target));
}
