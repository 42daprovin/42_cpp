#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	public:
		
		ClapTrap(void);
		ClapTrap(std::string const name);
		ClapTrap(ClapTrap const & src);
		~ClapTrap(void);

		ClapTrap &	operator=(ClapTrap const & src);

		void	attack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int);

		std::string	getname() const;
		unsigned int			gethitpoints() const;
		unsigned int			getenergy() const;
		unsigned int			getattack() const;

	private:

		std::string					_name;
		unsigned int				_hitpoints;
		unsigned int				_energy_points;
		unsigned int				_attack_damage;
};

#endif
