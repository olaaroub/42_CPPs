/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 01:50:57 by olaaroub          #+#    #+#             */
/*   Updated: 2025/03/15 02:39:39 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){

    Zombie zombie;
    Zombie *all ;


    std::cout << "-------------------" << std::endl;

    zombie.announce();

    std::cout << "-------------------" << std::endl;

    all = zombie.zombiHorde(3, "Zombie from Heap");
    for (int i = 0; i < 3; i++)
        all[i].announce();

    std::cout << "-------------------" << std::endl;


    delete[] all;
}