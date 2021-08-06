#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	public:

		Fixed(void);
		Fixed(const int n);
		Fixed(const float f);
		Fixed(Fixed const & f);
		~Fixed(void);

		Fixed	& operator=(Fixed const & f);
		bool	operator<(Fixed const & f);
		bool	operator>(Fixed const & f);
		bool	operator>=(Fixed const & f);
		bool	operator<=(Fixed const & f);
		bool	operator==(Fixed const & f);
		bool	operator!=(Fixed const & f);
		Fixed	operator+(Fixed const & f);
		Fixed	operator-(Fixed const & f);
		Fixed	operator*(Fixed const & f);
		Fixed	operator/(Fixed const & f);
		Fixed 	& operator++();
		Fixed	operator++(int);
		Fixed 	& operator--();
		Fixed	operator--(int);

		static Fixed	& max(Fixed & a ,Fixed & b);
		static const Fixed	& max(Fixed const & a, Fixed const & b);
		static Fixed	& min(Fixed & a ,Fixed & b);
		static const Fixed	& min(Fixed const & a, Fixed const & bb);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

	private:

		int		_fixed_value;
		static const int	_fract_bits = 8;
};

std::ostream	& operator<<(std::ostream & os, const Fixed & f);

#endif
