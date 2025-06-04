/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 15:22:37 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/04 23:49:04 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal* i = new Cat();
    i->makeSound();
    Cat messi;
    Cat pro(messi);
    Cat ronaldo;
    ronaldo = messi;
    delete i;
    return 0;
}
