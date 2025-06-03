/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 01:19:43 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/03 21:25:41 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
    ScavTrap def;
    ScavTrap named("Scavvy");
    ScavTrap copy(named);

    named.attack("Target1");
    named.takeDamage(30);
    named.beRepaired(15);
    named.displayStatus();
    named.guardGate();

    for (int i = 0; i < 50; i++) {
        std::cout << i + 1 << ": ";
        named.attack("Training bot");
    }
    named.beRepaired(10);

    named.takeDamage(200);
    named.attack("Ghost");
    named.guardGate();

    copy.attack("CopyTarget");
    copy.guardGate();
    def = named;
    def.attack("AssignedTarget");

    return 0;
}