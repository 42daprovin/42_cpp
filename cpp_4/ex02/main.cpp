#include "Animal.hpp"

int		main()
{
	/* Animal	b; */
	int		l = 20;
	Animal	*a[l];

	for(int i=0; i < l; i++)
	{
		if (i < l/2)	
			a[i] = new Dog();
		else
			a[i] = new Cat();
	}
	std::cout << std::endl;

	a[5]->makeSound();
	a[15]->makeSound();

	std::cout << std::endl;

	Dog	dog;
	Dog	dog_copy(dog);
	Cat cat;
	Cat cat_copy(cat);

	std::cout << std::endl;
	dog.setbrain("Dog thinks", 0);
	cat.setbrain("World domination plans", 0);
	std::cout << dog.getbrain().idea[0] << std::endl;
	std::cout << cat.getbrain().idea[0] << std::endl;
	std::cout << dog_copy.getbrain().idea[0] << std::endl;
	std::cout << cat_copy.getbrain().idea[0] << std::endl;
	std::cout << std::endl;

	for(int i=0; i < l; i++)
		delete a[i];
	std::cout << std::endl;

	return 0;
}
