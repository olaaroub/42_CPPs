/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-safi <hes-safi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 21:21:00 by hes-safi          #+#    #+#             */
/*   Updated: 2025/03/21 05:54:17 by hes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : init(false)
{initSlots(); std::cout << "Materia Source Created" << std::endl;}

MateriaSource::MateriaSource(const MateriaSource &obj) : init(false)
{*this = obj; std::cout << "Materia Source Created" << std::endl;}

MateriaSource::~MateriaSource()
{clearSlots(); std::cout << "Materia Source Destroyed" << std::endl;}

MateriaSource	&MateriaSource::operator=(const MateriaSource &obj)
{
	std::cout << "Cloning Materia Source..." << std::endl;
	if (this != &obj)
	{
		if (!init)
			initSlots();
		else
			clearSlots();
		for (int i = 0; i < 4; i++)
		{
			if (obj.slots[i])
				slots[i] = obj.slots[i]->clone();
		}
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *m)
{
	if (!m)
	{
		std::cout << "Cannot Learn: Invalid Materia!" << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (slots[i] == m)
		{
			std::cout << "Cannot Learn: Materia Already Learned!" << std::endl;
			return ;
		}
	}
	for (int i = 0; i < 4; i++)
	{
		if (!slots[i])
		{
			slots[i] = m->clone();
			std::cout << "Materia '" << slots[i]->getType() << "' Learned: Slot " << i << std::endl;
			delete (m);
			return ;
		}
	}
	std::cout << "Could not Learn Materia '" << m->getType() << "': Slots are Full!" << std::endl;
	delete (m);
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (slots[i] && slots[i]->getType() == type)
		{
			std::cout << "Dispensing Materia '" << slots[i]->getType() << "'..." << std::endl;
			return (slots[i]->clone());
		}
	}
	std::cout << "Materia of type '" << type << "' Not yet Learned!" << std::endl;
	return (NULL);
}

void	MateriaSource::initSlots()
{slots[0] = NULL; slots[1] = NULL; slots[2] = NULL; slots[3] = NULL; init = true;}

void	MateriaSource::clearSlots()
{
	for (int i = 0; i < 4; i++)
	{
		if (slots[i])
			delete slots[i];
		slots[i] = NULL;
	}
}
