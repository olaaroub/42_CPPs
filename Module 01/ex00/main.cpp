/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 01:14:53 by olaaroub          #+#    #+#             */
/*   Updated: 2025/03/15 01:42:00 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
    Zombie zombie;
    zombie.announce();
    zombie.randomChump("Zombie from Stack");

    Zombie *all = zombie.newZombie("Zombie from Heap");
    all->announce();
    delete all;
}