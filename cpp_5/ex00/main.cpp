#include "Bureaucrat.hpp"

int		main(void)
{
	/*Constructors and operators*/
	{
		Bureaucrat	a;	
		Bureaucrat	b("Pepe", 75);
		Bureaucrat 	c(b);
		Bureaucrat	d = b;
		
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << c << std::endl;
		std::cout << d << std::endl;
	}
	/*Inc and Dec*/
	{
		Bureaucrat a("David", 75);
		Bureaucrat b("Maria", 75);

		std::cout << "Original Grades" << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << "Incrament " << a.get_name() << " and decrement " << b.get_name() << std::endl;
		a.inc_grade();
		b.dec_grade();
		std::cout << a << std::endl;
		std::cout << b << std::endl;
	}
	/*Exceptions*/
	{
		std::cout << "Create a Bureaucrat with grade 151" << std::endl;
		try
		{
			Bureaucrat	a("David", 151);
		}
		catch(std::exception & e)
		{
			std::cerr << "Error: " << e.what() << std::endl;
		}
		std::cout << "Create a Bureaucrat with grade 0" << std::endl;
		try
		{
			Bureaucrat	b("Maria", 0);
		}
		catch(std::exception & e)
		{
			std::cerr << "Error: " << e.what() << std::endl;
		}
		try
		{
			Bureaucrat a("David", 150);
			std::cout << a << std::endl;
			std::cout << "Decrement " << a.get_name() << std::endl;
			a.dec_grade();
			std::cout << a << std::endl;
		}
		catch(std::exception & e)
		{
			std::cerr << "Error: " << e.what() << std::endl;
		}		
		try
		{
			Bureaucrat b("Maria", 1);
			std::cout << b << std::endl;
			std::cout << "Increment " << b.get_name() << std::endl;
			b.inc_grade();
			std::cout << b << std::endl;
		}
		catch(std::exception & e)
		{
			std::cerr << "Error: " << e.what() << std::endl;
		}

	}
}
