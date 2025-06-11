/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 00:15:33 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/11 18:21:38 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    std::cout << "[ Cure ] Default constructor called!" << std::endl;
}

Cure::Cure(const Cure &obj) : AMateria("cure")
{
    std::cout << "[ Cure ] Copy constructor called!" << std::endl;
    *this = obj;
}

Cure &Cure::operator=(const Cure &obj)
{
    (void)obj;
    std::cout << "[ Cure ] Copy assignment operator called!" << std::endl;
    return *this;
}

Cure::~Cure()
{
    std::cout << "[ Cure ] destructor called" << std::endl;
}

AMateria *Cure::clone() const
{
    Cure *newObj = new Cure();
    return (newObj);
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}