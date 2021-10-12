#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"

class ShrubberyCreationForm: public Form
{
	public:

		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string const & target);
		ShrubberyCreationForm(ShrubberyCreationForm const & rhs);
		~ShrubberyCreationForm(void);

		ShrubberyCreationForm &	operator=(ShrubberyCreationForm const & rhs);

		void	execute(Bureaucrat const & executor);

		std::string const	get_name(void) const;

	private:

		std::string const	_target;
};

#endif
