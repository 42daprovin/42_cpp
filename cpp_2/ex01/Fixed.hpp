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
