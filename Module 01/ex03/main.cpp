/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 00:54:13 by olaaroub          #+#    #+#             */
/*   Updated: 2025/03/18 04:06:14 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"


// int main(){
//     Weapon ak("AK 47");
//     Weapon shot = Weapon("shotgun");
//     HumanA oussama("Oussama", ak);
//     HumanB Laaroubi("laaroubi");

//     Laaroubi.attack();
//     Laaroubi.setWeapon(&shot);
//     oussama.attack();
//     Laaroubi.attack();
//     shot.setType("another one");
//     Laaroubi.attack();

//     return 0;
// }

int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }

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