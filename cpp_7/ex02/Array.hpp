#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<typename T>
class Array
{
	public:
		Array(void) : _size(0), arr(NULL) {}
		Array(unsigned int n) : _size(n), arr(NULL)
		{
			if (n > 0)
				this->arr = new T[n];
		}
		Array(Array const & src) : _size(0), arr(NULL) { *this = src; }
		~Array(void) { delete [] this->arr; }

		Array &		operator=(Array const & rhs)
		{
			if (rhs.size() > 0)
			{
				delete [] this->arr;	
				this->arr = new T[rhs.size()];
				for (int i=0; i < rhs.size(); i++)
					this->arr[i] = rhs.getArr()[i];
			}

			return *this;
		}
		T &		operator[](unsigned int i)
		{
			if (i >= this->_size)
				throw std::exception();
			return (this->arr[i]);
		}

		int const	size(void) const {return this->_size;}
		T *			getArr(void)  const {return this->arr;}


	private:
		T			*arr;
		int	const	_size;
};

#endif
