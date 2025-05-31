/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 22:07:02 by olaaroub          #+#    #+#             */
/*   Updated: 2025/05/31 22:50:56 by olaaroub         ###   ########.fr       */
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

// Fixed implementations
ClapTrap::ClapTrap(const ClapTrap &obj)
    : _name(obj._name),
      _hitPoints(obj._hitPoints),
      _energyPoints(obj._energyPoints),
      _attackDamage(obj._attackDamage)
{
    std::cout << "Copy constructor called for " << _name << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &obj) {
    if (this != &obj) {
        _name = obj._name;
        _hitPoints = obj._hitPoints;
        _energyPoints = obj._energyPoints;
        _attackDamage = obj._attackDamage;
    }
    std::cout << "Assignment operator called for " << _name << std::endl;
    return *this;
}

// Other member implementations...
ClapTrap::ClapTrap() : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "Name constructor called for " << _name << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "Destructor called for " << _name << std::endl;
}

// ... (implement other methods like attack, takeDamage, etc.) ...