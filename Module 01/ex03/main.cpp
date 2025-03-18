/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 00:54:13 by olaaroub          #+#    #+#             */
/*   Updated: 2025/03/18 05:48:55 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {
        Weapon gun = Weapon("Reaver Vandal");
        HumanA Oussama("Oussama", gun);
        Oussama.attack();
        gun.setType("Prime 2.0 Phantom");
        Oussama.attack();
    }

    {
        Weapon gun = Weapon("Origin Operator");
        HumanB Zakaria("Zakaria");
        Zakaria.setWeapon(gun);
        Zakaria.attack();
        gun.setType("RGX Outlaw");
        Zakaria.attack();
    }
    return 0;
}