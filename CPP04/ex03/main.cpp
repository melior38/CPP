/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 16:40:33 by marvin            #+#    #+#             */
/*   Updated: 2023/12/14 16:40:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "includes/MateriaSource.hpp"
// #include "includes/Character.hpp"
// #include "includes/Ice.hpp"
// #include "includes/Cure.hpp"

// int main()
// {
// 	{
// 		IMateriaSource *src = new MateriaSource();
// 		src->learnMateria(new ice());
// 		src->learnMateria(new cure());

// 		ICharacter *me = new Character("me");

// 		AMateria *ice;
// 		AMateria *cure;
// 		ice = src->createMateria("ice");
// 		me->equip(ice);
// 		cure = src->createMateria("cure");
// 		me->equip(cure);

// 		ICharacter *bob = new Character("bob");

// 		me->use(0, *bob);
// 		me->use(1, *bob);
// 		delete ice;
// 		delete cure;
// 		delete bob;
// 		delete me;
// 		delete src;
// 	}
// 	{
// 		IMateriaSource *src = new MateriaSource();
// 		src->learnMateria(new ice());
// 		src->learnMateria(new cure());
// 		src->learnMateria(new ice());
// 		src->learnMateria(new cure());
// 		src->learnMateria(new ice());// does nothing

// 		AMateria* ice = src->createMateria("ice");
// 		AMateria* cure = src->createMateria("qnoquhqwiebqw");

// 		ICharacter* billybob = new Character("billybob");
// 		ICharacter* bouletbob= new Character("bouletbob");

// 		billybob->equip(ice);
// 		billybob->equip(cure);

// 		billybob->use(0, *bouletbob);
// 		billybob->use(1, *bouletbob);

// 		delete cure;
// 		delete ice;
// 		delete billybob;
// 		delete bouletbob;
// 		delete src;
// 	}
// }

#include "includes/MateriaSource.hpp"
#include "includes/Character.hpp"
#include "includes/Ice.hpp"
#include "includes/Cure.hpp"


int	main(int ac, char **av)
{
	(void)ac;
	(void)av;
	std::cout << "hello rgp!" << std::endl;

	{
		std::cout << "given main {" << std::endl;

		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new ice());
		src->learnMateria(new cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		delete bob;
		delete me;
		delete src;

		std::cout << "} end given main" << std::endl << std::endl;
	}

	std::cout << "my main { " << std::endl;

	AMateria *i = new ice();
	AMateria *c = new cure();

	std::cout << "i:" << i->getType() << std::endl;
	std::cout << "c:" << c->getType() << std::endl;

	AMateria *clone = i->clone();

	std::cout << "i clone:" << clone->getType() << std::endl;

	delete clone;

	clone = c->clone();

	std::cout << "c clone:" << clone->getType() << std::endl;


	ICharacter *you;
	ICharacter *it;

	you = new Character("you");
	it = new Character("it");

	you->equip(c);
	you->equip(i);
	you->equip(clone);
	you->equip(i);
	you->equip(i);

	you->use(0, *it);
	you->use(1, *it);
	you->use(2, *it);
	you->use(3, *it);
	you->use(4, *it);

	IMateriaSource *fountain = new MateriaSource();

	fountain->learnMateria(c->clone());
	fountain->learnMateria(i->clone());
	fountain->learnMateria(clone->clone());
	fountain->learnMateria(i->clone());
	fountain->learnMateria(i->clone());

	you->unequip(1);
	you->unequip(0);

	std::cout << "trying to use after unquiping " << std::endl;

	you->use(0, *it);
	you->use(1, *it);

	std::cout << "requip and use" << std::endl;

	you->equip(fountain->createMateria("ice"));

	std::cout << "useing slot 0" << std::endl;
	you->use(0, *it);
	std::cout << "useing slot 1" << std::endl;
	you->use(1, *it);
	std::cout << "useing slot 2" << std::endl;
	you->use(2, *it);

	std::cout << "requip another" << std::endl;
	you->equip(fountain->createMateria("cure"));
	std::cout << "useing slot 1" << std::endl;
	you->use(1, *it);


	delete you;

	// delete i;
	delete c;
	//delete clone;

	std::cout << "testing char duplication" << std::endl;

	Character def("def");


	AMateria *lost = fountain->createMateria("ice");

	def.equip(lost);
	def.equip(fountain->createMateria("cure"));
	def.equip(fountain->createMateria("cure"));
	def.equip(fountain->createMateria("ice"));

	def.unequip(0);
	def.use(0, *it);

	Character dup(def);

	std::cout << dup.getName() << std::endl;
	// std::cout << "testing pass" << std::endl;
	dup.use(0, *it);
	dup.use(1, *it);

	Character dup2;

	dup2 = def;

	std::cout << dup2.getName() << std::endl;
	dup2.use(0, *it);
	dup2.use(1, *it);



	delete fountain;
	delete it;

	delete lost;

	std::cout << "} end my main" << std::endl;
	return(0);
}
