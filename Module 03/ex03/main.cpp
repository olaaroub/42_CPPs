/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 01:19:43 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/03 14:39:09 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

int main() {

    std::cout << "\n\n===== Polymorphism test via ClapTrap* =====\n\n]";
    ClapTrap* polyDiamond = new DiamondTrap("PolyDiamond");
    polyDiamond->attack("Target1");
    polyDiamond->displayStatus();
    delete polyDiamond;
    std::cout << "\n==========================================\n";

    std::cout << "\n\n----- Constructors -----\n\n";
    DiamondTrap def;
    DiamondTrap named("Diamondy");
    DiamondTrap copy(named);

    std::cout << "\n\n----- Basic Functionality -----\n\n";
    named.attack("Target1");
    named.takeDamage(30);
    named.beRepaired(15);
    named.guardGate();
    named.highFivesGuys();
    named.whoAmI();

    std::cout << "\n\n----- Energy Depletion Test -----\n\n";
    for (int i = 0; i < 50; i++) {
        std::cout << i + 1 << ": ";
        named.attack("Training bot");
    }
    named.beRepaired(10);
    named.guardGate();
    named.highFivesGuys();

    std::cout << "\n\n----- Death Test -----\n\n";
    named.takeDamage(200);
    named.attack("Ghost");
    named.guardGate();
    named.highFivesGuys();
    named.whoAmI();

    std::cout << "\n\n----- Copy Behavior Test -----\n\n";
    copy.attack("CopyTarget");
    copy.guardGate();
    copy.highFivesGuys();
    copy.whoAmI();

    def = named;
    def.attack("AssignedTarget");
    def.whoAmI();

    std::cout << "\n\n----- Name Verification -----\n\n";
    DiamondTrap nameTest("NameBot");
    nameTest.whoAmI();

    std::cout << "\n\n----- Destructors -----\n\n";
    return 0;
}
