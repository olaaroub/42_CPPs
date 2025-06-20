/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 18:33:49 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/14 18:38:34 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
// #include "CollectMaterias.hpp"
int main()
{
    IMateriaSource *src = new MateriaSource();

    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    MateriaSource s1;
    MateriaSource s2 = s1; // test deep copy

    ICharacter *me = new Character("me");

    AMateria *tmp;

    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    ICharacter *bob = new Character("bob");

    me->use(0, *bob);
    me->use(1, *bob);

    bob->use(0, *me); // invalid use (empty)

    me->unequip(0);
    me->unequip(1); // should not leak

    delete bob;
    delete me;
    delete src;
    // delete collector;

    return (0);
}
