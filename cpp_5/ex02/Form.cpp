#include "Form.hpp"

Form::Form(void) : _name("Default"), _grade_sign(150), _grade_exec(150), sign(0)
{
	return ;
}

Form::Form(std::string const & name, int grade_sign, int grade_exec) : _name(name), _grade_sign(grade_sign), _grade_exec(grade_exec), sign(0)
{
	if (grade_sign < 1 || grade_exec < 1)
		throw Form::GradeTooHighException();
	else if (grade_sign > 150 || grade_exec > 150)
		throw Form::GradeTooLowException();
	return ;
}

Form::Form(Form const & rhs) : _name(rhs.get_name()), _grade_sign(rhs.get_grade_sign()), _grade_exec(rhs.get_grade_exec())
{
	*this = rhs;
	return ;
}

Form::~Form(void)
{
	std::cout << this->_name << " Destroyed!" << std::endl;
	return ;
}

Form &	Form::operator=(Form const & rhs)
{
	this->sign = rhs.get_sign();
	(std::string)this->_name = rhs.get_name();
	return (*this);
}

std::string const	Form::get_name(void) const
{
	return (this->_name);
}

int					Form::get_grade_sign(void) const
{
	return (this->_grade_sign);
}

int					Form::get_grade_exec(void) const
{
	return (this->_grade_exec);
}

bool				Form::get_sign(void) const
{
	return (this->sign);
}

void	Form::set_sign(bool s)
{
	this->sign = s;
	return ;
}

void		Form::beSigned(Bureaucrat const & b)
{
	if (b.get_grade() > this->_grade_sign)
		throw Form::GradeTooLowException();
	else
		this->sign = true;
	return ;
}

std::ostream &	operator<<(std::ostream & os, Form const & rhs)
{
	os << rhs.get_name() << ", form is";
	if (rhs.get_sign() == false)
		os << " not";
	os << " signed, " << "grade to sign " << rhs.get_grade_sign()
		<< ", grade to exec " << rhs.get_grade_exec() << ".";
	return (os);
}
