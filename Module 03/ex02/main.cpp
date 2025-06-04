/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 01:19:43 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/04 12:05:14 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

int main() {

    FragTrap frag1;
    FragTrap frag2("Frag2");

    std::cout  << "========================================="  << std::endl;

    frag2.attack("Target 1");

    std::cout  << "========================================="  << std::endl;

    frag2.takeDamage(50);
    frag2.takeDamage(30);
    
    std::cout  << "========================================="  << std::endl;

    frag2.beRepaired(10);

    frag2.displayStatus();

    std::cout  << "========================================="  << std::endl;

    for (int i = 0; i < 10; i++) {
        frag2.attack("Training Bot");
    }

    frag2.displayStatus();

    std::cout  << "========================================="  << std::endl;

    frag2.highFivesGuys();

    std::cout  << "========================================="  << std::endl;

    frag1 = frag2;
    frag1.takeDamage(40);

    std::cout  << "========================================="  << std::endl;

    frag1.beRepaired(5);

    std::cout  << "========================================="  << std::endl;

    frag1.attack("Target 3");

    std::cout  << "========================================="  << std::endl;

    frag1.highFivesGuys();

    std::cout  << "========================================="  << std::endl;

    return 0;
}