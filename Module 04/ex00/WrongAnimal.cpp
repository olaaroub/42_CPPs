/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 21:38:02 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/11 17:10:53 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "[ WrongAnimal ] default constructor!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
    _type = obj._type;
    std::cout << "[ Wrong Animal ] copy constructor called!" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj)
{
    std::cout << "[ WrongAnimal ] copy assignment operator called!" << std::endl;
    if (this != &obj)
    {
        _type = obj._type;
    }
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "[ WrongAnimal ] destructor called!" << std::endl;
}

const std::string WrongAnimal::getType() const
{
    return _type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "[ WrongAnimal ] makeSound() called!" << std::endl;
}