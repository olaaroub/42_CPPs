/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 21:56:43 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/04 22:16:54 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    _type = "WrongCat";
    std::cout << "[ WrongCat ] constructor called!" << std::endl;
}

WrongCat::WrongCat(const WrongCat &obj)
{
    _type = obj._type;
    std::cout << "[ WrongCat ] copy constructor called!" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &obj)
{
    std::cout << "[ WrongCat ] copy assignment operator called!" << std::endl;
    if (this != &obj)
    {
        _type = obj._type;
    }
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "[ WrongCat ] destructor called!" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat: meowww..!" << std::endl;
}