#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	public:

		Fixed(void);
		Fixed(Fixed const & f);
		~Fixed(void);

		Fixed	& operator=(Fixed const & f);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private:

		int		_fixed_value;
		static const int	_fract_bits = 8;
};

#endif
