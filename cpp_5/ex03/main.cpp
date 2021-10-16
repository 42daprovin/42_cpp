#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int		main(void)
{
	Form	*shrub;
	Form	*presi;
	Form	*robot;
	Intern					randomIntern;
	Bureaucrat				exec("David", 1);

	/*Fail crating Forms*/

	robot = randomIntern.makeForm("robotadfomy request", "Martin");
	shrub = randomIntern.makeForm("shrubbeadsfadfjry creation", "Trees");
	presi = randomIntern.makeForm("presidential padfaardon", "Tostarica");
	
	/*Create Forms*/

	robot = randomIntern.makeForm("robotomy request", "Martin");
	shrub = randomIntern.makeForm("shrubbery creation", "Trees");
	presi = randomIntern.makeForm("presidential pardon", "Tostarica");

	/* Sign */

	try
	{
		shrub->beSigned(exec);
	}
	catch(std::exception & e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	try
	{
		presi->beSigned(exec);
	}
	catch(std::exception & e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	try
	{
		robot->beSigned(exec);
	}
	catch(std::exception & e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	std::cout << *shrub << std::endl;
	std::cout << *presi << std::endl;
	std::cout << *robot << std::endl;

	/* Execute all */

	try
	{
		shrub->execute(exec);
	}
	catch(std::exception & e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	try
	{
		presi->execute(exec);
	}
	catch(std::exception & e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	try
	{
		robot->execute(exec);
	}
	catch(std::exception & e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
}
