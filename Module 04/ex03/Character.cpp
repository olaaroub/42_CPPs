/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 17:09:58 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/10 00:09:55 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

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
        // if (this->_slot[i])
        // this->_slot[i] = 0;
        if (obj._slot[i])
            _slot[i] = (obj._slot[i])->clone();
    }
    std::cout << "[ Character ] copy constructor called!" << std::endl;
}

Character &Character::operator=(const Character &obj)
{
    _name = obj._name;
    for (int i = 0; i < 4; i++)
    {
        if (_slot[i])
            delete _slot[i];
        if (obj._slot[i])
            _slot[i] = (obj._slot[i])->clone();
    }
    std::cout << "[ Character ] copy assignment operatot called!" << std::endl;
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

void Character::equip(AMateria *m)
{
    if (!m)
    {
        std::cout << "Not a valid materia!" << std::endl;
        return;
    }
    for (int i = 0; i < 4; i++)
    {
        if (_slot[i] == 0)
        {
            _slot[i] = m;
            std::cout << "Equip complete." << std::endl;
            return;
        }
    }
    std::cout << "Equip failed." << std::endl;
}

void Character::use(int idx, ICharacter &target)
{
    if (_slot[idx] && (idx >= 0 && idx < 4))
    {
        _slot[idx]->use(target);
        std::cout << "Use complete." << std::endl;
        return;
    }
    std::cout << "Use incomplete." << std::endl;
}
AMateria *Character::getMateria(int idx)
{
    return _slot[idx];
}