#include "mutantstack.hpp"

int		main()
{
	MutantStack<int> 	mstack;

	MutantStack<int>::iterator	it;

	it = mstack.begin();
	mstack.push(5);
}
