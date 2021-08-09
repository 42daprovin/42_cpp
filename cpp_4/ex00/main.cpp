#include "Animal.hpp"
#include "WrongAnimal.hpp"

int		main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal *c = new WrongCat();
	const WrongAnimal *meta2 = new WrongAnimal();
	std::cout << j->get_type() << " " << std::endl;
	std::cout << i->get_type() << " " << std::endl;
	std::cout << c->get_type() << " " << std::endl;
	j->makeSound();
	i->makeSound();
	meta->makeSound();
	c->makeSound();
	meta2->makeSound();
	
	delete meta;
	delete j;
	delete i;
	delete c;
	delete meta2;

	return 0;
}
