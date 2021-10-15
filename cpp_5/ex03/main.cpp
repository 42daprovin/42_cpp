#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int		main(void)
{
	ShrubberyCreationForm	shrub("Trees");
	PresidentialPardonForm	presi("Tostarica");
	RobotomyRequestForm		robot("Martin");
	Bureaucrat				exec("David", 1);
	Bureaucrat				no_exec("Maria", 150);	
	std::cout << shrub << std::endl;
	std::cout << presi << std::endl;
	std::cout << robot << std::endl;
	try
	{
		shrub.execute(exec);
	}
	catch(std::exception & e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	try
	{
		presi.execute(exec);
	}
	catch(std::exception & e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	try
	{
		robot.execute(exec);
	}
	catch(std::exception & e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}

	/* Sign */

	try
	{
		shrub.beSigned(exec);
	}
	catch(std::exception & e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	try
	{
		presi.beSigned(exec);
	}
	catch(std::exception & e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	try
	{
		robot.beSigned(exec);
	}
	catch(std::exception & e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	std::cout << shrub << std::endl;
	std::cout << presi << std::endl;
	std::cout << robot << std::endl;

	/* Exec exception */

	try
	{
		shrub.execute(no_exec);
	}
	catch(std::exception & e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	try
	{
		presi.execute(no_exec);
	}
	catch(std::exception & e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	try
	{
		robot.execute(no_exec);
	}
	catch(std::exception & e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}

	/* Execute all */

	try
	{
		shrub.execute(exec);
	}
	catch(std::exception & e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	try
	{
		presi.execute(exec);
	}
	catch(std::exception & e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	try
	{
		robot.execute(exec);
	}
	catch(std::exception & e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
}
