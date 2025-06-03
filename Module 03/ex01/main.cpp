/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 01:19:43 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/03 22:22:17 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {

    ScavTrap scav1;
    ScavTrap scav2("Scav2");

    std::cout  << "========================================="  << std::endl;

    scav2.attack("Target 1");

    std::cout  << "========================================="  << std::endl;

    scav2.takeDamage(50);
    scav2.takeDamage(30);

    std::cout  << "========================================="  << std::endl;

    scav2.beRepaired(10);

    scav2.displayStatus();

    std::cout  << "========================================="  << std::endl;

    for (int i = 0; i < 50; i++) {
        scav2.attack("Training Bot");
    }

    scav2.displayStatus();

    std::cout  << "========================================="  << std::endl;

    scav2.guardGate();

    std::cout  << "========================================="  << std::endl;

    scav1 = scav2;
    scav1.takeDamage(40);

    std::cout  << "========================================="  << std::endl;

    scav1.beRepaired(5);

    std::cout  << "========================================="  << std::endl;

    scav1.attack("Target 3");

    std::cout  << "========================================="  << std::endl;

    scav1.guardGate();

    std::cout  << "========================================="  << std::endl;

    return 0;
}