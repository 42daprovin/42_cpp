
#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>

class Karen
{
	typedef void (Karen::*complains)(void);
	complains comp[4]; 

	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	int		select(std::string level);
	
	public:
		void	complain(std::string level);

		Karen(void);
};

#endif
