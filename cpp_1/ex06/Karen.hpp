
#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>

class Karen
{
	typedef void (Karen::*complains)(void);
	complains comp[5]; 

	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	void	nothing(void);
	
	public:
		int		select(std::string level);
		void	complain(std::string level);

		Karen(void);
};

#endif
