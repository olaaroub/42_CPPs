/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 21:30:35 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/11 17:09:59 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    _type = "Cat";
    std::cout << "[ Cat ] default constructor called!" << std::endl;
}

Cat::Cat(const Cat &obj) : Animal(obj)
{
    std::cout << "[ Cat ] copy constructor called!" << std::endl;
    _type = obj._type;
}

Cat &Cat::operator=(const Cat &obj)
{
    std::cout << "[ Cat ] assignment operator called!" << std::endl;
    if (this != &obj)
    {
        _type = obj._type;
    }
    return *this;
}

Cat::~Cat()
{
    std::cout << "[ Cat ] destructor called!" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Cat: Meow.. !!" << std::endl;
}