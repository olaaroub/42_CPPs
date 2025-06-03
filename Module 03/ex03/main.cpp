/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 01:19:43 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/03 22:29:04 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

int main() {


    DiamondTrap diamond1;
    DiamondTrap diamond2("Diamond2");

    std::cout  << "========================================="  << std::endl;

    diamond2.attack("Target 1");

    std::cout  << "========================================="  << std::endl;

    diamond2.takeDamage(50);
    diamond2.takeDamage(30);

    std::cout  << "========================================="  << std::endl;

    diamond2.beRepaired(10);

    diamond2.displayStatus();

    std::cout  << "========================================="  << std::endl;

    for (int i = 0; i < 50; i++) {
        diamond2.attack("Training Bot");
    }

    diamond2.displayStatus();

    std::cout  << "========================================="  << std::endl;

    diamond2.guardGate();
    diamond2.highFivesGuys();
    diamond2.whoAmI();

    std::cout  << "========================================="  << std::endl;

    diamond1 = diamond2;
    diamond1.takeDamage(40);

    std::cout  << "========================================="  << std::endl;

    diamond1.beRepaired(5);

    std::cout  << "========================================="  << std::endl;

    diamond1.attack("Target 3");

    std::cout  << "========================================="  << std::endl;

    diamond1.highFivesGuys();
    diamond1.guardGate();


    std::cout  << "========================================="  << std::endl;

    return 0;
}
