/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-safi <hes-safi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 01:00:35 by hes-safi          #+#    #+#             */
/*   Updated: 2025/03/21 20:13:09 by hes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{std::cout << "Cure Constructed" << std::endl;}

Cure::Cure(const Cure &obj) : AMateria(obj)
{*this = obj; std::cout << "Cure Copy Constructed" << std::endl;}

Cure::~Cure()
{std::cout << "Cure Destructed" << std::endl;}

Cure	&Cure::operator=(const Cure &obj)
{
	(void)obj;
	// std::cout << "Cure Assignment Operator Called" << std::endl;
	return (*this);
}

AMateria	*Cure::clone(void) const
{std::cout << "Creating 'Cure' Clone..." << std::endl; return (new Cure(*this));}

void	Cure::use(ICharacter &target)
{std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;}
