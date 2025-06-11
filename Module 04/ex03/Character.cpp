/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 17:09:58 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/11 22:09:27 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "CollectMaterias.hpp"

Character::Character() : _name("uninitialized")
{
    for (int i = 0; i < 4; i++)
        _slot[i] = 0;
    std::cout << "[ Character ] default constructor called!" << std::endl;
}

Character::Character(std::string name) : _name(name)
{
    for (int i = 0; i < 4; i++)
        _slot[i] = 0;
    std::cout << "[ Character ] paremeterized constructor called!" << std::endl;
}

Character::Character(const Character &obj) : _name(obj._name)
{
    for (int i = 0; i < 4; i++)
    {
        if (obj._slot[i])
            _slot[i] = (obj._slot[i])->clone();
        else
            _slot[i] = 0;
    }
    std::cout << "[ Character ] copy constructor called!" << std::endl;
}

Character &Character::operator=(const Character &obj)
{
    if (this != &obj)
    {
        _name = obj._name;
        for (int i = 0; i < 4; i++)
        {
            if (_slot[i])
                delete _slot[i];
            _slot[i] = NULL;
            if (obj._slot[i])
                _slot[i] = obj._slot[i]->clone();
        }
    }
    std::cout << "[ Character ] copy assignment operatot called!" << std::endl;
    return *this;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        if (_slot[i])
            delete _slot[i];
    }
    std::cout << "[ Character ] destructor called!" << std::endl;
}
const std::string &Character::getName() const
{
    return _name;
}

void Character::equip(AMateria *materia)
{
    if (!materia)
    {
        std::cout << "Not a valid materia!" << std::endl;
        return;
    }
    for (int i = 0; i < 4; i++)
    {
        if (_slot[i] == 0)
        {
            _slot[i] = materia;
            std::cout << "Equip complete." << std::endl;
            return;
        }
    }
    std::cout << "Equip failed." << std::endl;
    collectMateria(materia);
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4 && _slot[idx])
    {
        collectMateria(_slot[idx]);
        _slot[idx] = 0;
        std::cout << "Unequip completed" << std::endl;
        return;
    }
    std::cout << "Unequip failed" << std::endl;
}

void Character::use(int idx, ICharacter &target)
{
    if ((idx >= 0 && idx < 4) && _slot[idx])
    {
        _slot[idx]->use(target);
        std::cout << "Use complete." << std::endl;
        return;
    }
    std::cout << "Use failed." << std::endl;
}

AMateria *Character::getMateria(int idx)
{
    if (idx >= 0 && idx < 4)
        return this->_slot[idx];

    return (NULL);
}
