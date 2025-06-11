/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-safi <hes-safi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 01:00:39 by hes-safi          #+#    #+#             */
/*   Updated: 2025/03/21 20:13:01 by hes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{std::cout << "Ice Constructed" << std::endl;}

Ice::Ice(const Ice &obj) : AMateria(obj)
{*this = obj; std::cout << "Ice Copy Constructed" << std::endl;}

Ice::~Ice()
{std::cout << "Ice Destructed" << std::endl;}

Ice	&Ice::operator=(const Ice &obj)
{
	(void)obj;
	// std::cout << "Ice Assignment Operator Called" << std::endl;
	return (*this);
}

AMateria	*Ice::clone(void) const
{std::cout << "Creating 'Ice' Clone..." << std::endl; return (new Ice(*this));}

void	Ice::use(ICharacter &target)
{std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;}
