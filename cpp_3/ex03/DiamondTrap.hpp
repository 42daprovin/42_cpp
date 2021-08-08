#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "ClapTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
	public:

		DiamondTrap(void);
		DiamondTrap(std::string const name);
		DiamondTrap(DiamondTrap const & src);
		~DiamondTrap(void);

		std::string		getname(void) const;

		DiamondTrap &	operator=(DiamondTrap const & rhs);

		void	attack(std::string const & target);
		void	whoAmI(void);

	private:

		std::string		_name;
};

#endif
