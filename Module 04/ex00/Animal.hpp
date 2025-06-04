/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 13:54:43 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/04 23:53:45 by olaaroub         ###   ########.fr       */
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
    ~Animal();

    std::string getType() const;
    virtual void makeSound() const;
};

#endif