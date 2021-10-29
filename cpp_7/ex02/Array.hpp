#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<typename T>
class Array
{
	public:
		Array(void) : arr(NULL), _size(0) {}
		Array(unsigned int n) : arr(NULL), _size(n)
		{
			if (n > 0)
				this->arr = new T[n];
		}
		Array(Array const & src) : arr(NULL), _size(0) { *this = src; }
		~Array(void) { delete [] this->arr; }

		Array &		operator=(Array const & rhs)
		{
			if (rhs.size() > 0)
			{
				if (this->_size > 0)
					delete [] this->arr;	
				this->arr = new T[rhs.size()];
				for (int i=0; i < rhs.size(); i++)
					this->arr[i] = rhs.getArr()[i];
				this->_size = rhs.size();
			}

			return *this;
		}
		T &		operator[](unsigned int i)
		{
			if (i >= this->_size)
				throw Array::OutOfBoundsException();
			return (this->arr[i]);
		}

		int			size(void) const {return this->_size;}
		T *			getArr(void)  const {return this->arr;}

		class OutOfBoundsException : public std::exception
		{
			public:

				virtual const char* what() const throw()
				{
					return ("Index out of bounds");
				}
				virtual ~OutOfBoundsException() throw() {}
		};

	private:
		T					*arr;
		unsigned int		_size;
};

#endif
