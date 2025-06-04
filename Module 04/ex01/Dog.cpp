/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 14:57:31 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/04 23:09:05 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): _brains(new Brain())
{
    _type = "Dog";
    std::cout << "[ Dog ] default constructor called!" << std::endl;
}

Dog::Dog(const Dog &obj) : Animal(obj)
{
    std::cout << "[ Dog ] copy constructor called!" << std::endl;
    _type = obj._type;
}

Dog &Dog::operator=(const Dog &obj)
{
    std::cout << "[ Dog ] assignment operator called!" << std::endl;
    if (this != &obj)
    {
        _type = obj._type;
    }
    return *this;
}

Dog::~Dog()
{
    std::cout << "[ Dog ] destructor called!" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "real madrid fans are barking!!" << std::endl;
}