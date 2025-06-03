/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 20:09:17 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/03 02:20:36 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "[ FragTrap ] Default constructor called!" << std::endl;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "[ FragTrap ] Name constructor called!" << std::endl;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &obj) : ClapTrap(obj)
{
    std::cout << "[ FragTrap ] Copy constructor called!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &obj)
{
    if (this != &obj)
    {
        _name = obj._name;
        _hitPoints = obj._hitPoints;
        _energyPoints = obj._energyPoints;
        _attackDamage = obj._attackDamage;
        std::cout << "[ FragTrap ] Copy assignment operator called!" << std::endl;
    }
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "[ FragTrap ] Destructor called!" << std::endl;
}

void FragTrap::attack(const std::string &target)
{
    if (_hitPoints == 0)
    {
        std::cout << "FragTrap " << _name << " is dead and cannot attack." << std::endl;
        return;
    }
    if (_energyPoints == 0)
    {
        std::cout << "FragTrap " << _name << " has no energy points left to attack!" << std::endl;
        return;
    }

    _energyPoints--;
    std::cout << "FragTrap " << _name << " attacks " << target
              << ", causing " << _attackDamage << " points of damage!"
              << std::endl;
}

void FragTrap::highFivesGuys() const
{
    if (_hitPoints <= 0)
    {
        std::cout << "FragTrap " << _name
                  << " is dead and can't request high fives!\n";
        return;
    }
    std::cout << "FragTrap " << _name
              << " requests a positive high five!\n";
}