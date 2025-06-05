/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 15:22:37 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/05 11:22:30 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{

    {
        std::cout << "================ Normal Animal tests ===================" << std::endl;

        const Animal *meta = new Animal();
        const Animal *j = new Dog();
        const Animal *i = new Cat();

        std::cout << "========================================================" << std::endl;

        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;

        std::cout << "========================================================" << std::endl;

        i->makeSound();
        j->makeSound();
        meta->makeSound();

        std::cout << "========================================================" << std::endl;

        delete meta;
        delete j;
        delete i;
    }
    std::cout << std::endl;
    {
        std::cout << "=============== WrongAnimal tests=======================" << std::endl;

        const WrongAnimal *meta = new WrongAnimal();
        const WrongAnimal *i = new WrongCat();

        std::cout << "========================================================" << std::endl;

        std::cout << i->getType() << " " << std::endl;

        std::cout << "========================================================" << std::endl;

        i->makeSound();
        meta->makeSound();

        std::cout << "========================================================" << std::endl;

        delete meta;
        delete i;
    }

    return 0;
}