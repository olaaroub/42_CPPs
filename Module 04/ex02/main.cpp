/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 15:22:37 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/05 12:16:00 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    std::cout << "========================================================" << std::endl;

    // const Animal *meta = new Animal;
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    Cat cat;

    std::cout << "========================================================" << std::endl;

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    std::cout << "========================================================" << std::endl;

    i->makeSound();
    j->makeSound();
    // meta->makeSound();

    std::cout << "========================================================" << std::endl;

    std::cout << cat.getType() << " 69th idea is : " << cat.getIdeas(69) << std::endl;

    std::cout << "========================================================" << std::endl;

    // delete meta;
    delete j;
    delete i;

    return 0;
}
