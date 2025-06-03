/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 22:31:09 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/03 22:10:03 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {

    ClapTrap clap1;
    ClapTrap clap2("Clap2");

    std::cout  << "========================================="  << std::endl;

    clap2.attack("Target 1");
    clap2.attack("Target 2");

    std::cout  << "========================================="  << std::endl;

    clap2.takeDamage(5);
    clap2.takeDamage(3);

    std::cout  << "========================================="  << std::endl;

    clap2.beRepaired(4);

    clap2.displayStatus();

    std::cout  << "========================================="  << std::endl;

    for (int i = 0; i < 8; i++) {
        clap2.attack("Training Bot");
    }
    clap2.displayStatus();

    std::cout  << "========================================="  << std::endl;

    clap1 = clap2;
    clap1.takeDamage(15);

    std::cout  << "========================================="  << std::endl;

    clap1.beRepaired(5);

    std::cout  << "========================================="  << std::endl;

    clap1.attack("Target 3");

    std::cout  << "========================================="  << std::endl;

    return 0;
}