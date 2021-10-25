#include "iter.hpp"

class A
{
	public:
		A(void) : _atribute("This is a class") {}
		std::string		getAtribute(void) const {return (this->_atribute);}

	private:
		std::string	const	_atribute;
};

std::ostream &	operator<<(std::ostream & os, A const & rhs)
{
	os << rhs.getAtribute();
	return os;
}

int		main(void)
{
	{
		std::cout << "--->INT TAB<---\n" << std::endl;
		int tab[4] = {1, 2, 3, 4};

		iter<int>(tab, 4, display);
	}
	{
		std::cout << "--->STRING TAB<---\n" << std::endl;
		std::string	tab[4] = {"this", "is", "a", "test"};

		iter<std::string>(tab, 4, display);
	}
	{
		std::cout << "--->CLASS TAB<---\n" << std::endl;
		A	tab[4];

		iter<A>(tab, 4, display);
	}
}
