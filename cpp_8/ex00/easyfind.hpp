#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>

class NotFoundException : public std::exception
{
	public:

		virtual const char* what() const throw()
		{
			return ("Ocurrence not found!");
		}
		virtual ~NotFoundException() throw()
		{}
};

template< typename T >
void 		easyfind(T & cont, int n)
{
	typename T::const_iterator		it;
	typename T::const_iterator		ite = cont.end();

	for (it = cont.begin(); it != ite; ++it)
	{
		if (*it == n)
		{
			std::cout << "Ocurrence found!" << std::endl;
			return ;
		}
	}
	throw NotFoundException();
}

#endif
