/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 13:59:45 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/04 22:16:57 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "[ Animal ] default constructor called!" << std::endl;
}

Animal::Animal(const Animal &obj)
{

    _type = obj._type;
    std::cout << "[ Animal ] copy constructor called!" << std::endl;
}

Animal &Animal::operator=(const Animal &obj)
{
    std::cout << "[ Animal ] assignment operator called!" << std::endl;
    if (this != &obj)
    {
        _type = obj._type;
    }
    return *this;
}

Animal::~Animal()
{
    std::cout << "[ Animal ] destructor called!" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "Animal makeSound() !" << std::endl;
}

std::string Animal::getType() const
{
    return _type;
}