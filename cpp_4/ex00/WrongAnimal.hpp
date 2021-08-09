#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	public:

		WrongAnimal(void);
		WrongAnimal(WrongAnimal const & src);
		virtual	~WrongAnimal(void);

		WrongAnimal &	operator=(WrongAnimal const & rhs);

		std::string		get_type(void) const;

		void	makeSound(void) const;

	protected:

		std::string		_type;
};

class WrongCat : public WrongAnimal
{
	public:

		WrongCat(void);
		WrongCat(WrongCat const & src);
		~WrongCat(void);

		WrongCat &	operator=(WrongCat const & rhs);

		void	makeSound(void) const;
};


#endif
