#ifndef	MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <algorithm>
#include <iterator>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:

		class iterator : public std::iterator<std::input_iterator_tag, T>
		{
			public:
				iterator(T * v) : p(v) {}
				iterator(iterator const &	src) : p(src.p) {}
				iterator() : p(NULL) {}


			private:
				T	* p;
		};
		iterator &	begin(void)
		{
			iterator	it(&this->top());
			return it;
		}	
};

#endif
