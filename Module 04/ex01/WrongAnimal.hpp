/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 21:34:37 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/04 22:18:42 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
protected:
    std::string _type;

public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal &obj);
    WrongAnimal &operator=(const WrongAnimal &obj);
    ~WrongAnimal();

    std::string getType() const;
    void makeSound() const;
};

#endif