/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 00:54:13 by olaaroub          #+#    #+#             */
/*   Updated: 2025/05/29 17:58:42 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    // {
    //     Weapon gun = Weapon("Reaver Vandal");
    //     HumanA Oussama("Oussama", gun);
    //     Oussama.attack();
    //     gun.setType("Prime 2.0 Phantom");
    //     Oussama.attack();
    // }

    // {
    //     Weapon gun = Weapon("Origin Operator");
    //     HumanB messi("Messi");
    //     messi.attack();
    //     messi.setWeapon(gun);
    //     messi.attack();
    //     gun.setType("RGX Outlaw");
    //     messi.attack();
    // }

    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    std::cout << "======================================" << std::endl;
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }

    return 0;
}