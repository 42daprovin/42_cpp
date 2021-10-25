#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T>
void	iter(T * arr, int const length, void f(T const & src))
{
	for (int i = 0; i < length; i++)
	{
		f(arr[i]);
	}
}

template<typename T>
void	display(T const & src)
{
	std::cout << src << std::endl;
}

#endif
