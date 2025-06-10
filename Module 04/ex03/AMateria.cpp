/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 23:51:49 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/10 21:30:34 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("uninitialized")
{
    std::cout << "[ AMateria ] Default constructor called!" << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
    std::cout << "[ AMateria ] parameterized constructor called!" << std::endl;
}

AMateria::AMateria(const AMateria &obj) : _type(obj._type)
{
    std::cout << "[ AMateria ] copy constructor called!" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &obj)
{
    std::cout << "[ AMateria ] assignment operator called!" << std::endl;

    if (this != &obj)
    {
        _type = obj._type;
    }
    return *this;
}

AMateria::~AMateria()
{
    std::cout << "[ AMateria ] destructor called!" << std::endl;
}

void AMateria::use(ICharacter &target)
{
    std::cout << "[ " << target.getName() << " ] : use AMateria : [ " << this->_type << " ]" << std::endl;
}

std::string const &AMateria::getType() const
{
    return _type;
}
