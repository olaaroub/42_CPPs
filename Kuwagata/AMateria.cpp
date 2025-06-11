/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-safi <hes-safi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 23:44:08 by hes-safi          #+#    #+#             */
/*   Updated: 2025/03/21 20:11:48 by hes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : type("N/A")
{
	// std::cout << "AMateria Base Constructed" << std::endl;
}

AMateria::AMateria(const AMateria &obj)
{
	*this = obj;
	// std::cout << "AMateria Copy Constructed" << std::endl;
}

AMateria::AMateria(const std::string &type) : type(type)
{
	// std::cout << "AMateria " << this->type <<" Constructed" << std::endl;
}

AMateria::~AMateria()
{
	// std::cout << "AMateria Base Destructed" << std::endl;
}

AMateria	&AMateria::operator=(const AMateria &obj)
{
	// std::cout << "AMateria Copy assignment operator called" <<  std::endl;
	if (this == &obj)
		return (*this);
	type = obj.type;
	return (*this);
}

void	AMateria::use(ICharacter &target)
{(void)target; std::cout << "Cannot Use Materia!" << std::endl;}

std::string const	&AMateria::getType() const
{return (type);}
