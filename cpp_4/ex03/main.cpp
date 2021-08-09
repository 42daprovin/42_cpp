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
	me->use(2, *bob); //use an empty materia
	me->unequip(3); //unequip empty
	me->equip(tmp);
	me->equip(tmp);
	me->equip(tmp); //equip more than possible
	me->unequip(2); //unequip 2 (unequip causes leaks)
	*bob = *me;
	me->use(3, *bob);
	delete bob;
	delete me;
	delete src;

	return 0;
}
