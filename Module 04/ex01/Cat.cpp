/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 21:30:35 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/11 17:37:49 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : _brains(new Brain("Cat's ideas"))
{
    _type = "Cat";
    std::cout << "[ Cat ] default constructor called!" << std::endl;
}

Cat::Cat(const Cat &obj) : Animal(obj), _brains(new Brain("Cat's ideas"))
{
    std::cout << "[ Cat ] copy constructor called!" << std::endl;
    *this = obj;
}

Cat &Cat::operator=(const Cat &obj)
{
    std::cout << "[ Cat ] assignment operator called!" << std::endl;
    if (this != &obj)
        *_brains = *(obj._brains);
    return *this;
}

const std::string Cat::getIdeas(unsigned int index) const
{
    return _brains->getIdea(index);
}

Cat::~Cat()
{
    delete _brains;
    std::cout << "[ Cat ] destructor called!" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Cat: Meow.. !!" << std::endl;
}