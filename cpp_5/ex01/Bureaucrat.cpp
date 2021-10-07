#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Default"), _grade(150)
{
}

Bureaucrat::Bureaucrat(std::string const name, int i) : _name(name)
{
	if (i < 1)
		throw Bureaucrat::GradeTooHighException();		
	if (i > 150)
		throw Bureaucrat::GradeTooLowException();		
	this->_grade = i;
}

Bureaucrat::Bureaucrat(Bureaucrat const & buro) : _name(buro.get_name())
{
	*this = buro;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << get_name() << " Destroyed!" << std::endl;
}

Bureaucrat &	Bureaucrat::operator=(Bureaucrat const & rhs)
{
	(std::string)this->_name = rhs.get_name();
	this->_grade = rhs.get_grade();
	return (*this);
}

std::string const		Bureaucrat::get_name(void) const
{
	return (this->_name);
}

int		Bureaucrat::get_grade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::inc_grade(void)
{
	if (this->_grade == 1)
		throw Bureaucrat::GradeTooHighException();		
	else
		this->_grade--;
}

void	Bureaucrat::dec_grade(void)
{
	if (this->_grade == 150)
		throw Bureaucrat::GradeTooLowException();		
	else
		this->_grade++;
}

void	Bureaucrat::signForm(Form & f)
{
	if (this->_grade > f.get_grade_sign())
		std::cout << this->_name << " cannot sign " << f.get_name()
			<< " because doesn't have enought grade" << std::endl;
	else if (f.get_sign() == 1)
		std::cout << this->_name << " cannot sign " << f.get_name()
			<< " because form is already signed" << std::endl;
	else
	{
		f.set_sign(1);
		std::cout << this->_name << " signs " << f.get_name() << std::endl;
	}
}

std::ostream &	operator<<(std::ostream & os, Bureaucrat const & rhs)
{
	os << rhs.get_name() << ", bureaucrat grade " << rhs.get_grade() << ".";
	return (os);
}
