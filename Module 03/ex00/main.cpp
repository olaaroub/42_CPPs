/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 22:31:09 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/01 20:36:29 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {

    ClapTrap clappy("Clappy");

    std::cout << std::endl << "=========================================" << std::endl << std::endl;

    clappy.attack("Target Dummy");
    clappy.attack("Target Dummy");

    std::cout << std::endl << "=========================================" << std::endl << std::endl;

    clappy.takeDamage(5);
    clappy.takeDamage(3);

    std::cout << std::endl << "=========================================" << std::endl << std::endl;

    clappy.beRepaired(4);
    clappy.beRepaired(2);

    std::cout << std::endl << "=========================================" << std::endl << std::endl;

    for (int i = 0; i < 8; i++) {
        clappy.attack("Training Bot");
    }

    std::cout << std::endl << "=========================================" << std::endl << std::endl;

    clappy.takeDamage(15);

    std::cout << std::endl << "=========================================" << std::endl << std::endl;

    clappy.beRepaired(5);

    std::cout << std::endl << "=========================================" << std::endl << std::endl;

    clappy.attack("Ghost");

    std::cout << std::endl << "=========================================" << std::endl << std::endl;

    return 0;
}