/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 01:09:02 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/03 13:50:08 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "[ ScavTrap ] Default constructor called!" << std::endl;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "[ ScavTrap ] Name constructor called!" << std::endl;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &obj) : ClapTrap(obj)
{
    std::cout << "[ ScavTrap ] Copy constructor called!" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &obj)
{
    if (this != &obj)
    {
        ClapTrap::operator=(obj);
        std::cout << "[ ScavTrap ] Copy assignment operator called!" << std::endl;
    }
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "[ ScavTrap ] Destructor called!" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if (_hitPoints == 0)
    {
        std::cout << "ScavTrap " << _name << " is dead and cannot attack." << std::endl;
        return;
    }
    if (_energyPoints == 0)
    {
        std::cout << "ScavTrap " << _name << " has no energy points left to attack!" << std::endl;
        return;
    }

    _energyPoints--;
    std::cout << "ScavTrap " << _name << " attacks " << target
              << ", causing " << _attackDamage << " points of damage!"
              << std::endl;
}

void ScavTrap::guardGate() const
{
    if (_hitPoints <= 0)
    {
        std::cout << "ScavTrap " << _name
                  << " is dead and can't guard gates!\n";
        return;
    }
    std::cout << "ScavTrap " << _name
              << " is now in Gate Keeper mode!\n";
}