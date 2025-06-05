/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 21:29:42 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/05 12:07:16 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
    Brain *_brains;

public:
    Cat();
    Cat(const Cat &obj);
    Cat &operator=(const Cat &obj);
    ~Cat();

    void makeSound() const;
    const std::string getIdeas(unsigned int index) const;
};

#endif