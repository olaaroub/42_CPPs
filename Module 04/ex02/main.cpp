/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 15:22:37 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/11 18:20:03 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    // Animal *objects[8];
    // for (int i = 0; i < 8; i++)
    // {
    //     if (i < 4)
    //         objects[i] = new Dog();
    //     else
    //         objects[i] = new Cat();
    // }

    std::cout << "========================================================" << std::endl;

    // const Animal *meta = new Animal;
    const Animal *j = new Dog();
    const Animal *i = new Cat();

    std::cout << "========================================================" << std::endl;

    Cat *cat1 = new Cat();

    std::cout << "========================================================" << std::endl;

    Cat cat2(*cat1);

    std::cout << "========================================================" << std::endl;

    delete cat1;

    std::cout << "========================================================" << std::endl;

    Dog dog;

    std::cout << "========================================================" << std::endl;

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    std::cout << "========================================================" << std::endl;

    i->makeSound();
    j->makeSound();
    // meta->makeSound();

    std::cout << "========================================================" << std::endl;

    std::cout << cat2.getType() << " 69th idea is : " << cat2.getIdeas(69) << std::endl;
    std::cout << dog.getType() << " 69th idea is : " << dog.getIdeas(69) << std::endl;

    std::cout << "========================================================" << std::endl;

    // delete meta;
    delete j;
    delete i;

    std::cout << "========================================================" << std::endl;

    // for(int i = 0; i < 8; i++)
    //     objects[i]->makeSound();

    // std::cout << "========================================================" << std::endl;

    // for(int i = 0; i < 8; i++)
    //     delete objects[i];

    return 0;
}