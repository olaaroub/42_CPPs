/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 20:59:30 by hes-safi          #+#    #+#             */
/*   Updated: 2025/06/11 20:33:34 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

SFloor	init;
SFloor	*Floor = NULL;

Character::Character() : init(false), name("Cloud")
{initBelt(); std::cout << name << " Joined the Party" << std::endl;}

Character::Character(const std::string name) : init(false), name(name)
{initBelt(); std::cout << name << " Joined the Party" << std::endl;}

Character::Character(const Character &obj) : init(false)
{*this = obj; std::cout << name << " Cloned" << std::endl;}

Character::~Character()
{clearBelt(); std::cout << name << " Left the Party" << std::endl;}

Character	&Character::operator=(const Character &obj)
{
	std::cout << "Cloning " << obj.name << "..." << std::endl;
	if (this != &obj)
	{
		if (!init)
			initBelt();
		else
			clearBelt();
		for (int i = 0; i < 4; i++)
		{
			if (obj.belt[i])
				belt[i] = obj.belt[i]->clone();
		}
		name = obj.getName();
	}
	return (*this);
}

std::string const	&Character::getName() const
{return (name);}

void	Character::initBelt()
{belt[0] = NULL; belt[1] = NULL; belt[2] = NULL; belt[3] = NULL; init = true;}

void	Character::clearBelt()
{
	for (int i = 0; i < 4; i++)
	{
		if (belt[i])
			delete belt[i];
		belt[i] = NULL;
	}
}

void	Character::equip(AMateria* m)
{
	if (!m)
	{
		std::cout << "Cannot Equip: Invalid Materia!" << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (belt[i] == m)
		{
			std::cout << "Cannot Equip: Materia Already Equipped!" << std::endl;
			return ;
		}
	}
	for (int i = 0; i < 4; i++)
	{
		if (!belt[i])
		{
			belt[i] = m;
			std::cout << "Materia '" << belt[i]->getType() << "' Equipped: Slot " << i << std::endl;
			return ;
		}
	}
	std::cout << "Could not Equip Materia '" << m->getType() << "': Belt is Full!" << std::endl;
	dropMateria(m);
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		std::cout << "Invalid Belt Slot!" << std::endl;
	else if (!belt[idx])
		std::cout << "Belt Slot " << idx << " is Already Empty!" << std::endl;
	else
	{
		dropMateria(belt[idx]);
		std::cout << "Materia '" << belt[idx]->getType() << "' Unequipped from Slot " << idx << std::endl;
		belt[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
		std::cout << "Invalid Belt Slot!" << std::endl;
	else if (!belt[idx])
		std::cout << "Belt Slot " << idx << " is Empty!" << std::endl;
	else
		belt[idx]->use(target);
}
