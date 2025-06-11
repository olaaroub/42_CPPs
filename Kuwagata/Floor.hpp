/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Floor.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-safi <hes-safi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 06:37:34 by hes-safi          #+#    #+#             */
/*   Updated: 2025/03/21 07:13:45 by hes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLOOR_H
# define FLOOR_H

# include "AMateria.hpp"

struct SFloor
{
	AMateria	*orb;
	SFloor		*next;
	~SFloor();
};

extern SFloor	*Floor;

void	clearFloor();
void	dropMateria(AMateria *obj);

#endif