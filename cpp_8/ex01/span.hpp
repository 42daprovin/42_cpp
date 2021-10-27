#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>

class Span
{
	public:
		Span(void);
		Span(int const n);
		~Span(void);


	private:
		std::vector<int>		v;
};

#endif
