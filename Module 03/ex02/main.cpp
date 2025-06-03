/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 01:19:43 by olaaroub          #+#    #+#             */
/*   Updated: 2025/06/03 21:26:23 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

int main() {

    FragTrap    scav;
    scav.attack("wlad l97ab");
    FragTrap def;
    FragTrap named("Fraggy");
    FragTrap copy(named);

    named.attack("Target1");
    named.takeDamage(30);
    named.beRepaired(15);
    named.highFivesGuys();

    for (int i = 0; i < 100; i++) {
        std::cout << i + 1 << ": ";
        named.attack("Training bot");
    }
    named.beRepaired(10);

    named.takeDamage(200);
    named.attack("Ghost");
    named.highFivesGuys();

    copy.attack("CopyTarget");
    copy.highFivesGuys();
    def = named;
    def.attack("AssignedTarget");

    return 0;
}