/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 18:12:11 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/10 18:16:29 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
private:
    AMateria *_materia[4];

public:
    MateriaSource();
    MateriaSource(const MateriaSource &obj);
    MateriaSource &operator=(const MateriaSource &obj);
    ~MateriaSource();

    void learnMateria(AMateria *);
    AMateria *createMateria(const std::string &type);
};

#endif