#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:

		Form(void);	
		Form(std::string const & name, int grade_sign, int grade_exec);
		Form(Form const & rhs);
		virtual ~Form(void);

		Form &	operator=(Form const & rhs);

		class GradeTooHighException : public std::exception
		{
			public:

			virtual const char* what() const throw()
			{
				return ("Grade too high");
			}
			virtual ~GradeTooHighException() throw()
			{}
		};

		class GradeTooLowException : public std::exception
		{
			public:

			virtual const char* what() const throw()
			{
				return ("Grade too low");
			}
			virtual ~GradeTooLowException() throw()
			{}
		};

		class FormNotSignedException : public std::exception
		{
			public:

			virtual const char* what() const throw()
			{
				return ("Form not signed");
			}
			virtual ~FormNotSignedException() throw()
			{}
		};

		void		execute(Bureaucrat const & executor) const;

		std::string const	get_name(void) const;
		int					get_grade_sign(void) const;
		int 				get_grade_exec(void) const;
		bool				get_sign(void) const;

		void				set_sign(bool s);

		void				beSigned(Bureaucrat const & b);
	
	private:

		std::string const	_name;
		int const			_grade_sign;
		int const			_grade_exec;
		bool				sign;

		virtual	void		execAction(void) const = 0;
};

std::ostream &	operator<<(std::ostream & os, Form const & rhs);

#endif
