/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 18:33:49 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/10 20:51:51 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();

    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    // MateriaSource s1;
    // MateriaSource s2 = s1; // test deep copy

    ICharacter* me = new Character("me");
	// Character* me = new Character("me"); // test on floor materias

    AMateria* tmp;

    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    ICharacter* bob = new Character("bob");

    me->use(0, *bob);
    me->use(1, *bob);

    // AMateria* onFloor = me->getMateria(0);
    // me->unequip(0);
    // delete onFloor; 

    delete bob;
    delete me;
    delete src;

	// std::cout << "----------MY TESTS----------" << std::endl;

	// AMateria *oAMateria;
	// AMateria *oAMateriaAdderss;
	// IMateriaSource* src = new MateriaSource();

    // src->learnMateria(new Ice());
    // src->learnMateria(new Cure());

	// Character *test = new Character("Test");

	// oAMateria = src->createMateria("cure");

	// Character *cpTest = new Character(*test);

	// oAMateriaAdderss = cpTest->getMateria(1);
	// cpTest->equip(oAMateria);
	// cpTest->unequip(1);

    // ICharacter* bob = new Character("bob");

	// cpTest->use(0, *bob);

	// delete oAMateria;
	// delete oAMateriaAdderss;
	// delete src;
	// delete test;
	// delete bob;

	return (0);
}

