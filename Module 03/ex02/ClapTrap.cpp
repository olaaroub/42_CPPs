/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 01:00:06 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/03 22:11:23 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "[ ClapTrap ] Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "[ ClapTrap ] Name constructor called!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
    : _name(obj._name),
      _hitPoints(obj._hitPoints),
      _energyPoints(obj._energyPoints),
      _attackDamage(obj._attackDamage)
{
    std::cout << "[ ClapTrap ] Copy constructor called!" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &obj)
{
    if (this != &obj)
    {
        _name = obj._name;
        _hitPoints = obj._hitPoints;
        _energyPoints = obj._energyPoints;
        _attackDamage = obj._attackDamage;
    }
    std::cout << "[ ClapTrap ] Copy assignment operator called!" << std::endl;
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "[ ClapTrap ] Destructor called!" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (_hitPoints == 0)
    {
        std::cout << "ClapTrap " << _name << " is dead and cannot attack." << std::endl;
        return;
    }
    if (_energyPoints == 0)
    {
        std::cout << "ClapTrap " << _name << " has no energy points left to attack!" << std::endl;
        return;
    }

    _energyPoints--;
    std::cout << "ClapTrap " << _name << " attacks " << target
              << ", causing " << _attackDamage << " points of damage!"
              << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints == 0)
    {
        std::cout << "[ " << _name << " ]: is already dead." << std::endl;
        return;
    }

    if (amount >= _hitPoints)
    {
        _hitPoints = 0;
        std::cout << "[ " << _name << " ]: takes " << amount << " points of damage!"
                  << std::endl;
        std::cout << "[ " << _name << " ]: died!" << std::endl;
    }
    else
    {
        _hitPoints -= amount;
        std::cout << "[ " << _name << " ]: takes " << amount << " points of damage!"
                  << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_hitPoints == 0)
    {
        std::cout << "[ " << _name << " ]: is dead and cannot repair itself." << std::endl;
        return;
    }
    if (_energyPoints == 0)
    {
        std::cout << "[ " << _name << " ]: has no energy points left to repair itself!" << std::endl;
        return;
    }

    _energyPoints--;
    _hitPoints += amount;
    std::cout << "[ " << _name << " ]: repairs itself with " << amount
              << " hit points!" << std::endl;
}

void ClapTrap::displayStatus() const {
    std::cout << "==> Status of [ " << _name << " ]:" << std::endl;
    std::cout << "    Hit Points: " << _hitPoints << std::endl;
    std::cout << "    Energy Points: " << _energyPoints << std::endl;
}
