/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 01:19:43 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/02 20:42:18 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
    std::cout << "\n----- Constructors -----\n";
    ScavTrap def;
    ScavTrap named("Scavvy");
    ScavTrap copy(named);

    std::cout << "\n----- Basic Functionality -----\n";
    named.attack("Target1");
    named.takeDamage(30);
    named.beRepaired(15);
    named.displayStatus();
    named.guardGate();

    std::cout << "\n----- Energy Depletion Test -----\n";
    for (int i = 0; i < 50; i++) {
        std::cout << i + 1 << ": ";
        named.attack("Training bot");
    }
    named.beRepaired(10);

    std::cout << "\n----- Death Test -----\n";
    named.takeDamage(200);
    named.attack("Ghost");
    named.guardGate();

    std::cout << "\n----- Copy Behavior Test -----\n";
    copy.attack("CopyTarget");
    copy.guardGate();
    def = named;
    def.attack("AssignedTarget");

    std::cout << "\n----- Destructors -----\n";
    return 0;
}