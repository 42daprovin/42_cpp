#include "span.hpp"

int		main(void)
{
	{
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		Span sp;

		try
		{
			sp.addNumber(6);
		}
		catch (std::exception & e)
		{
			std::cout << "Error: " << e.what() << std::endl;
		}
		try
		{	
			std::cout << sp.shortestSpan() << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << "Error: " << e.what() << std::endl;
		}
		try
		{	
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << "Error: " << e.what() << std::endl;
		}
	}
	{
		Span sp(100000);

		sp.addNumber(2);
		sp.addNumber(-78);
		sp.addNumberRange(5, 1000000);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		Span sp(10);

		sp.addRandomRange(20);
		sp.display();
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
}
