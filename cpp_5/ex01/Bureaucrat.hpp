#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

class Bureaucrat
{
	public:

		Bureaucrat(void);
		Bureaucrat(std::string const name, int i);
		Bureaucrat(Bureaucrat const & buro);
		~Bureaucrat(void);

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

		Bureaucrat &	operator=(Bureaucrat const & rhs);

		std::string const	get_name(void) const;
		int					get_grade(void) const;

		void				inc_grade(void);
		void				dec_grade(void);

		void				signForm(Form & f);

	private:

		std::string const	_name;
		int					_grade;

};

std::ostream &	operator<<(std::ostream & os, Bureaucrat const & rhs);

#endif
