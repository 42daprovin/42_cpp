#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int		main(void)
{
	/*Constructors and operators*/
	/*{*/
	/*	Form	a;*/	
	/*	Form	b("Form1", 75, 75);*/
	/*	Form 	c(b);*/
	/*	Form	d = b;*/
		
	/*	std::cout << a << std::endl;*/
	/*	std::cout << b << std::endl;*/
	/*	std::cout << c << std::endl;*/
	/*	std::cout << d << std::endl;*/
	/*}*/
	/*Exceptions*/
	/*{*/
	/*	std::cout << "Create a Form with grade 151" << std::endl;*/
	/*	try*/
	/*	{*/
	/*		Form	a("Form1", 151, 60);*/
	/*	}*/
	/*	catch(std::exception & e)*/
	/*	{*/
	/*		std::cerr << "Error: " << e.what() << std::endl;*/
	/*	}*/
	/*	std::cout << "Create a Form with grade 0" << std::endl;*/
	/*	try*/
	/*	{*/
	/*		Form	b("Form2", 60, 0);*/
	/*	}*/
	/*	catch(std::exception & e)*/
	/*	{*/
	/*		std::cerr << "Error: " << e.what() << std::endl;*/
	/*	}*/
	/*	try*/
	/*	{*/
	/*		Bureaucrat	a("David", 150);*/
	/*		Form		form("Form1", 90, 90);*/

	/*		std::cout << a << std::endl;*/
	/*		std::cout << form << std::endl;*/
	/*		std::cout << "Try beSigned function:" << std::endl;*/
	/*		form.beSigned(a);*/
	/*		std::cout << form << std::endl;*/
	/*	}*/
	/*	catch(std::exception & e)*/
	/*	{*/
	/*		std::cerr << "Error: " << e.what() << std::endl;*/
	/*	}*/		
	/* beSigned and signForm */
	/*	{*/
	/*		Bureaucrat	a("David", 150);*/
	/*		Bureaucrat	b("Maria", 30);*/
	/*		Form		form1("Form1", 90, 90);*/
	/*		Form		form2("Form2", 100, 100);*/

	/*		std::cout << a << std::endl;*/
	/*		std::cout << b << std::endl;*/
	/*		std::cout << form1 << std::endl;*/
	/*		std::cout << form2 << std::endl;*/
			
	/*		std::cout << "beSigned Form2 by Maria:" << std::endl;*/
	/*		form2.beSigned(b);*/
	/*		std::cout << form2 << std::endl;*/ 

	/*		std::cout << "signForm Form2 by Maria:" << std::endl;*/
	/*		b.signForm(form2);*/
	/*		std::cout << "signForm Form1 by David:" << std::endl;*/
	/*		a.signForm(form1);*/
	/*		std::cout << "signForm Form1 by Maria:" << std::endl;*/
	/*		b.signForm(form1);*/
	/*		std::cout << form1 << std::endl;*/
	/*	}*/
	/*}*/

	ShrubberyCreationForm	a;
	Bureaucrat				exec("David", 1);
	std::cout << a << std::endl;
	a.beSigned(exec);
	try
	{
		a.execute(exec);
	}
	catch(std::exception & e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
}
