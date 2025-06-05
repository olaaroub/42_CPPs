/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 13:54:43 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/05 11:58:42 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
    std::string _type;

public:
    Animal();
    Animal(const Animal &obj);
    Animal &operator=(const Animal &obj);
    virtual ~Animal();

    const std::string getType() const;
    virtual void makeSound() const;
};

#endif