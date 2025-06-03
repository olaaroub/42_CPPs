/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 01:19:58 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/03 22:28:05 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
	: ClapTrap("Default_clap_name"),
	  ScavTrap(),
	  FragTrap(),
	  _name("Default")
{
	ClapTrap::_hitPoints = 100;
	ClapTrap::_energyPoints = 50;
	ClapTrap::_attackDamage = 30;
	std::cout << "[ DiamondTrap ] Default constructor called!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
	: ClapTrap(name + "_clap_name"),
	  ScavTrap(name),
	  FragTrap(name),
	  _name(name)
{
	std::cout << "[ DiamondTrap ] Name constructor called!" << std::endl;

	ClapTrap::_hitPoints = 100;
	ClapTrap::_energyPoints = 50;
	ClapTrap::_attackDamage = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
	: ClapTrap(other),
	  ScavTrap(other),
	  FragTrap(other),
	  _name(other._name)
{
	std::cout << "[ DiamondTrap ] Copy constructor called!" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	std::cout << "[ DiamondTrap ] Copy assignment operator called!" << std::endl;
	if (this != &other)
	{
		ClapTrap::operator=(other);
		this->_name = other._name;
	}
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "[ DiamondTrap ] Destructor called!" << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "My DiamondTrap name is: " << this->_name
			  << ", and my ClapTrap name is: " << ClapTrap::_name << std::endl;
}