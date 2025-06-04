/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 14:53:01 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/04 23:08:17 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
    Brain* _brains;

public:
    Dog();
    Dog(const Dog &obj);
    Dog &operator=(const Dog &obj);
    ~Dog();

    void makeSound() const;
};

#endif