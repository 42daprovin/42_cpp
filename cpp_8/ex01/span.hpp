#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class Span
{
	public:
		Span(void);
		Span(unsigned int const n);
		~Span(void);

		void	addNumber(int const n);
		void	addRandomRange(unsigned int const range);
		void	addNumberRange(int const n, unsigned int const range);

		class NotSpaceException : public std::exception
		{
			public:

				virtual const char* what() const throw()
				{
					return ("Not enough space!");
				}
				virtual ~NotSpaceException() throw()
				{}
		};

		class NotEnoughNumbersException : public std::exception
		{
			public:
				
				virtual const char* what() const throw()	
				{
					return ("Not enough numbers stored!");
				}
				virtual ~NotEnoughNumbersException() throw()
				{}
		};

		unsigned int	shortestSpan(void);
		unsigned int	longestSpan(void) const;

		void			display(void) const;

	private:
		std::vector<int>		v;
		unsigned int			_maxSize;
};

#endif
