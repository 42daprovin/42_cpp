#ifndef VALUE_HPP
# define VALUE_HPP

class Value
{
	public:

		Value(void);
		Value(std::string value);
		Value(Value const & src);
		~Value(void);

		Value	& operator=(Value const & rhs);

		void	display(void) const;

	private:

		std::string		_value;
		void			fromChar(char c) const;
		void			fromInt(int	i) const;
		void			fromFloat(float f) const;
		void			fromDouble(double d) const;
	
};

#endif
