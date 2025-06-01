/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 22:07:02 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/01 20:30:13 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ClapTrap.hpp"

// ClapTrap::ClapTrap()
// {
//     std::cout << "Default constructor called" << std::endl;
// }

// ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10),
//                                        _attackDamage(0)
// {
//     std::cout << "Parametrized constructor called" << std::endl;
// }

// ClapTrap::ClapTrap(ClapTrap &obj) : _name(obj._name), _hitPoints(obj._hitPoints), _energyPoints(obj._energyPoints),
//                                     _attackDamage(obj._attackDamage)
// {
//     std::cout << "Copy constructor called" << std::endl;
// }

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "Name constructor called!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
    : _name(obj._name),
      _hitPoints(obj._hitPoints),
      _energyPoints(obj._energyPoints),
      _attackDamage(obj._attackDamage)
{
    std::cout << "Copy constructor called!" << std::endl;
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
    std::cout << "Copy assignment operator called!" << std::endl;
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called!" << std::endl;
}

void ClapTrap::attack(const std::string &target)
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
        std::cout << "ClapTrap " << _name << " is already dead." << std::endl;
        return;
    }

    if (amount >= _hitPoints)
    {
        _hitPoints = 0;
        std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!"
                  << std::endl;
        std::cout << "ClapTrap " << _name << " died!" << std::endl;
    }
    else
    {
        _hitPoints -= amount;
        std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!"
                  << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_hitPoints == 0)
    {
        std::cout << "ClapTrap " << _name << " is dead and cannot repair itself." << std::endl;
        return;
    }
    if (_energyPoints == 0)
    {
        std::cout << "ClapTrap " << _name << " has no energy points left to repair itself!" << std::endl;
        return;
    }

    _energyPoints--;
    _hitPoints += amount;
    std::cout << "ClapTrap " << _name << " repairs itself with " << amount
              << " hit points!" << std::endl;
}


void ClapTrap::displayStatus() const {
    std::cout << "Status of " << _name << ":" << std::endl;
    std::cout << "  Hit Points: " << _hitPoints << std::endl;
    std::cout << "  Energy Points: " << _energyPoints << std::endl;
}
