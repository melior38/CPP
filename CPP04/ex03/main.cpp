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

#include "includes/MateriaSource.hpp"
#include "includes/Character.hpp"
#include "includes/Ice.hpp"
#include "includes/Cure.hpp"

int main()
{
	{
		IMateriaSource *src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter *me = new Character("me");

		AMateria *ice;
		AMateria *cure;
		ice = src->createMateria("ice");
		me->equip(ice);
		cure = src->createMateria("cure");
		me->equip(cure);

		ICharacter *bob = new Character("bob");

		me->use(0, *bob);
		me->use(1, *bob);
		delete ice;
		delete cure;
		delete bob;
		delete me;
		delete src;
	}
	{
		IMateriaSource *src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		src->learnMateria(new Ice());// does nothing

		AMateria* ice = src->createMateria("ice");
		AMateria* cure = src->createMateria("qnoquhqwiebqw");

		ICharacter* billybob = new Character("billybob");
		ICharacter* bouletbob= new Character("bouletbob");

		billybob->equip(ice);
		billybob->equip(cure);

		billybob->use(0, *bouletbob);
		billybob->use(1, *bouletbob);

		delete cure;
		delete ice;
		delete billybob;
		delete bouletbob;
		delete src;
	}
}