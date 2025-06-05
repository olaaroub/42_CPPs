/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 14:57:31 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/05 12:11:31 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : _brains(new Brain("hot dog"))
{
    _type = "Dog";
    std::cout << "[ Dog ] default constructor called!" << std::endl;
}

Dog::Dog(const Dog &obj) : Animal(obj), _brains(new Brain("hot dog"))
{
    std::cout << "[ Dog ] copy constructor called!" << std::endl;
    *this = obj;
}

Dog &Dog::operator=(const Dog &obj)
{
    std::cout << "[ Dog ] assignment operator called!" << std::endl;
    if (this != &obj)
        *_brains = *(obj._brains);
    return *this;
}

const std::string Dog::getIdeas(unsigned int index) const
{
    return _brains->getIdea(index);
}

Dog::~Dog()
{
    delete _brains;
    std::cout << "[ Dog ] destructor called!" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Cat's Sounds" << std::endl;
}