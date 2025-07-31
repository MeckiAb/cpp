/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labderra <labderra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 10:14:41 by labderra          #+#    #+#             */
/*   Updated: 2025/07/31 15:31:57 by labderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

void aditional_tests() {
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());	
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());	//No cabe y se libera para evitar leaks
	
	ICharacter* me = new Character("Bob");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	for (int i = 0; i < 3; i++) {
		tmp = src->createMateria("cure");
		me->equip(tmp);
	}								// el último no cabe, mensaje de error

	me->unequip(3);
	for (int i = 0; i < 3; i++) {
		tmp = src->createMateria("cure");
		me->equip(tmp);
		me->unequip(3);
	}								// no hay espacio en el suelo, no desequipa
	
	ICharacter* john = new Character("john");

	me->use(0, *john);
	me->use(2, *john);

	delete john;
	delete me;
	delete src;
}

int main()
{
	Character paco;
	{
		Character manolo = paco;
	}
/* 	IMateriaSource* src = new MateriaSource();
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

	delete bob;
	delete me;
	delete src;

//	aditional_tests();
	 */
	return 0;
}