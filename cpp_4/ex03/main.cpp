#include "Materia.hpp"
#include "Character.hpp"

int		main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob); 		//use an empty materia
	me->unequip(3); 		//unequip empty
	me->equip(tmp);			//equip an equiped materia
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp); 		//inventory full
	me->unequip(3); 		//unequip
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");

	delete bob;
	delete me;
	delete src;

	return 0;
}
