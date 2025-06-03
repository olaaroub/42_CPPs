/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 01:19:43 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/02 21:29:03 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

int main() {

    ClapTrap* scav = new FragTrap("oussamaaaaa");
    scav->attack("wlad l97ab");
    std::cout << "\n----- Constructors -----\n";
    FragTrap def;
    FragTrap named("Fraggy");
    FragTrap copy(named);

    std::cout << "\n----- Basic Functionality -----\n";
    named.attack("Target1");
    named.takeDamage(30);
    named.beRepaired(15);
    named.highFivesGuys();

    std::cout << "\n----- Energy Depletion Test -----\n";
    for (int i = 0; i < 100; i++) {
        std::cout << i + 1 << ": ";
        named.attack("Training bot");
    }
    named.beRepaired(10);

    std::cout << "\n----- Death Test -----\n";
    named.takeDamage(200);
    named.attack("Ghost");
    named.highFivesGuys();

    std::cout << "\n----- Copy Behavior Test -----\n";
    copy.attack("CopyTarget");
    copy.highFivesGuys();
    def = named;
    def.attack("AssignedTarget");

    std::cout << "\n----- Destructors -----\n";
    return 0;
}