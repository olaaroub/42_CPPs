/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CollectMaterias.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 20:40:17 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/11 22:09:01 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLLECTMATERIAS_HPP
#define COLLECTMATERIAS_HPP

#include "AMateria.hpp"

struct ScollectMaterias
{
    AMateria *materia;
    ScollectMaterias *next;
    ~ScollectMaterias();
};

extern ScollectMaterias *collector;

void collectMateria(AMateria *materia);
// void clearList();

#endif