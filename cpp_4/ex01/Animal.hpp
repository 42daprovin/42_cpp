#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class Animal
{
	public:

		Animal(void);
		Animal(Animal const & src);
		virtual ~Animal(void);

		Animal &	operator=(Animal const & rhs);

		std::string		get_type(void) const;

		virtual void	makeSound(void) const;

	protected:

		std::string		_type;
};

class Dog : public Animal
{
	public:

		Dog(void);
		Dog(Dog const & src);
		~Dog(void);

		Dog &	operator=(Dog const & rhs);

		Brain	getbrain(void) const;
		void	setbrain(std::string str, int pos);

		void	makeSound(void) const;

	private:
		
		Brain	*_brain;

};

class Cat : public Animal
{
	public:

		Cat(void);
		Cat(Cat const & src);
		~Cat(void);

		Cat &	operator=(Cat const & rhs);

		Brain	getbrain(void) const;
		void	setbrain(std::string str, int pos);

		void	makeSound(void) const;

	private:

		Brain	*_brain;
};

#endif
