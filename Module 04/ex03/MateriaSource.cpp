/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 18:16:58 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/10 20:12:55 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        _materia[i] = 0;

    std::cout << "[ MateriaSource ] default constructor called!" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &obj)
{
    for (int i = 0; i < 4; i++)
    {
        if (obj._materia[i])
            _materia[i] = obj._materia[i]->clone();
        else
            _materia[i] = 0;
    }
    std::cout << "[ MateriaSource ] copy constructor called!" << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &obj)
{
    std::cout << "[ MateriaSource ] assignment operator called!" << std::endl;
    if (this != &obj)
    {
        for (int i = 0; i < 4; i++)
            if (this->_materia[i])
                delete this->_materia[i];

        for (int i = 0; i < 4; i++)
        {
            if (obj._materia[i])
                this->_materia[i] = obj._materia[i]->clone();
            else
                this->_materia[i] = 0;
        }
    }
    return *this;
}
MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        if (_materia[i])
            delete _materia[i];
    std::cout << "[ MateriaSource ] destructor called!" << std::endl;
}

void MateriaSource::learnMateria(AMateria *materia)
{
    for (int i = 0; i < 4; i++)
    {
        if (!_materia[i])
        {
            _materia[i] = materia;
            return;
        }
    }
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
    for (int i = 0; i < 4; i++)
        if (_materia[i] && _materia[i]->getType() == type)
            return (_materia[i]->clone());
    return NULL;
}