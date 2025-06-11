/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CollectMaterias.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 20:44:12 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/11 22:09:04 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CollectMaterias.hpp"

ScollectMaterias destructorCalled;
ScollectMaterias *collector = NULL;

// void clearList()
// {
//     while (collector)
//     {
//         ScollectMaterias *tmp = collector;
//         collector = collector->next;
//         delete tmp->materia;
//         delete tmp;
//     }
// }

void collectMateria(AMateria *materia)
{
    if (!materia)
        return;

    ScollectMaterias *newMateria = new ScollectMaterias();
    newMateria->materia = materia;
    newMateria->next = collector;
    collector = newMateria;
    std::cout << "collected materia: " << materia->getType() << std::endl;
}

ScollectMaterias::~ScollectMaterias()
{
    while (collector)
    {
        ScollectMaterias *tmp = collector;
        collector = collector->next;
        delete tmp->materia;
        delete tmp;
    }
}