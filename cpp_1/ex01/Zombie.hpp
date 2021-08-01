
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	public:
			
		void	announce(void) const;
		void	setname(std::string name);

		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);

	private:
		
		std::string	_name;
};

#endif
