#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
	public:
	
		Intern(void);
		Intern(Intern const & rhs);
		~Intern(void);

		Intern &	operator=(Intern const & rhs);

		Form	*makeForm(std::string name, std::string target);

	private:

		Form	*createPresidentialPardon(std::string target);
		Form	*createShrubberyCreation(std::string target);
		Form	*createRobotomyRequest(std::string target);
};

#endif
