#ifndef VALUE_HPP
# define VALUE_HPP

# include <iostream>

class Value
{
	public:

		Value(void);
		Value(std::string value);
		Value(Value const & src);
		~Value(void);

		Value	& operator=(Value const & rhs);

		std::string		getvalue(void) const;

		void	display(void);

	private:

		std::string		_value;
		void			fromChar(char c) const;
		void			fromInt(int	i) const;
		void			fromFloat(float f) const;
		void			fromDouble(double d) const;
	
};

#endif
