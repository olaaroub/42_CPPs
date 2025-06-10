/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 00:42:15 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/10 18:43:31 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    std::cout << "[ Ice ] default constructor called." << std::endl;
}

Ice::Ice(const Ice &obj) : AMateria("ice")
{
    *this = obj;
    std::cout << "[ Ice ] copy constructor called." << std::endl;
}

Ice &Ice::operator=(const Ice &obj)
{
    // if(this != &obj)
    //     _type = obj._type;
    (void) obj;
    std::cout << "[ Ice ] assignment operator called." << std::endl;
    return *this;
}

Ice::~Ice()
{
    std::cout << "[ Ice ] destructor called." << std::endl;
}

AMateria *Ice::clone() const
{
    Ice *newObj = new Ice();
    return newObj;
}

void Ice::use(ICharacter &target)
{
    std::cout << "[ Ice ] \"* shoots an ice bolt at " << target.getName() << " *\"" << std::endl;
}
