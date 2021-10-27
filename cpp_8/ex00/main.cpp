#include "easyfind.hpp"
#include <vector>
#include <list>

int		main()
{
	{
		std::list<int>  list;

		list.push_back(2);
		list.push_back(45);

		easyfind< std::list<int> >(list, 2);
		try
		{
			easyfind< std::list<int> >(list, 34);
		}
		catch (std::exception & e)
		{
			std::cout << "Error: " << e.what() << std::endl;	
		}
	}
	{
		std::vector<int>	vect;

		vect.push_back(1);
		vect.push_back(2);
		vect.push_back(3);
		vect.push_back(4);
		vect.push_back(5);

		easyfind< std::vector<int> >(vect, 2);
		try
		{
			easyfind< std::vector<int> >(vect, 12);
		}
		catch (std::exception & e)
		{
			std::cout << "Error: " << e.what() << std::endl;	
		}
	}
}
