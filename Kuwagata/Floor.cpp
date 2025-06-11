/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Floor.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-safi <hes-safi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 06:37:19 by hes-safi          #+#    #+#             */
/*   Updated: 2025/03/21 07:14:32 by hes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Floor.hpp"

SFloor::~SFloor()
{clearFloor();}

void	dropMateria(AMateria *obj)
{
	SFloor	*NewOrb = new SFloor();
	NewOrb->orb = obj;
	NewOrb->next = Floor;
	Floor = NewOrb;
}

void	clearFloor()
{
	while (Floor)
	{
		SFloor	*tmp = Floor;
		Floor = Floor->next;
		delete tmp->orb;
		delete tmp;
	}
}
