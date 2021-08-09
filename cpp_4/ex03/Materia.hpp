#ifndef MATERIA_HPP
# define MATERIA_HPP

# include <iostream>

class ICharacter;

class AMateria
{
	protected:

		std::string		type;

	public:

		AMateria();
		AMateria(std::string const & type);
		AMateria(AMateria const & src);
		virtual ~AMateria();

		std::string const & getType() const;

		AMateria &	operator=(AMateria const & rhs);

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter & target);
};

class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};

class Ice : public AMateria
{
	public:

		Ice(void);
		Ice(Ice const & src);
		~Ice(void);

		Ice &	operator=(Ice const & rhs);	

		AMateria	*clone(void) const;
};

class Cure : public AMateria
{
	public:

		Cure(void);
		Cure(Cure const & src);
		~Cure(void);

		Cure &	operator=(Cure const & rhs);	

		AMateria	*clone(void) const;
};

class MateriaSource : public IMateriaSource
{
	public:

		MateriaSource(void);
		MateriaSource(MateriaSource const & src);
		~MateriaSource(void);

		MateriaSource &	operator=(MateriaSource const & rhs);

		AMateria *	getKnown(int i) const;

		void	learnMateria(AMateria *);
		AMateria *	createMateria(std::string const & type);

	private:	
		
		AMateria	*known[4];
};

# include "Character.hpp"

#endif
